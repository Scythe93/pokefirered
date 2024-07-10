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


scythedialogue::
# 54 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 55 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_0
# 56 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_1
# 57 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_2
# 58 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_3
# 59 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_4
# 60 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_5
# 61 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_6
# 62 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_7
# 63 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_8
# 64 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_9
# 65 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 66 "data/maps/PalletNewLab/scripts.pory"
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

scythedialogue_Text_0:
# 55 "data/maps/PalletNewLab/scripts.pory"
	.string "Hey! I'm Scythe. I am the creator of\n"
	.string "this Rom.$"

scythedialogue_Text_1:
# 56 "data/maps/PalletNewLab/scripts.pory"
	.string "A quick rundown of the rom for you;\n"
	.string "The general layout has been kept\l"
	.string "the same as Fire Red. Some routes\l"
	.string "and areas have been modified,\l"
	.string "giving it a new feel.$"

scythedialogue_Text_2:
# 57 "data/maps/PalletNewLab/scripts.pory"
	.string "Some areas and routes have been\n"
	.string "created entirely new. Keep your\l"
	.string "eyes open and try exploring a bit.$"

scythedialogue_Text_3:
# 58 "data/maps/PalletNewLab/scripts.pory"
	.string "The idea of this rom, is to find rare\n"
	.string "pokemon. They might be hard to\l"
	.string "find, but you can get every\l"
	.string "pokemon from gen 1-3.$"

scythedialogue_Text_4:
# 59 "data/maps/PalletNewLab/scripts.pory"
	.string "I tried to keep things slightly\n"
	.string "realistic in the sense that, you\l"
	.string "will find bugs in a forest, you\l"
	.string "won't find saltwater fish in a river,\l"
	.string "etc.$"

scythedialogue_Text_5:
# 60 "data/maps/PalletNewLab/scripts.pory"
	.string "Just because an area looks cool,\n"
	.string "doesn't necessarily mean there is a\l"
	.string "rare pokemon hiding there, and just\l"
	.string "because an area is boring doesn't\l"
	.string "mean there is nothing there :P$"

scythedialogue_Text_6:
# 61 "data/maps/PalletNewLab/scripts.pory"
	.string "the fishing rods are able to find\n"
	.string "different things, old rod doesn't\l"
	.string "only catch magikarps anymore.$"

scythedialogue_Text_7:
# 62 "data/maps/PalletNewLab/scripts.pory"
	.string "also, most of the in-game trades\n"
	.string "have been modified. Don't skip past\l"
	.string "them, it might be actaully useful\l"
	.string "to you.$"

scythedialogue_Text_8:
# 63 "data/maps/PalletNewLab/scripts.pory"
	.string "my apologies for any bugs you find,\n"
	.string "I'm sure I've missed at least one\l"
	.string "thing. If you find a bug, let me\l"
	.string "know and I can fix it and send the\l"
	.string "updated rom$"

scythedialogue_Text_9:
# 64 "data/maps/PalletNewLab/scripts.pory"
	.string "Good Luck!!!$"
