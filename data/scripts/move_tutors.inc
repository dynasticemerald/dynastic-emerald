
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
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PowerUpMoves_Tutor_Text_0, PowerUpMoves_Tutor_Text_1, PowerUpMoves_Tutor_Text_2, PowerUpMoves_Tutor_Text_3, PowerUpMoves_Tutor_Text_4, PowerUpMoves_Tutor_Text_5
	switch VAR_RESULT
	case 0, PowerUpMoves_Tutor_2
	case 1, PowerUpMoves_Tutor_3
	case 2, PowerUpMoves_Tutor_4
	case 3, PowerUpMoves_Tutor_5
	case 4, PowerUpMoves_Tutor_6
	case 5, PowerUpMoves_Tutor_7
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


KnockoffPursuit_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, KnockoffPursuit_Tutor_Text_0, KnockoffPursuit_Tutor_Text_1
	switch VAR_RESULT
	case 0, KnockoffPursuit_Tutor_2
	case 1, KnockoffPursuit_Tutor_3
	return

KnockoffPursuit_Tutor_2:
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	special ChooseMonForMoveTutor
	waitstate
	release
	end

KnockoffPursuit_Tutor_3:
	setvar VAR_0x8005, MOVE_PURSUIT
	special ChooseMonForMoveTutor
	waitstate
	release
	end


ElementalFangs_Tutor::
	lock
	faceplayer
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, ElementalFangs_Tutor_Text_0, ElementalFangs_Tutor_Text_1, ElementalFangs_Tutor_Text_2
	switch VAR_RESULT
	case 0, ElementalFangs_Tutor_2
	case 1, ElementalFangs_Tutor_3
	case 2, ElementalFangs_Tutor_4
	return

ElementalFangs_Tutor_2:
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ElementalFangs_Tutor_3:
	setvar VAR_0x8005, MOVE_ICE_FANG
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ElementalFangs_Tutor_4:
	setvar VAR_0x8005, MOVE_FIRE_FANG
	special ChooseMonForMoveTutor
	waitstate
	release
	end


BugMoves_Tutor::
	lock
	faceplayer
	msgbox BugMoves_Tutor_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_ORAN_BERRY, 1
	compare VAR_RESULT, 0
	goto_if_eq BugMoves_Tutor_1
	msgbox BugMoves_Tutor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BugMoves_Tutor_4
	msgbox BugMoves_Tutor_Text_4, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, BugMoves_Tutor_Text_5, BugMoves_Tutor_Text_6, BugMoves_Tutor_Text_7, BugMoves_Tutor_Text_8
	switch VAR_RESULT
	case 0, BugMoves_Tutor_8
	case 1, BugMoves_Tutor_9
	case 2, BugMoves_Tutor_10
	case 3, BugMoves_Tutor_11
	return

BugMoves_Tutor_1:
	msgbox BugMoves_Tutor_Text_1, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_4:
	msgbox BugMoves_Tutor_Text_3, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_8:
	setvar VAR_0x8005, MOVE_BUG_BITE
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_12
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_9:
	setvar VAR_0x8005, MOVE_SILVER_WIND
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_15
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_10:
	setvar VAR_0x8005, MOVE_POUNCE
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_18
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_11:
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BugMoves_Tutor_21
	removeitem ITEM_ORAN_BERRY, 1
	msgbox BugMoves_Tutor_Text_10, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_12:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_15:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_18:
	msgbox BugMoves_Tutor_Text_9, MSGBOX_DEFAULT
	release
	end

BugMoves_Tutor_21:
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
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Hazards_Tutor_Text_0, Hazards_Tutor_Text_1, Hazards_Tutor_Text_2
	switch VAR_RESULT
	case 0, ArrayOfMoves_Tutor_2
	case 1, ArrayOfMoves_Tutor_3
	case 2, ArrayOfMoves_Tutor_4
	case 3, ArrayOfMoves_Tutor_5
	return

ArrayOfMoves_Tutor_2:
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_3:
	setvar VAR_0x8005, MOVE_ICE_SPINNER
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_4:
	setvar VAR_0x8005, MOVE_STEEL_SPIKES
	special ChooseMonForMoveTutor
	waitstate
	release
	end

ArrayOfMoves_Tutor_5:
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	special ChooseMonForMoveTutor
	waitstate
	release
	end


ThisIsntATutorThisIsTooAddMovesTooMons::
	return


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
	.string "Like why is ceasless Edge even a\l"
	.string "thing??\p"
	.string "Thank god for Rocky Helmet, Corviknight\n"
	.string "Am i right, Fellas?\n"
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

KnockoffPursuit_Tutor_Text_0:
	.string "Knock Off$"

KnockoffPursuit_Tutor_Text_1:
	.string "Pursuit$"

ElementalFangs_Tutor_Text_0:
	.string "Thunder Fang$"

ElementalFangs_Tutor_Text_1:
	.string "Ice Fang$"

ElementalFangs_Tutor_Text_2:
	.string "Fire Fang$"

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
