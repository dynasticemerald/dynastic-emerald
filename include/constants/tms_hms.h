#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(FALSE_SWIPE) \
    F(DRAGON_CLAW) \
    F(WATER_PULSE) \
    F(CALM_MIND) \
    F(ROAR) \
    F(TOXIC) \
    F(ICE_FANG) \
    F(BULK_UP) \
    F(BULLET_SEED) \
    F(HIDDEN_POWER) \
    F(FIRE_FANG) \
    F(STEALTH_ROCK) \
    F(ICE_BEAM) \
    F(BLIZZARD) \
    F(FLAME_CHARGE) \
    F(LIGHT_SCREEN) \
    F(PROTECT) \
    F(THUNDER_FANG) \
    F(GIGA_DRAIN) \
    F(TRAILBLAZE) \
    F(FRUSTRATION) \
    F(SOLAR_BEAM) \
    F(IRON_TAIL) \
    F(THUNDERBOLT) \
    F(THUNDER) \
    F(EARTHQUAKE) \
    F(RETURN) \
    F(DIG) \
    F(PSYCHIC) \
    F(SHADOW_BALL) \
    F(BRICK_BREAK) \
    F(DOUBLE_TEAM) \
    F(REFLECT) \
    F(SHOCK_WAVE) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(PSYCHIC_FANGS) \
    F(FIRE_BLAST) \
    F(ROCK_TOMB) \
    F(AERIAL_ACE) \
    F(TORMENT) \
    F(FACADE) \
    F(SECRET_POWER) \
    F(REST) \
    F(ATTRACT) \
    F(THIEF) \
    F(STEEL_WING) \
    F(SKILL_SWAP) \
    F(TEMPER_FLARE) \
    F(OVERHEAT) \
    F(FLIP_TURN) \
    F(GRASSY_GLIDE) \
    F(VOLT_SWITCH) \
    F(U_TURN) \
    F(ICE_PUNCH) \
    F(THUNDER_PUNCH) \
    F(FIRE_PUNCH) \
    F(ICE_SPINNER) \

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
