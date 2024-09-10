BillsLake_MapScripts::
	.byte 0


FairyLakeSign::
# 7 "data/maps/BillsLake/scripts.pory"
	lockall
# 8 "data/maps/BillsLake/scripts.pory"
	msgbox FairyLakeSign_Text_0
# 9 "data/maps/BillsLake/scripts.pory"
	closemessage
# 10 "data/maps/BillsLake/scripts.pory"
	releaseall
	end


billakeitem1::
# 15 "data/maps/BillsLake/scripts.pory"
	lockall
# 16 "data/maps/BillsLake/scripts.pory"
	giveitem ITEM_WATER_STONE
# 17 "data/maps/BillsLake/scripts.pory"
	waitmessage
# 18 "data/maps/BillsLake/scripts.pory"
	closemessage
# 19 "data/maps/BillsLake/scripts.pory"
	removeobject 1
# 20 "data/maps/BillsLake/scripts.pory"
	setflag FLAG_0x0BA
# 21 "data/maps/BillsLake/scripts.pory"
	releaseall
	end


billakeitem2::
# 26 "data/maps/BillsLake/scripts.pory"
	lockall
# 27 "data/maps/BillsLake/scripts.pory"
	giveitem ITEM_LUXURY_BALL
# 28 "data/maps/BillsLake/scripts.pory"
	waitmessage
# 29 "data/maps/BillsLake/scripts.pory"
	closemessage
# 30 "data/maps/BillsLake/scripts.pory"
	removeobject 2
# 31 "data/maps/BillsLake/scripts.pory"
	setflag FLAG_0x0BB
# 32 "data/maps/BillsLake/scripts.pory"
	releaseall
	end


billakeitem3::
# 37 "data/maps/BillsLake/scripts.pory"
	lockall
# 38 "data/maps/BillsLake/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 39 "data/maps/BillsLake/scripts.pory"
	waitmessage
# 40 "data/maps/BillsLake/scripts.pory"
	closemessage
# 41 "data/maps/BillsLake/scripts.pory"
	removeobject 3
# 42 "data/maps/BillsLake/scripts.pory"
	setflag FLAG_0x0C7
# 43 "data/maps/BillsLake/scripts.pory"
	releaseall
	end


FairyLakeSign_Text_0:
# 8 "data/maps/BillsLake/scripts.pory"
	.string "Lake Jahova$"
