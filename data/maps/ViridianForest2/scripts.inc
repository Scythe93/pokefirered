ViridianForest2_MapScripts::
	.byte 0


RivalBattle2::
# 5 "data/maps/ViridianForest2/scripts.pory"
	lockall
# 6 "data/maps/ViridianForest2/scripts.pory"
	msgbox RivalBattle2_Text_0
# 7 "data/maps/ViridianForest2/scripts.pory"
	waitmessage
# 8 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 9 "data/maps/ViridianForest2/scripts.pory"
	applymovement 1, rivalnorth
# 10 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 1
# 11 "data/maps/ViridianForest2/scripts.pory"
	msgbox RivalBattle2_Text_1
# 12 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 13 "data/maps/ViridianForest2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, RivalBattle2_Text_2, RivalBattle2_Text_3, Rival2WalkAway
# 15 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
	return


Rival2WalkAway::
# 20 "data/maps/ViridianForest2/scripts.pory"
	msgbox Rival2WalkAway_Text_0
# 21 "data/maps/ViridianForest2/scripts.pory"
	msgbox Rival2WalkAway_Text_1
# 22 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 23 "data/maps/ViridianForest2/scripts.pory"
	applymovement 1, rivalescape1
# 24 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 1
# 25 "data/maps/ViridianForest2/scripts.pory"
	removeobject 1
# 26 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
# 27 "data/maps/ViridianForest2/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 28 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
# 29 "data/maps/ViridianForest2/scripts.pory"
	removeobject 1
# 30 "data/maps/ViridianForest2/scripts.pory"
	releaseall
	end


# 34 "data/maps/ViridianForest2/scripts.pory"
rivalnorth:
# 35 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 35 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 35 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 35 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 36 "data/maps/ViridianForest2/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/ViridianForest2/scripts.pory"
rivalescape1:
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 41 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 42 "data/maps/ViridianForest2/scripts.pory"
	walk_up
	step_end

RivalBattle22::
# 49 "data/maps/ViridianForest2/scripts.pory"
	lockall
# 50 "data/maps/ViridianForest2/scripts.pory"
	msgbox RivalBattle2_Text_0
# 51 "data/maps/ViridianForest2/scripts.pory"
	waitmessage
# 52 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 53 "data/maps/ViridianForest2/scripts.pory"
	applymovement 1, rivalnorth2
# 54 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 1
# 55 "data/maps/ViridianForest2/scripts.pory"
	msgbox RivalBattle2_Text_1
# 56 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 57 "data/maps/ViridianForest2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, RivalBattle2_Text_2, RivalBattle2_Text_3, Rival22WalkAway
# 59 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
	return


Rival22WalkAway::
# 64 "data/maps/ViridianForest2/scripts.pory"
	msgbox Rival2WalkAway_Text_0
# 65 "data/maps/ViridianForest2/scripts.pory"
	msgbox Rival2WalkAway_Text_1
# 66 "data/maps/ViridianForest2/scripts.pory"
	closemessage
# 67 "data/maps/ViridianForest2/scripts.pory"
	applymovement 1, rivalescape12
# 68 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 1
# 69 "data/maps/ViridianForest2/scripts.pory"
	removeobject 1
# 70 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
# 71 "data/maps/ViridianForest2/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 72 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_RIVAL
# 73 "data/maps/ViridianForest2/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 0
# 74 "data/maps/ViridianForest2/scripts.pory"
	clearflag FLAG_HIDE_CERULEAN_RIVAL
# 75 "data/maps/ViridianForest2/scripts.pory"
	removeobject 1
# 76 "data/maps/ViridianForest2/scripts.pory"
	releaseall
	end


# 80 "data/maps/ViridianForest2/scripts.pory"
rivalnorth2:
# 81 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 81 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 81 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 81 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 81 "data/maps/ViridianForest2/scripts.pory"
	walk_down
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
# 82 "data/maps/ViridianForest2/scripts.pory"
	walk_left
	step_end

# 86 "data/maps/ViridianForest2/scripts.pory"
rivalescape12:
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 87 "data/maps/ViridianForest2/scripts.pory"
	walk_right
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
# 88 "data/maps/ViridianForest2/scripts.pory"
	walk_up
	step_end

celebi1::
# 93 "data/maps/ViridianForest2/scripts.pory"
	lockall
# 94 "data/maps/ViridianForest2/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 95 "data/maps/ViridianForest2/scripts.pory"
	applymovement 2, celebirun1
# 96 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 2
# 97 "data/maps/ViridianForest2/scripts.pory"
	releaseall
	end


# 101 "data/maps/ViridianForest2/scripts.pory"
celebirun1:
# 102 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_left
# 102 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_left
# 102 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_left
# 102 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_left
# 103 "data/maps/ViridianForest2/scripts.pory"
	jump_2_down
# 103 "data/maps/ViridianForest2/scripts.pory"
	jump_2_down
	step_end

celebi2::
# 107 "data/maps/ViridianForest2/scripts.pory"
	lockall
# 108 "data/maps/ViridianForest2/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 109 "data/maps/ViridianForest2/scripts.pory"
	applymovement 2, celebirun2
# 110 "data/maps/ViridianForest2/scripts.pory"
	waitmovement 2
# 111 "data/maps/ViridianForest2/scripts.pory"
	removeobject 2
# 112 "data/maps/ViridianForest2/scripts.pory"
	setflag FLAG_0x306
# 113 "data/maps/ViridianForest2/scripts.pory"
	releaseall
	end


# 116 "data/maps/ViridianForest2/scripts.pory"
celebirun2:
# 117 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_down
# 117 "data/maps/ViridianForest2/scripts.pory"
	walk_fast_down
# 118 "data/maps/ViridianForest2/scripts.pory"
	jump_2_down
# 118 "data/maps/ViridianForest2/scripts.pory"
	jump_2_down
# 118 "data/maps/ViridianForest2/scripts.pory"
	jump_2_down
	step_end

RivalBattle2_Text_0:
# 6 "data/maps/ViridianForest2/scripts.pory"
	.string "Yo!$"

RivalBattle2_Text_1:
# 11 "data/maps/ViridianForest2/scripts.pory"
	.string "What are you doing out here in the\n"
	.string "rain? You grow your team yet?... I\l"
	.string "came back here to check if there's\l"
	.string "any rare Pokemon.$"

RivalBattle2_Text_2:
# 13 "data/maps/ViridianForest2/scripts.pory"
	.string "You ready for another battle?!$"

RivalBattle2_Text_3:
# 13 "data/maps/ViridianForest2/scripts.pory"
	.string "ouch.$"

Rival2WalkAway_Text_0:
# 20 "data/maps/ViridianForest2/scripts.pory"
	.string "I see you have expanded beyond that\n"
	.string "damn Caterpie. Good job.$"

Rival2WalkAway_Text_1:
# 21 "data/maps/ViridianForest2/scripts.pory"
	.string "Keep it up. I'll be seeing you\n"
	.string "again... Smell ya later!$"
