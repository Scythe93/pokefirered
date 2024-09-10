PalletNewLabBasement_MapScripts::
	.byte 0


MankeyBalls1::
# 7 "data/maps/PalletNewLabBasement/scripts.pory"
	lockall
# 8 "data/maps/PalletNewLabBasement/scripts.pory"
	msgbox MankeyBalls1_Text_0
# 9 "data/maps/PalletNewLabBasement/scripts.pory"
	msgbox MankeyBalls1_Text_1
# 10 "data/maps/PalletNewLabBasement/scripts.pory"
	msgbox MankeyBalls1_Text_2
# 11 "data/maps/PalletNewLabBasement/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/PalletNewLabBasement/scripts.pory"
	msgbox MankeyBalls1_Text_3
# 13 "data/maps/PalletNewLabBasement/scripts.pory"
	givemon SPECIES_MANKEY, 5, ITEM_ORAN_BERRY
# 14 "data/maps/PalletNewLabBasement/scripts.pory"
	closemessage
# 15 "data/maps/PalletNewLabBasement/scripts.pory"
	setflag FLAG_0x0C5
# 16 "data/maps/PalletNewLabBasement/scripts.pory"
	removeobject 1
# 17 "data/maps/PalletNewLabBasement/scripts.pory"
	releaseall
	end


MankeyBalls1_Text_0:
# 8 "data/maps/PalletNewLabBasement/scripts.pory"
	.string "!!!!!$"

MankeyBalls1_Text_1:
# 9 "data/maps/PalletNewLabBasement/scripts.pory"
	.string "Professor Oak must have forgotten\n"
	.string "about this Pokemon that he left\l"
	.string "down here in this dusty basement!$"

MankeyBalls1_Text_2:
# 10 "data/maps/PalletNewLabBasement/scripts.pory"
	.string "I'm sure he wouldn't mind if I give it\n"
	.string "a new home with me!$"

MankeyBalls1_Text_3:
# 12 "data/maps/PalletNewLabBasement/scripts.pory"
	.string "{PLAYER} Recieved Mankey$"
