
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto MoveTutor_EventScript_SwaggerTaught
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	goto MoveTutor_EventScript_MetronomeTaught
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	goto MoveTutor_EventScript_SubstituteTaught
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
	@setvar VAR_0x8005, MOVE_NONE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor::
	lock
	faceplayer
	msgbox SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_0, MSGBOX_DEFAULT
	msgbox SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_2
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_3
SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_1:
	release
	end

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_2:
	msgbox SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_2, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_3, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_4, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_5
	switch VAR_RESULT
	case 0, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_7
	case 1, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_8
	case 2, SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_9
	goto SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_1

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_3:
	msgbox SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_7, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_7:
	lock
	faceplayer
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_11
	goto HiddenTutor_EventScript_HiddenSecretPowerTaught
	goto SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_1

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_8:
	lock
	faceplayer
	setvar VAR_0x8005, MOVE_SECRET_POWER
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_14
	goto HiddenTutor_EventScript_HiddenSecretPowerTaught
	goto SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_1

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_9:
	msgbox SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_6, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_11:
	return

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_14:
	return


HiddenTutor_EventScript_HiddenSecretPowerTaught::
	lock
	faceplayer
	msgbox HiddenTutor_EventScript_HiddenSecretPowerTaught_Text_0, MSGBOX_DEFAULT
	release
	end


Defog_Tutor::
	lock
	faceplayer
	msgbox Defog_Tutor_Text_0, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DEFOG
	special ChooseMonForMoveTutor
	waitstate
	release
	end


PowerUpMoves_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, PowerUpMoves_Tutor_Text_0, PowerUpMoves_Tutor_Text_1, PowerUpMoves_Tutor_Text_2, PowerUpMoves_Tutor_Text_3, PowerUpMoves_Tutor_Text_4, PowerUpMoves_Tutor_Text_5, PowerUpMoves_Tutor_Text_6
	switch VAR_RESULT
	case 0, PowerUpMoves_Tutor_2
	case 1, PowerUpMoves_Tutor_3
	case 2, PowerUpMoves_Tutor_4
	case 3, PowerUpMoves_Tutor_5
	case 4, PowerUpMoves_Tutor_6
	case 5, PowerUpMoves_Tutor_7
	case 6, PowerUpMoves_Tutor_8
	return

PowerUpMoves_Tutor_2:
	setvar VAR_0x8005, MOVE_FLAME_CHARGE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_3:
	setvar VAR_0x8005, MOVE_TRAILBLAZE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_4:
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_5:
	setvar VAR_0x8005, MOVE_CHARGE_BEAM
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_6:
	setvar VAR_0x8005, MOVE_WORK_UP
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_7:
	setvar VAR_0x8005, MOVE_HONE_CLAWS
	special ChooseMonForMoveTutor
	waitstate
	release
	end

PowerUpMoves_Tutor_8:
	setvar VAR_0x8005, MOVE_AGILITY
	special ChooseMonForMoveTutor
	waitstate
	release
	end


KnockoffPursuit_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, KnockoffPursuit_Tutor_Text_0, KnockoffPursuit_Tutor_Text_1
	switch VAR_RESULT
	case 0, KnockoffPursuit_Tutor_2
	return

KnockoffPursuit_Tutor_2:
	setvar VAR_0x8005, MOVE_PURSUIT
	special ChooseMonForMoveTutor
	waitstate
	release
	end


BugMoves_Tutor::
	lock
	faceplayer
	msgbox BugMoves_Tutor_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_ORAN_BERRY
	compare VAR_RESULT, 0
	goto_if_eq BugMoves_Tutor_1
	msgbox BugMoves_Tutor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BugMoves_Tutor_4
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_4
	msgbox BugMoves_Tutor_Text_4, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, BugMoves_Tutor_Text_5, BugMoves_Tutor_Text_6, BugMoves_Tutor_Text_7, BugMoves_Tutor_Text_8
	switch VAR_RESULT
	case 0, BugMoves_Tutor_10
	case 1, BugMoves_Tutor_11
	case 2, BugMoves_Tutor_12
	case 3, BugMoves_Tutor_13
	return

BugMoves_Tutor_1:
	msgbox BugMoves_Tutor_Text_1, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_4:
	msgbox BugMoves_Tutor_Text_3, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_10:
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_14
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_11:
	setvar VAR_0x8005, MOVE_SILVER_WIND
	goto MoveTutor_EventScript_OpenPartyMenu
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_17
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_12:
	setvar VAR_0x8005, MOVE_POUNCE
	goto MoveTutor_EventScript_OpenPartyMenu
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_20
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_13:
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
	goto MoveTutor_EventScript_OpenPartyMenu
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_23
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_14:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_17:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_20:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_23:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end


Hazards_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Hazards_Tutor_Text_0, Hazards_Tutor_Text_1, Hazards_Tutor_Text_2
	switch VAR_RESULT
	case 0, Hazards_Tutor_2
	case 1, Hazards_Tutor_3
	case 2, Hazards_Tutor_4
	case 3, Hazards_Tutor_5
	return

Hazards_Tutor_2:
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	special ChooseMonForMoveTutor
	waitstate
	release
	end

Hazards_Tutor_3:
	setvar VAR_0x8005, MOVE_SPIKES
	special ChooseMonForMoveTutor
	waitstate
	release
	end

Hazards_Tutor_4:
	setvar VAR_0x8005, MOVE_STEEL_SPIKES
	special ChooseMonForMoveTutor
	waitstate
	release
	end

Hazards_Tutor_5:
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	special ChooseMonForMoveTutor
	waitstate
	release
	end


ArrayOfMoves_Tutor::
	lock
	faceplayer
	msgbox ArrayOfMoves_Tutor_Text_0
	dynmultichoice 0, 0, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, ArrayOfMoves_Tutor_Text_1, ArrayOfMoves_Tutor_Text_2, ArrayOfMoves_Tutor_Text_3, ArrayOfMoves_Tutor_Text_4, ArrayOfMoves_Tutor_Text_5, ArrayOfMoves_Tutor_Text_6, ArrayOfMoves_Tutor_Text_7, ArrayOfMoves_Tutor_Text_8, ArrayOfMoves_Tutor_Text_9, ArrayOfMoves_Tutor_Text_10, ArrayOfMoves_Tutor_Text_11, ArrayOfMoves_Tutor_Text_12, ArrayOfMoves_Tutor_Text_13, ArrayOfMoves_Tutor_Text_14, ArrayOfMoves_Tutor_Text_15, ArrayOfMoves_Tutor_Text_16
	switch VAR_RESULT
	case 0, ArrayOfMoves_Tutor_2
	case 1, ArrayOfMoves_Tutor_3
	case 2, ArrayOfMoves_Tutor_4
	case 3, ArrayOfMoves_Tutor_5
	case 4, ArrayOfMoves_Tutor_6
	case 5, ArrayOfMoves_Tutor_7
	case 6, ArrayOfMoves_Tutor_8
	case 7, ArrayOfMoves_Tutor_9
	case 8, ArrayOfMoves_Tutor_10
	case 9, ArrayOfMoves_Tutor_11
	case 10, ArrayOfMoves_Tutor_12
	case 11, ArrayOfMoves_Tutor_13
	case 12, ArrayOfMoves_Tutor_14
	case 13, ArrayOfMoves_Tutor_15
	case 14, ArrayOfMoves_Tutor_16
	case 15, ArrayOfMoves_Tutor_17
	return

ArrayOfMoves_Tutor_2:
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_3:
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_4:
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_5:
	setvar VAR_0x8005, MOVE_CROSS_CHOP
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_6:
	setvar VAR_0x8005, MOVE_LEAF_BLADE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_7:
	setvar VAR_0x8005, MOVE_POISON_JAB
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_8:
	setvar VAR_0x8005, MOVE_MEGAHORN
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_9:
	setvar VAR_0x8005, MOVE_DRILL_RUN
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_10:
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_11:
	setvar VAR_0x8005, MOVE_ROCK_BLAST
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_12:
	setvar VAR_0x8005, MOVE_PIN_MISSILE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_13:
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_14:
	setvar VAR_0x8005, MOVE_POWER_GEM
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_15:
	setvar VAR_0x8005, MOVE_BLAZE_KICK
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_16:
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_17:
	setvar VAR_0x8005, MOVE_HEAT_CRASH
	special ChooseMonForMoveTutor
	waitstate
	release
	end


SpecialUpMoves_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, SpecialUpMoves_Tutor_Text_0, SpecialUpMoves_Tutor_Text_1
	switch VAR_RESULT
	case 0, SpecialUpMoves_Tutor_2
	case 1, SpecialUpMoves_Tutor_3
	return

SpecialUpMoves_Tutor_2:
	setvar VAR_0x8005, MOVE_METEOR_BEAM
	special ChooseMonForMoveTutor
	waitstate
	release
	end

SpecialUpMoves_Tutor_3:
	setvar VAR_0x8005, MOVE_RAZOR_WIND
	special ChooseMonForMoveTutor
	waitstate
	release
	end


FocusBlastTutor::
	lock
	faceplayer
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
	special ChooseMonForMoveTutor
	waitstate
	release
	end


ElementalFangsTutor::
	lock
	faceplayer
	checktrainerflag TRAINER_BRAWLY_1
	goto_if 0, ElementalFangsTutor_1
	msgbox ElementalFangsTutor_Text_1, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox ElementalFangsTutor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ElementalFangsTutor_4
	msgbox ElementalFangsTutor_Text_6, MSGBOX_DEFAULT
	applymovement 2, LookUp
	waitmovement 0
	release
	end

ElementalFangsTutor_1:
	msgbox ElementalFangsTutor_Text_0, MSGBOX_DEFAULT
	release
	end

ElementalFangsTutor_4:
	dynmultichoice 0, 0, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, ElementalFangsTutor_Text_3, ElementalFangsTutor_Text_4, ElementalFangsTutor_Text_5
	switch VAR_RESULT
	case 0, ElementalFangsTutor_8
	case 1, ElementalFangsTutor_9
	case 2, ElementalFangsTutor_10
	case 3, ElementalFangsTutor_11
	return

ElementalFangsTutor_8:
	setvar VAR_0x8005, MOVE_ICE_FANG
	special ChooseMonForMoveTutor
	waitstate
	applymovement 2, LookUp
	waitmovement 0
	release
	end

ElementalFangsTutor_9:
	setvar VAR_0x8005, MOVE_FIRE_FANG
	special ChooseMonForMoveTutor
	waitstate
	applymovement 2, LookUp
	waitmovement 0
	release
	end

ElementalFangsTutor_10:
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	special ChooseMonForMoveTutor
	waitstate
	applymovement 2, LookUp
	waitmovement 0
	release
	end

ElementalFangsTutor_11:
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	special ChooseMonForMoveTutor
	waitstate
	applymovement 2, LookUp
	waitmovement 0
	release
	end


DragonDanceTutor::
	lock
	faceplayer
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
	special ChooseMonForMoveTutor
	waitstate
	release
	end


SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_0:
	.string "Every Pokémon can learn one of these\n"
	.string "two coverage moves. These moves are\l"
	.string "called Hidden Power and Secret Power.\l"
	.string "While Hidden Power is a Special Move;\l"
	.string "Secret Power is a Physical Move.$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_1:
	.string "... ....\n"
	.string "... ....\p"
	.string "Oh me?\l"
	.string "I am the tutor who tutors these moves\l"
	.string "to Pokémon trainers have!\p"
	.string "would you like to teach one of these\n"
	.string "moves to you're Pokémon?$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_2:
	.string "Well then Trainer wich Pokémon do you\n"
	.string "want to teach one of these moves or\n"
	.string "both, whatever you want!$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_3:
	.string "Hidden Power$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_4:
	.string "Secret Power$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_5:
	.string "Cancel$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_6:
	.string "That's fine take you're time, you can\nCome back anytime!$"

SlateportCity_EventScript_SecretPowerAndHiddenPowerTutor_Text_7:
	.string "That's fine take you're time, you can\n"
	.string "Come back anytime!$"

HiddenTutor_EventScript_HiddenSecretPowerTaught_Text_0:
	.string "Thank you for this amazing experience\n"
	.string "Hope to see you again soon!$"

Defog_Tutor_Text_0:
	.string "Hi there :3\n"
	.string "I am who they call the 'Defog' Tutor i\l"
	.string "love using defog in battle against\l"
	.string "those pesky hazards.\l"
	.string "Like why is ceaseless Edge even a\l"
	.string "thing??\p"
	.string "Thank god for Rocky Helmet Corviknight\n"
	.string "am i right, Fellas?\n"
	.string "My jokes haven't seen the light of day...\l"
	.string "anyways... would you like to teach one\l"
	.string "of ur Pokémon the Move Defog?$"

PowerUpMoves_Tutor_Text_0:
	.string "Flame Charge$"

PowerUpMoves_Tutor_Text_1:
	.string "Trailblaze$"

PowerUpMoves_Tutor_Text_2:
	.string "Power-Up Punch$"

PowerUpMoves_Tutor_Text_3:
	.string "Charge Beam$"

PowerUpMoves_Tutor_Text_4:
	.string "Work Up$"

PowerUpMoves_Tutor_Text_5:
	.string "Hone Claws$"

PowerUpMoves_Tutor_Text_6:
	.string "Agility$"

KnockoffPursuit_Tutor_Text_0:
	.string "Knock Off$"

KnockoffPursuit_Tutor_Text_1:
	.string "Pursuit$"

BugMoves_Tutor_Text_0:
	.string "Hello! My Bug type Pokémon LOVE Oran\n"
	.string "Berries! If you give me one, I can teach\l"
	.string "some Bug-Type moves to one of your\l"
	.string "Pokémon.$"

BugMoves_Tutor_Text_1:
	.string "You don't carry oran berries?\n"
	.string "And you call Yourself a Pokémon Trainer.\l"
	.string "mphm.$"

BugMoves_Tutor_Text_2:
	.string "Oh! An Oran Berry! I can teach a good\n"
	.string "Number of Bug-Type moves in exchange\l"
	.string "for one of those!$"

BugMoves_Tutor_Text_3:
	.string "Aw, shooks my weedle was so hungry, you\n"
	.string "monster >:($"

BugMoves_Tutor_Text_4:
	.string "Great! Wich move should i teach to one\n"
	.string "of Your Pokémon?$"

BugMoves_Tutor_Text_5:
	.string "Bug Bite$"

BugMoves_Tutor_Text_6:
	.string "Silver Wind$"

BugMoves_Tutor_Text_7:
	.string "Pounce$"

BugMoves_Tutor_Text_8:
	.string "Struggle Bug$"

BugMoves_Tutor_Text_9:
	.string "Aw, shooks my Weedle is at 1 hp, you\n"
	.string "monster >:($"

BugMoves_Tutor_Text_10:
	.string "Thank you! now my weedle can be Healed\n"
	.string "Up!$"

Hazards_Tutor_Text_0:
	.string "Stealth Rock$"

Hazards_Tutor_Text_1:
	.string "Spikes$"

Hazards_Tutor_Text_2:
	.string "Steel Spikes$"

ArrayOfMoves_Tutor_Text_0:
	.string "Hi there, I teach a array of good moves,\n"
	.string "that a trainer like you would probally\l"
	.string "really like. Here have a look!$"

ArrayOfMoves_Tutor_Text_1:
	.string "Mystical Fire$"

ArrayOfMoves_Tutor_Text_2:
	.string "Pain Split$"

ArrayOfMoves_Tutor_Text_3:
	.string "Psychic Fangs$"

ArrayOfMoves_Tutor_Text_4:
	.string "Cross Chop$"

ArrayOfMoves_Tutor_Text_5:
	.string "Leaf Blade$"

ArrayOfMoves_Tutor_Text_6:
	.string "Poison Jab$"

ArrayOfMoves_Tutor_Text_7:
	.string "Megahorn$"

ArrayOfMoves_Tutor_Text_8:
	.string "Drill Run$"

ArrayOfMoves_Tutor_Text_9:
	.string "Alluring Voice$"

ArrayOfMoves_Tutor_Text_10:
	.string "Rock Blast$"

ArrayOfMoves_Tutor_Text_11:
	.string "Pin Missile$"

ArrayOfMoves_Tutor_Text_12:
	.string "Icicle Spear$"

ArrayOfMoves_Tutor_Text_13:
	.string "Power Gem$"

ArrayOfMoves_Tutor_Text_14:
	.string "Blaze Kick$"

ArrayOfMoves_Tutor_Text_15:
	.string "Phantom Force$"

ArrayOfMoves_Tutor_Text_16:
	.string "Heat Crash$"

SpecialUpMoves_Tutor_Text_0:
	.string "Meteor Beam$"

SpecialUpMoves_Tutor_Text_1:
	.string "Razor Wind$"

ElementalFangsTutor_Text_0:
	.string "My Boltund know the three Elemental\n"
	.string "fang moves! Ice Fang, Fire Fang,\l"
	.string "Thunder Fang. I can teach you're\l"
	.string "Pokémon these moves too but you will\l"
	.string "have to show me the knuckle badge\l"
	.string "first.$"

ElementalFangsTutor_Text_1:
	.string "My Boltund know the three Elemental\n"
	.string "fang moves! Ice Fang, Fire Fang,\l"
	.string "Thunder Fang.$"

ElementalFangsTutor_Text_2:
	.string "I see you have the Knuckle Badge, Fair\n"
	.string "Enough. Do you want me teach one of ur\l"
	.string "pokemon one of the Elemental Fangs?$"

ElementalFangsTutor_Text_3:
	.string "Ice Fang$"

ElementalFangsTutor_Text_4:
	.string "Fire Fang$"

ElementalFangsTutor_Text_5:
	.string "Thunder Fang$"

ElementalFangsTutor_Text_6:
	.string "Owh, well that okay come back anytime!$"
