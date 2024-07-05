Route13Volcano3_MapScripts::
	.byte 0


volcano3ultraball::
# 6 "data/maps/Route13Volcano3/scripts.pory"
	giveitem ITEM_ULTRA_BALL
# 7 "data/maps/Route13Volcano3/scripts.pory"
	removeobject 1
# 8 "data/maps/Route13Volcano3/scripts.pory"
	releaseall
	return


RivalBattleVolcano::
# 12 "data/maps/Route13Volcano3/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, RivalBattleVolcano_Text_0, RivalBattleVolcano_Text_1, RivalPostVolcano
	end


RivalPostVolcano::
# 21 "data/maps/Route13Volcano3/scripts.pory"
	lockall
# 22 "data/maps/Route13Volcano3/scripts.pory"
	msgbox RivalPostVolcano_Text_0
# 23 "data/maps/Route13Volcano3/scripts.pory"
	applymovement 2, RivalLeaveVolcano
# 24 "data/maps/Route13Volcano3/scripts.pory"
	setflag FLAG_0x307
# 25 "data/maps/Route13Volcano3/scripts.pory"
	waitmovement 2
# 26 "data/maps/Route13Volcano3/scripts.pory"
	removeobject 2
# 27 "data/maps/Route13Volcano3/scripts.pory"
	releaseall
	end


# 31 "data/maps/Route13Volcano3/scripts.pory"
RivalLeaveVolcano:
# 32 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 33 "data/maps/Route13Volcano3/scripts.pory"
	walk_down
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
# 34 "data/maps/Route13Volcano3/scripts.pory"
	walk_left
	step_end

RivalBattleVolcano_Text_0:
# 12 "data/maps/Route13Volcano3/scripts.pory"
	.string "You again! Nerds like you shouldn't\n"
	.string "be out here.$"

RivalBattleVolcano_Text_1:
# 13 "data/maps/Route13Volcano3/scripts.pory"
	.string "not again.....$"

RivalPostVolcano_Text_0:
# 22 "data/maps/Route13Volcano3/scripts.pory"
	.string "I heard there were some nice fire\n"
	.string "Pokemon around this Volcano.\l"
	.string "Dangerous ones too. Anyway, I've\l"
	.string "seen everything I need to see.\l"
	.string "Smell ya later$"
