route163cave_MapScripts::
	.byte 0


Route163Cave_Sign::
# 6 "data/maps/route163cave/scripts.pory"
	lockall
# 7 "data/maps/route163cave/scripts.pory"
	msgbox Route163Cave_Sign_Text_0
# 8 "data/maps/route163cave/scripts.pory"
	releaseall
	return


cavetest1::
# 12 "data/maps/route163cave/scripts.pory"
	lockall
# 13 "data/maps/route163cave/scripts.pory"
	msgbox cavetest1_Text_0
# 14 "data/maps/route163cave/scripts.pory"
	releaseall
	return


test1::
# 18 "data/maps/route163cave/scripts.pory"
	lockall
# 19 "data/maps/route163cave/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_9, test1_2
test1_1:
# 32 "data/maps/route163cave/scripts.pory"
	hidemonpic
# 33 "data/maps/route163cave/scripts.pory"
	releaseall
	return

test1_2:
# 20 "data/maps/route163cave/scripts.pory"
	showmonpic SPECIES_GENGAR, 10, 3
# 21 "data/maps/route163cave/scripts.pory"
	msgbox test1_Text_0, MSGBOX_YESNO
# 22 "data/maps/route163cave/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq test1_5
test1_4:
# 26 "data/maps/route163cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq test1_7
	goto test1_1

test1_5:
# 23 "data/maps/route163cave/scripts.pory"
	msgbox test1_Text_1
	goto test1_4

test1_7:
# 27 "data/maps/route163cave/scripts.pory"
	givemon SPECIES_GENGAR, 50, ITEM_ORAN_BERRY
# 28 "data/maps/route163cave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/route163cave/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_9
	goto test1_1


Route163Cave_Sign_Text_0:
# 7 "data/maps/route163cave/scripts.pory"
	.string "Dead Man's Fishing Hole.$"

cavetest1_Text_0:
# 13 "data/maps/route163cave/scripts.pory"
	.string "pepe recieved an Ultra Ball. You should\n"
	.string "use it in the fishing hole.$"

test1_Text_0:
# 21 "data/maps/route163cave/scripts.pory"
	.string "Do you want this Gengar?$"

test1_Text_1:
# 23 "data/maps/route163cave/scripts.pory"
	.string "Ill choose another$"
