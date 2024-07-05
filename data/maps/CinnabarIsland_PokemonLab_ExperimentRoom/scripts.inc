# 1 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
.equ HELIX_FOSSIL, 1
# 2 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
.equ DOME_FOSSIL,  2
# 3 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
.equ OLD_AMBER,    3
# 4 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 5 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_MapScripts::
# 6 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	.byte 0
# 7 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 8 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett::
# 9 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	lock
# 10 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	faceplayer
# 11 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEL
# 12 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_DID_SEELOR_TRADE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded
# 14 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 15 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 16 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 17 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 18 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 19 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon
# 20 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_DoInGameTrade
# 21 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 22 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_DID_SEELOR_TRADE
# 23 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 24 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 25 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 26 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 27 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 28 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade::
# 29 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 30 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 31 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 32 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 33 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon::
# 34 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 35 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 36 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 37 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 38 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 39 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded::
# 40 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 41 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 42 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 43 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 44 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist::
# 45 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	lock
# 46 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	faceplayer
# 47 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, FALSE
# 48 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil
# 49 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils
# 50 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon
# 51 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving
# 52 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList
# 53 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix
# 54 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList
# 55 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome
# 56 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 57 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber
# 58 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 59 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 60 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 61 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 62 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList::
# 63 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 64 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 65 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
# 66 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return
# 67 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 68 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList::
# 69 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 70 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 71 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
# 72 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return
# 73 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 74 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList::
# 75 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_OLD_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 76 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 77 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
# 78 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return
# 79 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 80 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse::
# 81 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, FALSE
# 82 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return
# 83 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 84 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil::
# 85 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_NoIsTooBad
# 86 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 87 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 88 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 89 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix::
# 90 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 91 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 92 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 93 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber
# 94 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_HELIX, FALSE
# 95 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 97 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 98 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 99 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 100 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 101 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome::
# 102 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 103 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 104 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 105 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber
# 106 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_DOME, FALSE
# 107 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 109 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 110 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 111 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 112 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 113 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber::
# 114 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 115 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 116 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_AMBER, FALSE
# 117 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 119 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 120 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 121 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 122 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 123 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber::
# 124 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_HELIX_AMBER, FALSE
# 125 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 127 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 128 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 129 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 130 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 131 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 132 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber::
# 133 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_DOME_AMBER, FALSE
# 134 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 136 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 137 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 138 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 139 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 140 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 141 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil::
# 142 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 143 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HELIX_FOSSIL
# 144 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 145 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 146 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 147 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 148 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 149 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 150 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 151 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, HELIX_FOSSIL
# 152 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 153 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 154 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 155 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil::
# 156 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 157 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_DOME_FOSSIL
# 158 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 159 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 160 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 161 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 162 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 163 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 164 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 165 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, DOME_FOSSIL
# 166 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 167 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 168 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 169 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber::
# 170 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 171 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_OLD_AMBER
# 172 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 173 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 174 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 175 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 176 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 177 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 178 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 179 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, OLD_AMBER
# 180 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 181 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 182 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 183 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil::
# 184 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 185 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 186 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 187 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 188 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving::
# 189 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 190 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 191 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 192 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 193 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon::
# 194 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte
# 195 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto
# 196 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, OLD_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl
# 197 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 198 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 199 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte::
# 200 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 201 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 202 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 203 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_OMANYTE, 5
# 204 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 205 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_HELIX
# 206 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 207 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 208 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 209 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 210 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto::
# 211 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 212 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 213 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 214 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_KABUTO, 5
# 215 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 216 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_DOME
# 217 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 218 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 219 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 220 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 221 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl::
# 222 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 223 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 224 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 225 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_AERODACTYL, 5
# 226 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 227 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_AMBER
# 228 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 229 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 230 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 231 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 232 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty::
# 233 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 234 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 235 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 236 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 237 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitfanfare
# 238 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 239 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 240 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 241 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 242 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 243 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 244 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 245 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 246 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC::
# 247 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 248 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 249 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 250 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 251 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitfanfare
# 252 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 253 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 254 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
# 255 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 256 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
# 257 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 258 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 259 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC::
# 260 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_TransferredToPC
# 261 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 262 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 263 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 264 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon::
# 265 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 266 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 267 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 268 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils::
# 269 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 270 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 271 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 272 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 273 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil::
# 274 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix
# 275 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome
# 276 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 277 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 278 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 279 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix::
# 280 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 281 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
# 282 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return
# 283 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 284 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome::
# 285 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 286 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
# 287 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	return

# 290 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 291 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige::
# 292 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	lock
# 293 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	faceplayer
# 294 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN
# 295 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 296 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_DID_MS_NIDO_TRADE, UndergroundPath_NorthEntrance_EventScript_AlreadyTraded
# 297 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 298 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 299 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 300 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 301 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 302 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, UndergroundPath_NorthEntrance_EventScript_NotRequestedMon
# 303 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_DoInGameTrade
# 304 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 305 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_DID_MS_NIDO_TRADE
# 306 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 307 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 308 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 309 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_DeclineTrade::
# 310 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 311 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 312 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 313 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 314 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_NotRequestedMon::
# 315 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 316 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 317 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 318 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
# 319 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"

# 320 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_AlreadyTraded::
# 321 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 322 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
# 323 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	end
