#ifndef GUARD_CONFIG_CODES_H
#define GUARD_CONFIG_CODES_H

//BE WARNED: THIS FEATURE WILL BREAK SAVES.
//USE AT YOUR OWN RISK.

//FALSE by default, change FALSE to TRUE to enable the Custom Codes.
//Search for UNUSED_CODES in constants/flags.h there in there.
#define UTILITY_CODES    FALSE

//Change this for a longer Char screen.
//Max char limit is 16.
#define CODES_NAME_LENGTH 8

/*Example use for in a script:
EventScript_Codes::
	lockall
	special EnterCodes
	waitstate
	special GetCodesFeedback
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Codes_2
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Codes_5
	release
	end

EventScript_Codes_2:
	msgbox EventScript_Codes_Text_0
	release
	end

EventScript_Codes_5:
	msgbox EventScript_Codes_Text_1
	release
	end


EventScript_Codes_Text_0:
	.string "the code is invaled.$"

EventScript_Codes_Text_1:
	.string "... code is set.$"*/

#endif // GUARD_CONFIG_CODES_H