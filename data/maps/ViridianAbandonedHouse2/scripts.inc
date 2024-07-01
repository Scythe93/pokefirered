ViridianAbandonedHouse2_MapScripts::
# 2 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_StartRivalBattle
	.byte 0


PalletTown_StartRivalBattle::
# 7 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	goto_if_unset FLAG_0x305, PalletTown_StartRivalBattle_1
# 11 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	clearflag FLAG_0x304
	return

PalletTown_StartRivalBattle_1:
# 8 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	setflag FLAG_0x304
	return


RivalBattle1::
# 16 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL1, RivalBattle1_Text_0, RivalBattle1_Text_1, RivalBattle1PostDialogue
	end


RivalBattle1PostDialogue::
# 27 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	lockall
# 28 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	msgbox RivalBattle1PostDialogue_Text_0
# 29 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 30 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	msgbox RivalBattle1PostDialogue_Text_1
# 31 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	releaseall
# 32 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	clearflag FLAG_0x305
# 33 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	applymovement 1, RivalLeave
# 34 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	removeobject 1
	end


# 39 "data/maps/ViridianAbandonedHouse2/scripts.pory"
RivalLeave:
# 40 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_left
# 40 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_left
# 40 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_left
# 40 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_left
# 41 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_down
# 41 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_down
# 41 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	walk_down
	step_end

RivalBattle1_Text_0:
# 16 "data/maps/ViridianAbandonedHouse2/scripts.pory"
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
# 17 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	.string "Damn! You're tougher than I thought.$"

RivalBattle1PostDialogue_Text_0:
# 28 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	.string "You might have beaten me now but\n"
	.string "you're still a pussy. I'll help you\l"
	.string "out anyway...$"

RivalBattle1PostDialogue_Text_1:
# 30 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	.string "Next time you won't be so lucky...\n"
	.string "Smell ya later!$"

PostBattle_Rival1::
# 22 "data/maps/ViridianAbandonedHouse2/scripts.pory"
	.string "Smell ya later$"
