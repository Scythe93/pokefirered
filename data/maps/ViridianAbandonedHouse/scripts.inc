ViridianAbandonedHouse_MapScripts::
	.byte 0


GameStart1::
# 6 "data/maps/ViridianAbandonedHouse/scripts.pory"
	lockall
# 7 "data/maps/ViridianAbandonedHouse/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, GameStart1_1
# 42 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_4
# 43 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 44 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end

GameStart1_1:
# 8 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_0
# 9 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 10 "data/maps/ViridianAbandonedHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_1
# 12 "data/maps/ViridianAbandonedHouse/scripts.pory"
	givemon SPECIES_WEEDLE, 5, ITEM_ORAN_BERRY
# 13 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 15 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 16 "data/maps/ViridianAbandonedHouse/scripts.pory"
	special EnableNationalPokedex
# 17 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 18 "data/maps/ViridianAbandonedHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 19 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 20 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 21 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 22 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 25 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 26 "data/maps/ViridianAbandonedHouse/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 27 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag 0x828
# 28 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag 0x829
# 29 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_10
# 30 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_0x305
# 31 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 32 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_2
# 33 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 34 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 10
# 35 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 5
# 36 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 37 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_3
# 38 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 39 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end


GameStart1_Text_0:
# 8 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Hello {PLAYER}, my name is Scythe.\n"
	.string "I am god of this universe. I am\l"
	.string "using professor oaks body to speak\l"
	.string "to you.\l"
	.string "I feel that starter pokemon are too\l"
	.string "strong, They tend to carry you\l"
	.string "through the game. So... I removed\l"
	.string "them.\l"
	.string "You will be starting with a Weedle.\l"
	.string "This rom is based around the\l"
	.string "concept of finding and catching\l"
	.string "rare pokemon. So start catching!\l"
	.string "My apologies if you find some type\l"
	.string "of glitch. This is my first hack. It\l"
	.string "was not easy to make this! Good\l"
	.string "luck! -Scythe$"

GameStart1_Text_1:
# 11 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "{PLAYER} Recieved Weedle$"

GameStart1_Text_2:
# 32 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "I'm going to start you off with some\n"
	.string "special pokeballs too. Buy some\l"
	.string "more at the Mart.$"

GameStart1_Text_3:
# 37 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "You should be good to go now. Have\n"
	.string "fun!$"

GameStart1_Text_4:
# 42 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Good luck on your adventure.\n"
	.string "Let Scythe know about any bugs you\l"
	.string "find <3$"
