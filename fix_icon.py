from PIL import Image

ICON = "graphics/pokemon/crocurn/icon.png"
PAL  = "graphics/pokemon/icon_palettes/pal0.pal"

pal = [tuple(map(int, l.split())) for l in open(PAL).read().splitlines()[3:19]]
im = Image.open(ICON).convert("RGBA")

def nearest(c):
    return min(range(16), key=lambda i: sum((a - b) ** 2 for a, b in zip(c, pal[i])))

out = Image.new("P", im.size, 0)
px, po = im.load(), out.load()
for y in range(im.height):
    for x in range(im.width):
        r, g, b, a = px[x, y]
        po[x, y] = 0 if a < 128 else nearest((r, g, b))

out.putpalette([v for c in pal for v in c] + [0] * (768 - 48))
out.save(ICON, bits=4)
