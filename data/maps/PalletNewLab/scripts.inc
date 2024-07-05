PalletNewLab_MapScripts::
	.byte 0


GameStart1::
# 6 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 7 "data/maps/PalletNewLab/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, GameStart1_1
# 44 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_7
# 45 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 46 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end

GameStart1_1:
# 8 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_0
# 9 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_1
# 10 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_2
# 11 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_3
# 12 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 13 "data/maps/PalletNewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_4
# 15 "data/maps/PalletNewLab/scripts.pory"
	givemon SPECIES_CATERPIE, 5, ITEM_ORAN_BERRY
# 16 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 18 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 19 "data/maps/PalletNewLab/scripts.pory"
	special EnableNationalPokedex
# 20 "data/maps/PalletNewLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 21 "data/maps/PalletNewLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 22 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 23 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 24 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 25 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 26 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 27 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 28 "data/maps/PalletNewLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 29 "data/maps/PalletNewLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 30 "data/maps/PalletNewLab/scripts.pory"
	setflag 0x828
# 31 "data/maps/PalletNewLab/scripts.pory"
	setflag 0x829
# 32 "data/maps/PalletNewLab/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_10
# 33 "data/maps/PalletNewLab/scripts.pory"
	setflag FLAG_0x305
# 34 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 35 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_5
# 36 "data/maps/PalletNewLab/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 10
# 37 "data/maps/PalletNewLab/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 5
# 38 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 39 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_6
# 40 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 41 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end


GameStart1_Text_0:
# 8 "data/maps/PalletNewLab/scripts.pory"
	.string "Hello {PLAYER}, I heard you're new\n"
	.string "in town. I'm Professoar Oak. I study\l"
	.string "all the different species of\l"
	.string "pokemon in the region.\l"
	.string "I have a request from you, I need\l"
	.string "you to help me gather data on all\l"
	.string "the different pokemon in Kanto.\l"
	.string "I need you to find, and catch as\l"
	.string "many rare pokemon as you can. You\l"
	.string "will need to search, far and wide..\l"
	.string "to understand, the power that's\l"
	.string "inside.$"

GameStart1_Text_1:
# 9 "data/maps/PalletNewLab/scripts.pory"
	.string "You will need a pokemon to start you\n"
	.string "off, I usually carry a supply of\l"
	.string "powerful pokemon on hand like\l"
	.string "Charmanders and Bulbasaurs, but\l"
	.string "unfortunately everything I have\l"
	.string "right now is sick.\l"
	.string "This Caterpie should do the job\l"
	.string "though. Use Caterpie to begin your\l"
	.string "journey, you will surely find some\l"
	.string "powerful pokemon to help carry you\l"
	.string "through the region.$"

GameStart1_Text_2:
# 10 "data/maps/PalletNewLab/scripts.pory"
	.string "Conquer all of Kanto, collect all 8\n"
	.string "badges, then beat the Pokemon\l"
	.string "League. While collecting data on\l"
	.string "rare pokemon all the way.\l"
	.string "Come back to me after you beat the\l"
	.string "pokemon league, and I will have\l"
	.string "something for you.$"

GameStart1_Text_3:
# 11 "data/maps/PalletNewLab/scripts.pory"
	.string "Good luck! and watch out for my\n"
	.string "Grandson, he is an arrogant prick\l"
	.string "but I sent him on the same mission\l"
	.string "as you. I'm sure you will run into\l"
	.string "him along the way.$"

GameStart1_Text_4:
# 14 "data/maps/PalletNewLab/scripts.pory"
	.string "{PLAYER} Recieved Caterpie$"

GameStart1_Text_5:
# 35 "data/maps/PalletNewLab/scripts.pory"
	.string "I'm going to start you off with these\n"
	.string "fancy looking pokeballs too. They\l"
	.string "function the same as a regular\l"
	.string "pokeball but look cooler. Buy some\l"
	.string "more at the Mart.$"

GameStart1_Text_6:
# 39 "data/maps/PalletNewLab/scripts.pory"
	.string "You should be good to go now. Have\n"
	.string "fun!$"

GameStart1_Text_7:
# 44 "data/maps/PalletNewLab/scripts.pory"
	.string "Good luck on your adventure.\n"
	.string "Let Scythe know about any bugs you\l"
	.string "find <3$"
