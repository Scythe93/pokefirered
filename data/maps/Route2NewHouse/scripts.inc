Route2NewHouse_MapScripts::
	.byte 0


# 4 "data/maps/Route2NewHouse/scripts.pory"

# 5 "data/maps/Route2NewHouse/scripts.pory"
Route2_House_EventScript_Reyley::
# 6 "data/maps/Route2NewHouse/scripts.pory"
	lock
# 7 "data/maps/Route2NewHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Route2NewHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
# 9 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 10 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_set FLAG_DID_MIMIEN_TRADE, Route2_House_EventScript_AlreadyTraded
# 11 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 12 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route2_House_EventScript_DeclineTrade
# 13 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 14 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route2_House_EventScript_DeclineTrade
# 15 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 16 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route2_House_EventScript_NotRequestedMon
# 17 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_DoInGameTrade
# 18 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 19 "data/maps/Route2NewHouse/scripts.pory"
	setflag FLAG_DID_MIMIEN_TRADE
# 20 "data/maps/Route2NewHouse/scripts.pory"
	release
# 21 "data/maps/Route2NewHouse/scripts.pory"
	end
# 22 "data/maps/Route2NewHouse/scripts.pory"

# 23 "data/maps/Route2NewHouse/scripts.pory"
Route2_House_EventScript_DeclineTrade::
# 24 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 25 "data/maps/Route2NewHouse/scripts.pory"
	release
# 26 "data/maps/Route2NewHouse/scripts.pory"
	end
# 27 "data/maps/Route2NewHouse/scripts.pory"

# 28 "data/maps/Route2NewHouse/scripts.pory"
Route2_House_EventScript_NotRequestedMon::
# 29 "data/maps/Route2NewHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 30 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 31 "data/maps/Route2NewHouse/scripts.pory"
	release
# 32 "data/maps/Route2NewHouse/scripts.pory"
	end
# 33 "data/maps/Route2NewHouse/scripts.pory"

# 34 "data/maps/Route2NewHouse/scripts.pory"
Route2_House_EventScript_AlreadyTraded::
# 35 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 36 "data/maps/Route2NewHouse/scripts.pory"
	release
# 37 "data/maps/Route2NewHouse/scripts.pory"
	end
# 38 "data/maps/Route2NewHouse/scripts.pory"
	
# 39 "data/maps/Route2NewHouse/scripts.pory"
	
# 40 "data/maps/Route2NewHouse/scripts.pory"
	VermilionCity_House2_EventScript_Elyssa::
# 41 "data/maps/Route2NewHouse/scripts.pory"
	lock
# 42 "data/maps/Route2NewHouse/scripts.pory"
	faceplayer
# 43 "data/maps/Route2NewHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 44 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 45 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_AlreadyTraded
# 46 "data/maps/Route2NewHouse/scripts.pory"
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
# 47 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_House2_EventScript_DeclineTrade
# 48 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 49 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, VermilionCity_House2_EventScript_DeclineTrade
# 50 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 51 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, VermilionCity_House2_EventScript_NotRequestedMon
# 52 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_DoInGameTrade
# 53 "data/maps/Route2NewHouse/scripts.pory"
	msgbox VermilionCity_House2_Text_ThankYou
# 54 "data/maps/Route2NewHouse/scripts.pory"
	setflag FLAG_DID_CH_DING_TRADE
# 55 "data/maps/Route2NewHouse/scripts.pory"
	release
# 56 "data/maps/Route2NewHouse/scripts.pory"
	end
# 57 "data/maps/Route2NewHouse/scripts.pory"

# 58 "data/maps/Route2NewHouse/scripts.pory"
VermilionCity_House2_EventScript_DeclineTrade::
# 59 "data/maps/Route2NewHouse/scripts.pory"
	msgbox VermilionCity_House2_Text_ThatsTooBad
# 60 "data/maps/Route2NewHouse/scripts.pory"
	release
# 61 "data/maps/Route2NewHouse/scripts.pory"
	end
# 62 "data/maps/Route2NewHouse/scripts.pory"

# 63 "data/maps/Route2NewHouse/scripts.pory"
VermilionCity_House2_EventScript_NotRequestedMon::
# 64 "data/maps/Route2NewHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 65 "data/maps/Route2NewHouse/scripts.pory"
	msgbox VermilionCity_House2_Text_ThisIsNoMon
# 66 "data/maps/Route2NewHouse/scripts.pory"
	release
# 67 "data/maps/Route2NewHouse/scripts.pory"
	end
# 68 "data/maps/Route2NewHouse/scripts.pory"

# 69 "data/maps/Route2NewHouse/scripts.pory"
VermilionCity_House2_EventScript_AlreadyTraded::
# 70 "data/maps/Route2NewHouse/scripts.pory"
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
# 71 "data/maps/Route2NewHouse/scripts.pory"
	release
# 72 "data/maps/Route2NewHouse/scripts.pory"
	end
# 73 "data/maps/Route2NewHouse/scripts.pory"

# 74 "data/maps/Route2NewHouse/scripts.pory"

# 75 "data/maps/Route2NewHouse/scripts.pory"

# 76 "data/maps/Route2NewHouse/scripts.pory"
	VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon::
# 77 "data/maps/Route2NewHouse/scripts.pory"
	.string "Hi!\n"
# 78 "data/maps/Route2NewHouse/scripts.pory"
	.string "Do you have a {STR_VAR_1}?\p"
# 79 "data/maps/Route2NewHouse/scripts.pory"
	.string "Want to trade it for my\n"
# 80 "data/maps/Route2NewHouse/scripts.pory"
	.string "{STR_VAR_2}?$"
# 81 "data/maps/Route2NewHouse/scripts.pory"

# 82 "data/maps/Route2NewHouse/scripts.pory"

# 83 "data/maps/Route2NewHouse/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden::
# 84 "data/maps/Route2NewHouse/scripts.pory"
	lock
# 85 "data/maps/Route2NewHouse/scripts.pory"
	faceplayer
# 86 "data/maps/Route2NewHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LICKITUNG
# 87 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 88 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_set FLAG_DID_MARC_TRADE, Route18_EastEntrance_2F_EventScript_AlreadyTraded
# 89 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 90 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route18_EastEntrance_2F_EventScript_DeclineTrade
# 91 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 92 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route18_EastEntrance_2F_EventScript_DeclineTrade
# 93 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 94 "data/maps/Route2NewHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route18_EastEntrance_2F_EventScript_NotRequestedMon
# 95 "data/maps/Route2NewHouse/scripts.pory"
	call EventScript_DoInGameTrade
# 96 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 97 "data/maps/Route2NewHouse/scripts.pory"
	setflag FLAG_DID_MARC_TRADE
# 98 "data/maps/Route2NewHouse/scripts.pory"
	release
# 99 "data/maps/Route2NewHouse/scripts.pory"
	end
# 100 "data/maps/Route2NewHouse/scripts.pory"

# 101 "data/maps/Route2NewHouse/scripts.pory"
Route18_EastEntrance_2F_EventScript_DeclineTrade::
# 102 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 103 "data/maps/Route2NewHouse/scripts.pory"
	release
# 104 "data/maps/Route2NewHouse/scripts.pory"
	end
# 105 "data/maps/Route2NewHouse/scripts.pory"

# 106 "data/maps/Route2NewHouse/scripts.pory"
Route18_EastEntrance_2F_EventScript_NotRequestedMon::
# 107 "data/maps/Route2NewHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 108 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 109 "data/maps/Route2NewHouse/scripts.pory"
	release
# 110 "data/maps/Route2NewHouse/scripts.pory"
	end
# 111 "data/maps/Route2NewHouse/scripts.pory"

# 112 "data/maps/Route2NewHouse/scripts.pory"
Route18_EastEntrance_2F_EventScript_AlreadyTraded::
# 113 "data/maps/Route2NewHouse/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 114 "data/maps/Route2NewHouse/scripts.pory"
	release
# 115 "data/maps/Route2NewHouse/scripts.pory"
	end
