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


caveitemball2::
# 18 "data/maps/route163cave/scripts.pory"
	giveitem ITEM_MOON_STONE
# 19 "data/maps/route163cave/scripts.pory"
	setflag FLAG_0x0B0
# 20 "data/maps/route163cave/scripts.pory"
	removeobject 3
# 21 "data/maps/route163cave/scripts.pory"
	closemessage
	end


test1::
# 26 "data/maps/route163cave/scripts.pory"
	giveitem ITEM_NET_BALL
# 27 "data/maps/route163cave/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_9
# 28 "data/maps/route163cave/scripts.pory"
	removeobject 2
# 29 "data/maps/route163cave/scripts.pory"
	closemessage
	end


Route163Cave_Sign_Text_0:
# 7 "data/maps/route163cave/scripts.pory"
	.string "Dead Man's Fishing Hole.$"

cavetest1_Text_0:
# 13 "data/maps/route163cave/scripts.pory"
	.string "pepe recieved an Ultra Ball. You\n"
	.string "should use it in the fishing hole.$"
