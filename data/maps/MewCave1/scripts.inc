MewCave1_MapScripts::
	.byte 0


MewEncounter1::
# 6 "data/maps/MewCave1/scripts.pory"
	lockall
# 7 "data/maps/MewCave1/scripts.pory"
	msgbox MewEncounter1_Text_0
# 8 "data/maps/MewCave1/scripts.pory"
	waitmessage
# 9 "data/maps/MewCave1/scripts.pory"
	closemessage
# 10 "data/maps/MewCave1/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 11 "data/maps/MewCave1/scripts.pory"
	waitmoncry
# 12 "data/maps/MewCave1/scripts.pory"
	setwildbattle SPECIES_MEW, 25, ITEM_NONE
# 13 "data/maps/MewCave1/scripts.pory"
	dowildbattle
# 14 "data/maps/MewCave1/scripts.pory"
	removeobject 1
# 15 "data/maps/MewCave1/scripts.pory"
	setflag FLAG_0x0B3
# 16 "data/maps/MewCave1/scripts.pory"
	releaseall
	end


MewEncounter1_Text_0:
# 7 "data/maps/MewCave1/scripts.pory"
	.string "Mew?$"
