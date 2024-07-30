#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

#define REGION_MAX_NAME_LENGTH 6

#define REGION_KANTO 0
#define REGION_JOHTO 1
#define REGION_HOENN 2
#define REGION_SINNOH 3
#define REGION_UNOVA 4
#define REGION_KALOS 5
#define REGION_ALOLA 6
#define REGION_GALAR 7
#define REGION_PALDEA 8

#define REGION_COUNT 9

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];
extern const u8 gRegionNames[REGION_COUNT][REGION_MAX_NAME_LENGTH + 1];

const u8 *GetRegionName(u16 region);
u16 GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);

#endif // GUARD_STARTER_CHOOSE_H
