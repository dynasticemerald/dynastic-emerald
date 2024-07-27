# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end


OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable::
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	message OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_Text_0
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_FOLLOWER_DISABLE, OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_2
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_FOLLOWER_DISABLE, OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_3
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_2:
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_FOLLOWER_DISABLE
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EnterPokeballMovement
	return

OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_3:
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_FOLLOWER_DISABLE
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, ExitPokeballMovement
	return


OldaleTown_PokemonCenter_1F_EventScript_FollowerEnableDisable_Text_0:
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey there, first time here huh? Well not\n"
	.string "me i basically live here lol... So i heard\l"
	.string "you like ur Pokémon alot? Well do i have\l"
	.string "great news for you today.$"
