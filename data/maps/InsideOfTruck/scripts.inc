
InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InsideOfTruck_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnFrame:
	map_script_2 VAR_REGION_CHECK, 0, RegionChoice
	.2byte 0

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end

InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand moving and\n"
	.string "delivery service.$"

ModesCheck::
	lock
	fadescreen FADE_TO_BLACK
	msgbox ModesCheck_Text_0, MSGBOX_DEFAULT
	msgbox ModesCheck_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ModesCheck_1
	goto ModesCheck_Continue
	return

ModesCheck_1:
	setvar VAR_MODES_CHECK, 1
	message ModesCheck_Text_2
	waitmessage
	fadescreen FADE_FROM_BLACK
	release
	end


ModesCheck_Continue::
	closemessage
	message ModesCheck_Continue_Text_0
	waitmessage
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ModesCheck_Continue_Text_1, ModesCheck_Continue_Text_2, ModesCheck_Continue_Text_3
	switch VAR_RESULT
	case 0, ModesCheck_Continue_3
ModesCheck_Continue_1:
	end

ModesCheck_Continue_3:
	message ModesCheck_Continue_Text_4
	waitmessage
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ModesCheck_Continue_Text_5, ModesCheck_Continue_Text_3
	goto ModesCheck_Continue_1


WSwitch::
	switch VAR_RESULT
	case 0, WSwitch_2
	case 1, WSwitch_3
	case 3, WSwitch_4
	return

WSwitch_2:
	msgbox ModesCheck_Text_MinimalGrinding, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WSwitch_5
	goto ModesCheck_Continue
	return

WSwitch_3:
	msgbox ModesCheck_Text_Test, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WSwitch_8
	goto ModesCheck_Continue
	return

WSwitch_4:
	setvar VAR_MODES_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

WSwitch_5:
	setflag FLAG_MINIMAL_GRINDING_MODE
	setvar VAR_MODES_CHECK, 1
	goto ModesCheck_Continue
	return

WSwitch_8:
	setflag FLAG_RANDOM_NICKNAMES
	setvar VAR_MODES_CHECK, 1
	goto ModesCheck_Continue
	return


RegionChoice::
	lock
	fadescreen FADE_TO_BLACK
	message RegionChoice_Text_0
	waitmessage
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, RegionChoice_Text_1, RegionChoice_Text_2, RegionChoice_Text_3, RegionChoice_Text_4, RegionChoice_Text_5, RegionChoice_Text_6, RegionChoice_Text_7, RegionChoice_Text_8, RegionChoice_Text_9
	switch VAR_RESULT
	case 0, RegionChoice_2
	case 1, RegionChoice_3
	case 2, RegionChoice_4
	case 3, RegionChoice_5
	case 4, RegionChoice_6
	case 5, RegionChoice_7
	case 6, RegionChoice_8
	case 7, RegionChoice_9
	case 8, RegionChoice_10
	case MULTI_B_PRESSED, RegionChoice_11
RegionChoice_11:
	setvar VAR_REGION_CHOICE, 2
	msgbox RegionChoice_Text_12, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_2:
	setvar VAR_REGION_CHOICE, 0
	msgbox RegionChoice_Text_10, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_3:
	setvar VAR_REGION_CHOICE, 1
	msgbox RegionChoice_Text_11, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_4:
	setvar VAR_REGION_CHOICE, 2
	msgbox RegionChoice_Text_12, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_5:
	setvar VAR_REGION_CHOICE, 3
	msgbox RegionChoice_Text_13, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_6:
	setvar VAR_REGION_CHOICE, 4
	msgbox RegionChoice_Text_14, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_7:
	setvar VAR_REGION_CHOICE, 5
	msgbox RegionChoice_Text_15, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_8:
	setvar VAR_REGION_CHOICE, 6
	msgbox RegionChoice_Text_16, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_9:
	setvar VAR_REGION_CHOICE, 7
	msgbox RegionChoice_Text_17, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end

RegionChoice_10:
	setvar VAR_REGION_CHOICE, 8
	msgbox RegionChoice_Text_18, MSGBOX_DEFAULT
	copyvar VAR_REGION_CHOICE, VAR_RESULT
	setvar VAR_REGION_CHECK, 1
	fadescreen FADE_FROM_BLACK
	release
	end


ModesCheck_Text_0:
	.string "Please stop smashing {A_BUTTON} and properly\n"
	.string "answer the following questions.$"

ModesCheck_Text_1:
	.string "Would you like to play Dynastic Emerald\n"
	.string "without any custom options?$"

ModesCheck_Text_2:
	.string "Dynastic Emerald will be played without\n"
	.string "any custom options, Enjoy!$"

ModesCheck_Continue_Text_0:
	.string "Press {A_BUTTON} to select an Option.$"

ModesCheck_Continue_Text_1:
	.string "Modes$"

ModesCheck_Continue_Text_2:
	.string "Misc$"

ModesCheck_Continue_Text_3:
	.string "Cancel$"

ModesCheck_Continue_Text_4:
	.string "Press {A_BUTTON} to select a mode\n"
	.string "Press {B_BUTTON} to exit Menu$"

ModesCheck_Continue_Text_5:
	.string "Minimal Grinding$"

RegionChoice_Text_0:
	.string "Kaixer: Hello, {PLAYER}. Wich region\n"
	.string "would you like ur starter to be from?$"

RegionChoice_Text_1:
	.string "Kanto$"

RegionChoice_Text_2:
	.string "Johto$"

RegionChoice_Text_3:
	.string "Hoenn$"

RegionChoice_Text_4:
	.string "Sinnoh$"

RegionChoice_Text_5:
	.string "Unova$"

RegionChoice_Text_6:
	.string "Kalos$"

RegionChoice_Text_7:
	.string "Alola$"

RegionChoice_Text_8:
	.string "Galar$"

RegionChoice_Text_9:
	.string "Paldea$"

RegionChoice_Text_10:
	.string "Ah the Kanto region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_11:
	.string "Ah the Johto region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_12:
	.string "Ah the Hoenn region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_13:
	.string "Ah the Sinnoh region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_14:
	.string "Ah the Unova region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_15:
	.string "Ah the Kalos region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_16:
	.string "Ah the Alola region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_17:
	.string "Ah the Galar region?\n"
	.string "{PLAYER}, Good choice.$"

RegionChoice_Text_18:
	.string "Ah the Paldea region?\n"
	.string "{PLAYER}, Good choice.$"

ModesCheck_Text_MinimalGrinding::
	.string "Minimal Grinding mode guarantees all\n"
	.string "Pokémon to have perfect IVs and EVs\l"
	.string "cannot be obtained.\p"
	.string "This is mostly for people who dislike\n"
	.string "grinding for perfect IVs and training EVs.\p"
	.string "Do you want to turn on Minimal Grinding\n"
	.string "Mode?$"

ModesCheck_Text_DoublesOnly::
	.string "Doubles Only Mode makes all wild and\n"
	.string "trainer battles forced double battles.\p"
	.string "This is mainly for people who like a\n"
	.string "challenge or for people who are more\l"
	.string "into VGC than Singles.\p"
	.string "Do you want to turn on Doubles Only\n"
	.string "Mode?$"

ModesCheck_Text_Test::
	.string "Test.$"
