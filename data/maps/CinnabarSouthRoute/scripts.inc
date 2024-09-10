CinnabarSouthRoute_MapScripts::
	.byte 0


Cinna_Swim1::
# 6 "data/maps/CinnabarSouthRoute/scripts.pory"
	trainerbattle_single TRAINER_CINSWIMMER1, cs1_Intro, cs1_Outro
# 7 "data/maps/CinnabarSouthRoute/scripts.pory"
	msgbox PostBattle_cs1, MSGBOX_AUTOCLOSE
# 8 "data/maps/CinnabarSouthRoute/scripts.pory"
	waitmessage
	end


Cinna_Swim2::
# 25 "data/maps/CinnabarSouthRoute/scripts.pory"
	trainerbattle_single TRAINER_CINSWIMMER2, cs2_Intro, cs2_Outro
# 26 "data/maps/CinnabarSouthRoute/scripts.pory"
	msgbox PostBattle_cs2, MSGBOX_AUTOCLOSE
# 27 "data/maps/CinnabarSouthRoute/scripts.pory"
	waitmessage
	end


cinnaitem1::
# 45 "data/maps/CinnabarSouthRoute/scripts.pory"
	lockall
# 46 "data/maps/CinnabarSouthRoute/scripts.pory"
	giveitem ITEM_NUGGET
# 47 "data/maps/CinnabarSouthRoute/scripts.pory"
	waitmessage
# 48 "data/maps/CinnabarSouthRoute/scripts.pory"
	closemessage
# 49 "data/maps/CinnabarSouthRoute/scripts.pory"
	removeobject 3
# 50 "data/maps/CinnabarSouthRoute/scripts.pory"
	setflag FLAG_0x0C1
# 51 "data/maps/CinnabarSouthRoute/scripts.pory"
	releaseall
	end


cinnaitem2::
# 60 "data/maps/CinnabarSouthRoute/scripts.pory"
	lockall
# 61 "data/maps/CinnabarSouthRoute/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 62 "data/maps/CinnabarSouthRoute/scripts.pory"
	waitmessage
# 63 "data/maps/CinnabarSouthRoute/scripts.pory"
	closemessage
# 64 "data/maps/CinnabarSouthRoute/scripts.pory"
	removeobject 4
# 65 "data/maps/CinnabarSouthRoute/scripts.pory"
	setflag FLAG_0x0C2
# 66 "data/maps/CinnabarSouthRoute/scripts.pory"
	releaseall
	end


DangerSeaSign2::
# 71 "data/maps/CinnabarSouthRoute/scripts.pory"
	lockall
# 72 "data/maps/CinnabarSouthRoute/scripts.pory"
	msgbox DangerSeaSign2_Text_0
# 73 "data/maps/CinnabarSouthRoute/scripts.pory"
	closemessage
# 74 "data/maps/CinnabarSouthRoute/scripts.pory"
	releaseall
	end


DangerSeaSign2_Text_0:
# 72 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "WARNING: DANGEROUS SEAS AHEAD!$"

cs1_Outro::
# 12 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "Calm down!!!$"

cs1_Intro::
# 16 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "Did you come from Cinnabar Island?$"

PostBattle_cs1::
# 20 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "maybe I should train harder...$"

cs2_Outro::
# 31 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "Okay I'm sorry!$"

cs2_Intro::
# 35 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "Krystal is a stupid bitch, if I catch up to her I am going to drown her!$"

PostBattle_cs2::
# 39 "data/maps/CinnabarSouthRoute/scripts.pory"
	.string "maybe I should train harder...$"
