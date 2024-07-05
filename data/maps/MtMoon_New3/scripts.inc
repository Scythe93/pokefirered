MtMoon_New3_MapScripts::
	.byte 0


Clefairys1::
# 6 "data/maps/MtMoon_New3/scripts.pory"
	lockall
# 7 "data/maps/MtMoon_New3/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 8 "data/maps/MtMoon_New3/scripts.pory"
	msgbox Clefairys1_Text_0
# 9 "data/maps/MtMoon_New3/scripts.pory"
	waitmessage
# 10 "data/maps/MtMoon_New3/scripts.pory"
	closemessage
# 11 "data/maps/MtMoon_New3/scripts.pory"
	releaseall
	end


moonscientist1::
# 16 "data/maps/MtMoon_New3/scripts.pory"
	lockall
# 17 "data/maps/MtMoon_New3/scripts.pory"
	msgbox moonscientist1_Text_0
# 18 "data/maps/MtMoon_New3/scripts.pory"
	waitmessage
# 19 "data/maps/MtMoon_New3/scripts.pory"
	closemessage
# 20 "data/maps/MtMoon_New3/scripts.pory"
	msgbox moonscientist1_Text_1
# 21 "data/maps/MtMoon_New3/scripts.pory"
	waitmessage
# 22 "data/maps/MtMoon_New3/scripts.pory"
	closemessage
# 23 "data/maps/MtMoon_New3/scripts.pory"
	releaseall
	end


Clefairys1_Text_0:
# 8 "data/maps/MtMoon_New3/scripts.pory"
	.string "Faiiiiiry! Faiiiiiiry!$"

moonscientist1_Text_0:
# 17 "data/maps/MtMoon_New3/scripts.pory"
	.string "I made my way in here to try and\n"
	.string "study the pokemon species that can\l"
	.string "be found in this deep forgotten\l"
	.string "tunnel of Mt. Moon.\l"
	.string "Nobody has been down this tunnel in\l"
	.string "many years.\l"
	.string "Unfortunately for us, these Clefairy\l"
	.string "here are blocking the path!\l"
	.string "Normally I would just push them\l"
	.string "out of the way, but these are a\l"
	.string "rare sub-species of Clefairy, they\l"
	.string "are Endangered and we aren't\l"
	.string "allowed to touch them!$"

moonscientist1_Text_1:
# 20 "data/maps/MtMoon_New3/scripts.pory"
	.string "Maybe I can just come back in the\n"
	.string "future and they will be out of the\l"
	.string "way......$"
