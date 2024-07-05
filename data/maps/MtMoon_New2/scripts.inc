MtMoon_New2_MapScripts::
	.byte 0


LugiaEncounter1::
# 6 "data/maps/MtMoon_New2/scripts.pory"
	lockall
# 7 "data/maps/MtMoon_New2/scripts.pory"
	msgbox LugiaEncounter1_Text_0
# 8 "data/maps/MtMoon_New2/scripts.pory"
	waitmessage
# 9 "data/maps/MtMoon_New2/scripts.pory"
	closemessage
# 10 "data/maps/MtMoon_New2/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
# 11 "data/maps/MtMoon_New2/scripts.pory"
	waitmoncry
# 12 "data/maps/MtMoon_New2/scripts.pory"
	setwildbattle SPECIES_LUGIA, 50, ITEM_NONE
# 13 "data/maps/MtMoon_New2/scripts.pory"
	dowildbattle
# 14 "data/maps/MtMoon_New2/scripts.pory"
	removeobject 1
# 15 "data/maps/MtMoon_New2/scripts.pory"
	setflag FLAG_0x0B4
# 16 "data/maps/MtMoon_New2/scripts.pory"
	releaseall
	end


LugiaEncounter1_Text_0:
# 7 "data/maps/MtMoon_New2/scripts.pory"
	.string ".........$"
