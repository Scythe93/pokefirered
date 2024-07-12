BillsLake2_MapScripts::
	.byte 0


FallsSign1::
# 6 "data/maps/BillsLake2/scripts.pory"
	lockall
# 7 "data/maps/BillsLake2/scripts.pory"
	msgbox FallsSign1_Text_0
# 8 "data/maps/BillsLake2/scripts.pory"
	closemessage
# 9 "data/maps/BillsLake2/scripts.pory"
	releaseall
	end


Jahova_hiker1::
# 14 "data/maps/BillsLake2/scripts.pory"
	trainerbattle_single TRAINER_JAHOVA_HIKER1, Jhike1_Intro, Jhike1_Outro
# 15 "data/maps/BillsLake2/scripts.pory"
	msgbox PostBattle_Jhike1, MSGBOX_AUTOCLOSE
# 16 "data/maps/BillsLake2/scripts.pory"
	waitmessage
	end


Jahova_hiker2::
# 33 "data/maps/BillsLake2/scripts.pory"
	trainerbattle_single TRAINER_JAHOVA_HIKER2, Jhike2_Intro, Jhike2_Outro
# 34 "data/maps/BillsLake2/scripts.pory"
	msgbox PostBattle_Jhike2, MSGBOX_AUTOCLOSE
# 35 "data/maps/BillsLake2/scripts.pory"
	waitmessage
	end


FallsSign1_Text_0:
# 7 "data/maps/BillsLake2/scripts.pory"
	.string "Jahova Falls$"

Jhike1_Outro::
# 20 "data/maps/BillsLake2/scripts.pory"
	.string "Largest waterfall in the region!$"

Jhike1_Intro::
# 24 "data/maps/BillsLake2/scripts.pory"
	.string "Feel the mist from the waterfall?$"

PostBattle_Jhike1::
# 28 "data/maps/BillsLake2/scripts.pory"
	.string "maybe I should train harder...$"

Jhike2_Outro::
# 39 "data/maps/BillsLake2/scripts.pory"
	.string "Largest waterfall in the region!$"

Jhike2_Intro::
# 43 "data/maps/BillsLake2/scripts.pory"
	.string "Feel the mist from the waterfall?$"

PostBattle_Jhike2::
# 47 "data/maps/BillsLake2/scripts.pory"
	.string "maybe I should train harder...$"
