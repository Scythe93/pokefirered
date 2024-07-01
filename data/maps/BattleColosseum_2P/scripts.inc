BattleColosseum_2P_MapScripts::
	.byte 0


FairyFountain_Sign::
# 6 "data/maps/BattleColosseum_2P/scripts.pory"
	lockall
# 7 "data/maps/BattleColosseum_2P/scripts.pory"
	msgbox FairyFountain_Sign_Text_0
# 8 "data/maps/BattleColosseum_2P/scripts.pory"
	releaseall
	return


safaricave1::
# 13 "data/maps/BattleColosseum_2P/scripts.pory"
	giveitem ITEM_ULTRA_BALL
# 14 "data/maps/BattleColosseum_2P/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_7
# 15 "data/maps/BattleColosseum_2P/scripts.pory"
	removeobject 1
# 16 "data/maps/BattleColosseum_2P/scripts.pory"
	releaseall
	return


FairyFountain_Sign_Text_0:
# 7 "data/maps/BattleColosseum_2P/scripts.pory"
	.string "The Great Fairy Fountain.$"
