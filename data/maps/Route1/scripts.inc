# 1 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	.byte 0
# 3 "data/maps/Route1/scripts.pory"

# 4 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 5 "data/maps/Route1/scripts.pory"
	lock
# 6 "data/maps/Route1/scripts.pory"
	faceplayer
# 7 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 8 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 9 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 10 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 11 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 12 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 13 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 14 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 15 "data/maps/Route1/scripts.pory"
	waitmessage
# 16 "data/maps/Route1/scripts.pory"
	waitfanfare
# 17 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 18 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 19 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 20 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 21 "data/maps/Route1/scripts.pory"
	release
# 22 "data/maps/Route1/scripts.pory"
	end
# 23 "data/maps/Route1/scripts.pory"

# 24 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 25 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 26 "data/maps/Route1/scripts.pory"
	release
# 27 "data/maps/Route1/scripts.pory"
	end
# 28 "data/maps/Route1/scripts.pory"

# 29 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 30 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 31 "data/maps/Route1/scripts.pory"
	end
# 32 "data/maps/Route1/scripts.pory"

# 33 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 34 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 35 "data/maps/Route1/scripts.pory"
	end
