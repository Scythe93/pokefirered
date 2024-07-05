Route163_MapScripts::
	.byte 0


r163swimmer1::
# 7 "data/maps/Route163/scripts.pory"
	trainerbattle_single TRAINER_RTE163SWIMMER1, vLass_Intro, vLass_Outro
# 8 "data/maps/Route163/scripts.pory"
	msgbox PostBattle_vLass, MSGBOX_AUTOCLOSE
# 9 "data/maps/Route163/scripts.pory"
	waitmessage
	end


swimmerintro1::
# 13 "data/maps/Route163/scripts.pory"
	.string "Wow! I wasn't expecting to see another person all the way out here!$"

swimmeroutro1::
# 16 "data/maps/Route163/scripts.pory"
	.string "I should have known you'd be tough!$"

swimmerpost1::
# 19 "data/maps/Route163/scripts.pory"
	.string "Careful! We're far from shore!$"
