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


PrimeSign_Text_0:
# 11 "data/maps/Route7/scripts.pory"
	.string "The Prime Rainforest./N A wide variety\n"
	.string "of species live here.$"
