Route103_MapScripts::
	.byte 0


Regirock1::
# 6 "data/maps/Route103/scripts.pory"
	lockall
# 7 "data/maps/Route103/scripts.pory"
	msgbox Regirock1_Text_0
# 8 "data/maps/Route103/scripts.pory"
	waitmessage
# 9 "data/maps/Route103/scripts.pory"
	closemessage
# 10 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_NORMAL
# 11 "data/maps/Route103/scripts.pory"
	waitmoncry
# 12 "data/maps/Route103/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 45, ITEM_NONE
# 13 "data/maps/Route103/scripts.pory"
	dowildbattle
# 14 "data/maps/Route103/scripts.pory"
	removeobject 1
# 15 "data/maps/Route103/scripts.pory"
	setflag FLAG_0x0B9
# 16 "data/maps/Route103/scripts.pory"
	releaseall
	end


Regirock1_Text_0:
# 7 "data/maps/Route103/scripts.pory"
	.string "...$"
