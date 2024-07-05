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
