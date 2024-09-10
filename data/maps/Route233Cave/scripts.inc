Route233Cave_MapScripts::
	.byte 0


Groudon1::
# 6 "data/maps/Route233Cave/scripts.pory"
	lockall
# 7 "data/maps/Route233Cave/scripts.pory"
	msgbox Groudon1_Text_0
# 8 "data/maps/Route233Cave/scripts.pory"
	waitmessage
# 9 "data/maps/Route233Cave/scripts.pory"
	closemessage
# 10 "data/maps/Route233Cave/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 11 "data/maps/Route233Cave/scripts.pory"
	waitmoncry
# 12 "data/maps/Route233Cave/scripts.pory"
	setwildbattle SPECIES_GROUDON, 65, ITEM_NONE
# 13 "data/maps/Route233Cave/scripts.pory"
	dowildbattle
# 14 "data/maps/Route233Cave/scripts.pory"
	removeobject 1
# 15 "data/maps/Route233Cave/scripts.pory"
	setflag FLAG_0x0C6
# 16 "data/maps/Route233Cave/scripts.pory"
	releaseall
	end


Warning1::
# 22 "data/maps/Route233Cave/scripts.pory"
	lockall
# 23 "data/maps/Route233Cave/scripts.pory"
	msgbox Warning1_Text_0
# 24 "data/maps/Route233Cave/scripts.pory"
	msgbox Warning1_Text_1
# 25 "data/maps/Route233Cave/scripts.pory"
	msgbox Warning1_Text_2
# 26 "data/maps/Route233Cave/scripts.pory"
	waitmessage
# 27 "data/maps/Route233Cave/scripts.pory"
	closemessage
# 28 "data/maps/Route233Cave/scripts.pory"
	releaseall
	return


Groudon1_Text_0:
# 7 "data/maps/Route233Cave/scripts.pory"
	.string "...$"

Warning1_Text_0:
# 23 "data/maps/Route233Cave/scripts.pory"
	.string "What's that Triangle?$"

Warning1_Text_1:
# 24 "data/maps/Route233Cave/scripts.pory"
	.string "It has the reflection of a Groudon!$"

Warning1_Text_2:
# 25 "data/maps/Route233Cave/scripts.pory"
	.string "Better SAVE the game before\n"
	.string "advancing!$"
