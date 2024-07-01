ViridianAbandonedHouse_MapScripts::
# 2 "data/maps/ViridianAbandonedHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_StartRivalBattle
	.byte 0


GameStart1::
# 7 "data/maps/ViridianAbandonedHouse/scripts.pory"
	lockall
# 8 "data/maps/ViridianAbandonedHouse/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, GameStart1_1
# 44 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_5
# 45 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 46 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end

GameStart1_1:
# 9 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_0
# 10 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 11 "data/maps/ViridianAbandonedHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_1
# 13 "data/maps/ViridianAbandonedHouse/scripts.pory"
	givemon SPECIES_WEEDLE, 5, ITEM_ORAN_BERRY
# 14 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 16 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 17 "data/maps/ViridianAbandonedHouse/scripts.pory"
	special EnableNationalPokedex
# 18 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 19 "data/maps/ViridianAbandonedHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 20 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 21 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 22 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 25 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 26 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 27 "data/maps/ViridianAbandonedHouse/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 28 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag 0x828
# 29 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag 0x829
# 30 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_10
# 31 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_0x305
# 32 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 33 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_2
# 34 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 35 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 10
# 36 "data/maps/ViridianAbandonedHouse/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 5
# 37 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 38 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_3
# 39 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart1_Text_4
# 40 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 41 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end


GameStart2::
# 54 "data/maps/ViridianAbandonedHouse/scripts.pory"
	lockall
# 55 "data/maps/ViridianAbandonedHouse/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, GameStart2_1
# 65 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart2_Text_2
# 66 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 67 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end

GameStart2_1:
# 56 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart2_Text_0
# 57 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_WONDER_CARD_UNUSED_10
# 58 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 59 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox GameStart2_Text_1
# 60 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 61 "data/maps/ViridianAbandonedHouse/scripts.pory"
	releaseall
	end


PalletTown_StartRivalBattle::
# 74 "data/maps/ViridianAbandonedHouse/scripts.pory"
	goto_if_unset FLAG_0x305, PalletTown_StartRivalBattle_1
# 78 "data/maps/ViridianAbandonedHouse/scripts.pory"
	clearflag FLAG_0x304
	return

PalletTown_StartRivalBattle_1:
# 75 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setflag FLAG_0x304
	return


RivalBattle1::
# 84 "data/maps/ViridianAbandonedHouse/scripts.pory"
	trainerbattle_single TRAINER_RIVAL1, Rival1_Intro, Rival1_Outro
# 85 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox PostBattle_Rival1, MSGBOX_AUTOCLOSE
# 86 "data/maps/ViridianAbandonedHouse/scripts.pory"
	waitmessage
	end


GameStart1_Text_0:
# 9 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Hello {PLAYER}, my name is Scythe.\n"
	.string "I am god of this universe. I am\l"
	.string "using professor oaks body to speak\l"
	.string "to you.\n"
	.string "I feel that starter pokemon are too\l"
	.string "strong, They tend to carry you\l"
	.string "through the game. So... I removed\l"
	.string "them.\n"
	.string "You will be starting with a Weedle.\n"
	.string "This rom is based around the\l"
	.string "concept of finding and catching\l"
	.string "rare pokemon. So start catching!\n"
	.string "My apologies if you find some type\l"
	.string "of glitch. This is my first hack. It\l"
	.string "was not easy to make this! Good\l"
	.string "luck! -Scythe$"

GameStart1_Text_1:
# 12 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "{PLAYER} Recieved Weedle$"

GameStart1_Text_2:
# 33 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "I'm going to start you off with some\n"
	.string "special pokeballs too. Buy some\l"
	.string "more at the Mart.$"

GameStart1_Text_3:
# 38 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Your next move is to go to your\n"
	.string "rivals house to get a TOWN MAP.\l"
	.string "It's important!$"

GameStart1_Text_4:
# 39 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "You should be good to go now. Have\n"
	.string "fun! Don't forget to go to your\l"
	.string "rivals house!$"

GameStart1_Text_5:
# 44 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Good luck on your adventure.\n"
	.string "Let Scythe know about any bugs you\l"
	.string "find <3$"

GameStart2_Text_0:
# 56 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Hello$"

GameStart2_Text_1:
# 59 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "You should be good to go now. Have\n"
	.string "fun!$"

GameStart2_Text_2:
# 65 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Good luck on your adventure.$"

Rival1_Intro::
# 90 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Hey! You're the new kid in town?\n My name's Skidmore, but everyone calls me Skids. \n Oak sent me on this mission to catch rare pokemon and conquer the Pokemon League, but that old bastard started me off with a fucking Weedle!\n He ain't making it easy for me! \n It doesn't matter though. I'm still going to be the very best, like no-one ever was.\n I'm going to beat every trainer in my way.. starting with YOU!$"

Rival1_Outro::
# 94 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Damn! You're tougher than I thought.\n I'll get you next time. You might have beaten me now but you're still a pussy. \n I'll help you out anyway...\n Go to my house and talk to my sister, she will give you a Town map. \n Smell ya later!$"

PostBattle_Rival1::
# 99 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Smell ya later$"
