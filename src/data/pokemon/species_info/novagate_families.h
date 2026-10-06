#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenNovagate[] =
{
#endif

    [SPECIES_CROCURN] =
    {
        .baseHP        = 52,
        .baseAttack    = 67,
        .baseDefense   = 58,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_SWIFT_SWIM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Crocurn"),
        .cryId = CRY_TOTODILE,
        .natDexNum = NATIONAL_DEX_CROCURN,
        .categoryName = _("Skull Croc"),
        .height = 7,
        .weight = 254,
        .description = COMPOUND_STRING(
            "This Water-type starter crocodile wears\n"
            "a bony skull that resembles a Dunsparce.\n"
            "The skull is said to be a memento from\n"
            "an ancient relative."),
        .pokemonScale = 512,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crocurn,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Crocurn,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Crocurn,
        .shinyPalette = gMonShinyPalette_Crocurn,
        .iconSprite = gMonIcon_Crocurn,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Crocurn)
        .teachableLearnset = sTotodileTeachableLearnset,
    },
    
    [SPECIES_MOLROOT] =
    {
        .baseHP        = 56,
        .baseAttack    = 58,
        .baseDefense   = 62,
        .baseSpeed     = 38,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_EARTH_EATER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Molroot"),
        .cryId = CRY_SANDSHREW,
        .natDexNum = NATIONAL_DEX_MOLROOT,
        .categoryName = _("Root Mole"),
        .height = 5,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Only the leaf on its back pokes above\n"
            "the soil as it tunnels. Its snout roots\n"
            "sense water deep underground, and it\n"
            "digs straight toward the nearest spring."),
        .pokemonScale = 512,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Molroot,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Molroot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Molroot,
        .shinyPalette = gMonShinyPalette_Molroot,
        .iconSprite = gMonIcon_Molroot,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Molroot)
        OVERWORLD(
            sPicTable_Molroot,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Molroot,
            gShinyOverworldPalette_Molroot
        )
        .teachableLearnset = sBulbasaurTeachableLearnset,
    },

        [SPECIES_HISSARI] =
    {
        .baseHP        = 44,
        .baseAttack    = 62,
        .baseDefense   = 46,
        .baseSpeed     = 68,
        .baseSpAttack  = 58,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SHED_SKIN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Hissari"),
        .cryId = CRY_EKANS,
        .natDexNum = NATIONAL_DEX_HISSARI,
        .categoryName = _("Ember Snake"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Rows of hardened spikes run down its\n"
            "spine, each one glowing faintly with\n"
            "trapped heat. When threatened, it coils\n"
            "tight and lets its whole body smolder."),
        .pokemonScale = 512,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hissari,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Hissari,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Hissari,
        .shinyPalette = gMonShinyPalette_Hissari,
        .iconSprite = gMonIcon_Hissari,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Hissari)
        OVERWORLD(
            sPicTable_Hissari,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Hissari,
            gShinyOverworldPalette_Hissari
        )
        .teachableLearnset = sBulbasaurTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif