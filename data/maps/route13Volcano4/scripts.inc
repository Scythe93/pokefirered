route13Volcano4_MapScripts::
	.byte 0


volcanosummit_Sign::
# 4 "data/maps/route13Volcano4/scripts.pory"
	lockall
# 5 "data/maps/route13Volcano4/scripts.pory"
	msgbox volcanosummit_Sign_Text_0
# 6 "data/maps/route13Volcano4/scripts.pory"
	releaseall
	return


rocksmash::
# 10 "data/maps/route13Volcano4/scripts.pory"
	giveitem ITEM_HM06_ROCK_SMASH
# 11 "data/maps/route13Volcano4/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_8
# 12 "data/maps/route13Volcano4/scripts.pory"
	removeobject 1
# 13 "data/maps/route13Volcano4/scripts.pory"
	releaseall
	return


test123::
# 18 "data/maps/route13Volcano4/scripts.pory"
	lockall
# 19 "data/maps/route13Volcano4/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_9, test123_2
test123_1:
# 32 "data/maps/route13Volcano4/scripts.pory"
	hidemonpic
# 33 "data/maps/route13Volcano4/scripts.pory"
	releaseall
	return

test123_2:
# 20 "data/maps/route13Volcano4/scripts.pory"
	showmonpic SPECIES_GENGAR, 10, 3
# 21 "data/maps/route13Volcano4/scripts.pory"
	msgbox test123_Text_0, MSGBOX_YESNO
# 22 "data/maps/route13Volcano4/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq test123_5
test123_4:
# 26 "data/maps/route13Volcano4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq test123_7
	goto test123_1

test123_5:
# 23 "data/maps/route13Volcano4/scripts.pory"
	msgbox test123_Text_1
	goto test123_4

test123_7:
# 27 "data/maps/route13Volcano4/scripts.pory"
	givemon SPECIES_GENGAR, 50, ITEM_ORAN_BERRY
# 28 "data/maps/route13Volcano4/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/route13Volcano4/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_9
	goto test123_1


volcanosummit_Sign_Text_0:
# 5 "data/maps/route13Volcano4/scripts.pory"
	.string "Mt. Coder Summit.$"

test123_Text_0:
# 21 "data/maps/route13Volcano4/scripts.pory"
	.string "Do you want this Gengar?$"

test123_Text_1:
# 23 "data/maps/route13Volcano4/scripts.pory"
	.string "Ill choose another$"
