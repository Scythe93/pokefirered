# 1 "data/maps/Route7/scripts.pory"
Route7_MapScripts::
# 2 "data/maps/Route7/scripts.pory"
	.byte 0
# 3 "data/maps/Route7/scripts.pory"

# 4 "data/maps/Route7/scripts.pory"
Route7_EventScript_UndergroundPathSign::
# 5 "data/maps/Route7/scripts.pory"
	msgbox Route7_Text_UndergroundPathSign, MSGBOX_SIGN
# 6 "data/maps/Route7/scripts.pory"
	end

PrimeSign::
# 10 "data/maps/Route7/scripts.pory"
	lockall
# 11 "data/maps/Route7/scripts.pory"
	msgbox PrimeSign_Text_0
# 12 "data/maps/Route7/scripts.pory"
	releaseall
	return


RainforestItem1::
# 16 "data/maps/Route7/scripts.pory"
	lockall
# 17 "data/maps/Route7/scripts.pory"
	giveitem ITEM_LUXURY_BALL
# 18 "data/maps/Route7/scripts.pory"
	waitmessage
# 19 "data/maps/Route7/scripts.pory"
	closemessage
# 20 "data/maps/Route7/scripts.pory"
	removeobject 1
# 21 "data/maps/Route7/scripts.pory"
	setflag FLAG_0x0BF
# 22 "data/maps/Route7/scripts.pory"
	releaseall
	end


RainforestItem2::
# 27 "data/maps/Route7/scripts.pory"
	lockall
# 28 "data/maps/Route7/scripts.pory"
	giveitem ITEM_PROTEIN
# 29 "data/maps/Route7/scripts.pory"
	waitmessage
# 30 "data/maps/Route7/scripts.pory"
	closemessage
# 31 "data/maps/Route7/scripts.pory"
	removeobject 2
# 32 "data/maps/Route7/scripts.pory"
	setflag FLAG_0x0C0
# 33 "data/maps/Route7/scripts.pory"
	releaseall
	end


RainforestItem3::
# 39 "data/maps/Route7/scripts.pory"
	lockall
# 40 "data/maps/Route7/scripts.pory"
	giveitem ITEM_NUGGET
# 41 "data/maps/Route7/scripts.pory"
	waitmessage
# 42 "data/maps/Route7/scripts.pory"
	closemessage
# 43 "data/maps/Route7/scripts.pory"
	removeobject 5
# 44 "data/maps/Route7/scripts.pory"
	setflag FLAG_0x0C1
# 45 "data/maps/Route7/scripts.pory"
	releaseall
	end


PrimeSign_Text_0:
# 11 "data/maps/Route7/scripts.pory"
	.string "The Prime Rainforest. A wide variety\n"
	.string "of species live here.$"
