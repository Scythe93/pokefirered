Route21NorthForest1_MapScripts::
	.byte 0


RainforestItem4::
# 7 "data/maps/Route21NorthForest1/scripts.pory"
	lockall
# 8 "data/maps/Route21NorthForest1/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 9 "data/maps/Route21NorthForest1/scripts.pory"
	waitmessage
# 10 "data/maps/Route21NorthForest1/scripts.pory"
	closemessage
# 11 "data/maps/Route21NorthForest1/scripts.pory"
	removeobject 1
# 12 "data/maps/Route21NorthForest1/scripts.pory"
	setflag FLAG_0x0C8
# 13 "data/maps/Route21NorthForest1/scripts.pory"
	releaseall
	end


RainforestItem5::
# 18 "data/maps/Route21NorthForest1/scripts.pory"
	lockall
# 19 "data/maps/Route21NorthForest1/scripts.pory"
	giveitem ITEM_PP_UP
# 20 "data/maps/Route21NorthForest1/scripts.pory"
	waitmessage
# 21 "data/maps/Route21NorthForest1/scripts.pory"
	closemessage
# 22 "data/maps/Route21NorthForest1/scripts.pory"
	removeobject 2
# 23 "data/maps/Route21NorthForest1/scripts.pory"
	setflag FLAG_0x0CA
# 24 "data/maps/Route21NorthForest1/scripts.pory"
	releaseall
	end


RainforestItem6::
# 30 "data/maps/Route21NorthForest1/scripts.pory"
	lockall
# 31 "data/maps/Route21NorthForest1/scripts.pory"
	giveitem ITEM_PP_UP
# 32 "data/maps/Route21NorthForest1/scripts.pory"
	waitmessage
# 33 "data/maps/Route21NorthForest1/scripts.pory"
	closemessage
# 34 "data/maps/Route21NorthForest1/scripts.pory"
	removeobject 5
# 35 "data/maps/Route21NorthForest1/scripts.pory"
	setflag FLAG_0x0C9
# 36 "data/maps/Route21NorthForest1/scripts.pory"
	releaseall
	end


TRAINER_Forest_Lass1::
# 41 "data/maps/Route21NorthForest1/scripts.pory"
	trainerbattle_single TRAINER_RLASS1, RLass_Intro, RLass_Outro
# 42 "data/maps/Route21NorthForest1/scripts.pory"
	msgbox PostBattle_RLass, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route21NorthForest1/scripts.pory"
	waitmessage
	end


TRAINER_Forest_Lass2::
# 60 "data/maps/Route21NorthForest1/scripts.pory"
	trainerbattle_single TRAINER_RLASS2, RLass2_Intro, RLass2_Outro
# 61 "data/maps/Route21NorthForest1/scripts.pory"
	msgbox PostBattle_RLass, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route21NorthForest1/scripts.pory"
	waitmessage
	end


RLass_Intro::
# 47 "data/maps/Route21NorthForest1/scripts.pory"
	.string "Rainforests are delicate ecosystems$"

RLass_Outro::
# 51 "data/maps/Route21NorthForest1/scripts.pory"
	.string "Best of luck!$"

PostBattle_RLass::
# 55 "data/maps/Route21NorthForest1/scripts.pory"
	.string "Best of luck!$"

RLass2_Intro::
# 66 "data/maps/Route21NorthForest1/scripts.pory"
	.string "So many exotic species in this forest!$"

RLass2_Outro::
# 70 "data/maps/Route21NorthForest1/scripts.pory"
	.string "Best of luck!$"
