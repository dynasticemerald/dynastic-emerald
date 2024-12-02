//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/trainer_control.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'test/battle/trainer_control.h' to remove #line markers.
//


    [0] =
    {
        .trainerName = _("Test1"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .nickname = COMPOUND_STRING("Bubbles"),
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_FEMALE,
            .heldItem = ITEM_ASSAULT_VEST,
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
            .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30),
            .ability = ABILITY_TELEPATHY,
            .lvl = 67,
            .ball = ITEM_MASTER_BALL,
            .friendship = 42,
            .nature = NATURE_HASTY,
            .isShiny = TRUE,
            .dynamaxLevel = 5,
            .shouldUseDynamax = TRUE,
            .moves = {
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .ability = ABILITY_SHADOW_TAG,
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
