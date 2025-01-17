
Common_EventScript_PkmnCenterNurse::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, CountPlayerTrainerStars
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_Goodbye::
	message gText_WeHopeToSeeYouAgain
	return

@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
	end

EventScript_PkmnCenterNurse_IllTakeYourPkmn::
	message gText_IllTakeYourPkmn
	return

EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
	message gText_IllTakeYourPkmn2
	return

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn @ Changed from Common_Movement_WalkInPlaceFasterLeft to force the follower to enter their Poké Ball
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
	call CableClub_OnResume
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
.endif
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	return

EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
	copyvar VAR_0x8008, VAR_RESULT
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
	end

@ VAR_0x8004 is 1 when player has Gold Card
EventScript_PkmnCenterNurse_ReturnPkmn::
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
	message gText_RestoredPkmnToFullHealth
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_ReturnPkmn2::
	message gText_ThankYouForWaiting
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
	message CableClub_Text_PlayerIsWaiting
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_CheckPokerus::
	specialvar VAR_RESULT, IsPokerusInParty
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
	end

EventScript_PkmnCenterNurse_ExplainPokerus::
	message gText_PokerusExplanation
	setflag FLAG_POKERUS_EXPLAINED
	return

EventScript_PkmnCenterNurse_GoldCard::
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x800B, Common_Movement_Delay48
	waitmovement 0
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_AskForUsual::
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_GoldCardHealPkmn::
	setvar VAR_0x8004, 1
	goto EventScript_PkmnCenterNurse_HealPkmn
	end

Movement_PkmnCenterNurse_Bow:
	nurse_joy_bow
	delay_4
	step_end

Movement_PkmnCenterNurse_Turn:
	walk_in_place_faster_left
	step_end

EventScript_PkmnCenterPokeHelper::
	lock
	faceplayer
	msgbox EventScript_PkmnCenterPokeHelper_Text_0
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_PkmnCenterPokeHelper_Text_1, EventScript_PkmnCenterPokeHelper_Text_2, EventScript_PkmnCenterPokeHelper_Text_3, EventScript_PkmnCenterPokeHelper_Text_4
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterPokeHelper_3
	case 1, EventScript_PkmnCenterPokeHelper_4
	case 2, EventScript_PkmnCenterPokeHelper_5
	case 3, EventScript_PkmnCenterPokeHelper_6
	release
	end

EventScript_PkmnCenterPokeHelper_3:
	return

EventScript_PkmnCenterPokeHelper_4:
	return

EventScript_PkmnCenterPokeHelper_5:
	return

EventScript_PkmnCenterPokeHelper_6:
	release
	end


NicknameChanger::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq NicknameChanger_2
NicknameChanger_1:
	special BufferMonNickname
	message NicknameChanger_Text_0
	waitmessage
	waitbuttonpress
	special ChoosePartyMon
	special BufferMonNickname
	special ChangePokemonNickname
	waitstate
	waitbuttonpress
	msgbox NicknameChanger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknameChanger_4
	goto lol
	return

NicknameChanger_2:
	goto SlateportCity_NameRatersHouse_EventScript_CantRateEgg
	goto NicknameChanger_1

NicknameChanger_4:
	release
	end


lol::
	special ChoosePartyMon
	special BufferMonNickname
	special ChangePokemonNickname
	waitstate
	waitbuttonpress
	msgbox NicknameChanger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq lol_1
	goto lol
	return

lol_1:
	release
	end


NatureChanger::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq NatureChanger_2
NatureChanger_1:
	special BufferMonNickname
	message NatureChanger_Text_1
	waitmessage
	waitbuttonpress
	special ChoosePartyMon
	call Common_EventScript_NameReceivedPartyMon
	return

NatureChanger_2:
	message NatureChanger_Text_0
	waitmessage
	waitbuttonpress
	goto NatureChanger_1


PkmnCenterChansey::
	lock
	faceplayer
	message PkmnCenterChansey_Text_0
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PkmnCenterChansey_Text_1, PkmnCenterChansey_Text_2, PkmnCenterChansey_Text_3
	switch VAR_RESULT
	case 0, PkmnCenterChansey_2
	case 1, PkmnCenterChansey_3
	case 2, PkmnCenterChansey_4
	return

PkmnCenterChansey_2:
	closemessage
	message PkmnCenterChansey_Text_4
	playfanfare MUS_HEAL
	waitfanfare
	waitbuttonpress
	closemessage
	special HealHP
	callnative UpdateFollowingPokemon
	release
	end

PkmnCenterChansey_3:
	closemessage
	message PkmnCenterChansey_Text_5
	playfanfare MUS_HEAL
	waitfanfare
	waitbuttonpress
	closemessage
	special HealStatus
	callnative UpdateFollowingPokemon
	release
	end

PkmnCenterChansey_4:
	release
	end


EventScript_PkmnCenterPokeHelper_Text_0:
	.string "Hello.$"

EventScript_PkmnCenterPokeHelper_Text_1:
	.string "Change Nature$"

EventScript_PkmnCenterPokeHelper_Text_2:
	.string "Change Gender$"

EventScript_PkmnCenterPokeHelper_Text_3:
	.string "Change Tera Type$"

EventScript_PkmnCenterPokeHelper_Text_4:
	.string "cancel$"

NicknameChanger_Text_0:
	.string "What new nickname would you want\n"
	.string "{STR_VAR_1} to get?$"

NicknameChanger_Text_1:
	.string "Is this the nickname you want?$"

NatureChanger_Text_0:
	.string "Thats.. an egg.\n"
	.string "Eggs can't be nature swapped.$"

NatureChanger_Text_1:
	.string "What new nature would you want\n"
	.string "{STR_VAR_1} to get?$"

PkmnCenterChansey_Text_0:
	.string "Chansey: Chansey!$"

PkmnCenterChansey_Text_1:
	.string "Healing$"

PkmnCenterChansey_Text_2:
	.string "Status Removal$"

PkmnCenterChansey_Text_3:
	.string "Cancel$"

PkmnCenterChansey_Text_4:
	.string "Chansey used Soft Boiled!$"

PkmnCenterChansey_Text_5:
	.string "Chansey used Heal Bell!$"
