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

RivalBattle1::
# 39 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_RIVAL1, RivalBattle1_Text_0, RivalBattle1_Text_1, RivalBattle1PostDialogue
	end


RivalBattle1PostDialogue::
# 50 "data/maps/Route1/scripts.pory"
	lockall
# 51 "data/maps/Route1/scripts.pory"
	msgbox RivalBattle1PostDialogue_Text_0
# 52 "data/maps/Route1/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 53 "data/maps/Route1/scripts.pory"
	special HealPlayerParty
# 54 "data/maps/Route1/scripts.pory"
	msgbox RivalBattle1PostDialogue_Text_1
# 55 "data/maps/Route1/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 0
# 56 "data/maps/Route1/scripts.pory"
	clearflag FLAG_0x305
# 57 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_RIVAL
# 58 "data/maps/Route1/scripts.pory"
	applymovement 3, RivalLeave
# 59 "data/maps/Route1/scripts.pory"
	waitmovement 3
# 60 "data/maps/Route1/scripts.pory"
	removeobject 3
# 61 "data/maps/Route1/scripts.pory"
	releaseall
	end


# 65 "data/maps/Route1/scripts.pory"
RivalLeave:
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 66 "data/maps/Route1/scripts.pory"
	walk_right
# 67 "data/maps/Route1/scripts.pory"
	walk_up
# 67 "data/maps/Route1/scripts.pory"
	walk_up
# 67 "data/maps/Route1/scripts.pory"
	walk_up
# 67 "data/maps/Route1/scripts.pory"
	walk_up
# 67 "data/maps/Route1/scripts.pory"
	walk_up
# 67 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

RivalBattle1_Text_0:
# 39 "data/maps/Route1/scripts.pory"
	.string "Hey! You're the new kid in town?\n"
	.string "Grandpa Oak sent me on this mission\l"
	.string "to catch rare pokemon and conquer\l"
	.string "the Pokemon League, but that old\l"
	.string "bastard started me off with a\l"
	.string "fucking Weedle! He ain't making it\l"
	.string "easy for me! It doesn't matter\l"
	.string "though. I'm still going to be the\l"
	.string "very best, like no-one ever was.I'm\l"
	.string "going to beat every trainer in my\l"
	.string "way.. starting with YOU!$"

RivalBattle1_Text_1:
# 40 "data/maps/Route1/scripts.pory"
	.string "Damn! You're tougher than I thought.$"

RivalBattle1PostDialogue_Text_0:
# 51 "data/maps/Route1/scripts.pory"
	.string "You might have beaten me now but\n"
	.string "you're still a pussy. I'll help you\l"
	.string "out anyway...$"

RivalBattle1PostDialogue_Text_1:
# 54 "data/maps/Route1/scripts.pory"
	.string "Next time you won't be so lucky...\n"
	.string "Smell ya later!$"

PostBattle_Rival1::
# 45 "data/maps/Route1/scripts.pory"
	.string "Smell ya later$"
