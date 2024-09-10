PalletNewLab_MapScripts::
	.byte 0


GameStart1::
# 6 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 7 "data/maps/PalletNewLab/scripts.pory"
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, GameStart1_1
# 49 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_8
# 50 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 51 "data/maps/PalletNewLab/scripts.pory"
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
	setflag FLAG_0x0C4
# 35 "data/maps/PalletNewLab/scripts.pory"
	clearflag FLAG_0x304
# 36 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 37 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_5
# 38 "data/maps/PalletNewLab/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 10
# 39 "data/maps/PalletNewLab/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 5
# 40 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 41 "data/maps/PalletNewLab/scripts.pory"
	applymovement 3, labbasement1
# 42 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_6
# 43 "data/maps/PalletNewLab/scripts.pory"
	msgbox GameStart1_Text_7
# 45 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 46 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end


scythedialogue::
# 59 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 60 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_0
# 61 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_1
# 62 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_2
# 63 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_3
# 64 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_4
# 65 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_5
# 66 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_6
# 67 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_7
# 68 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_8
# 69 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_9
# 70 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_10
# 71 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_11
# 72 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_12
# 73 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_13
# 74 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_14
# 75 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_15
# 76 "data/maps/PalletNewLab/scripts.pory"
	msgbox scythedialogue_Text_16
# 77 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 78 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end


labscientist1::
# 84 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 85 "data/maps/PalletNewLab/scripts.pory"
	msgbox labscientist1_Text_0
# 86 "data/maps/PalletNewLab/scripts.pory"
	msgbox labscientist1_Text_1
# 87 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 88 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end


# 93 "data/maps/PalletNewLab/scripts.pory"
labbasement1:
# 94 "data/maps/PalletNewLab/scripts.pory"
	walk_down
# 94 "data/maps/PalletNewLab/scripts.pory"
	walk_down
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
# 95 "data/maps/PalletNewLab/scripts.pory"
	walk_right
	step_end

labscientist2::
# 103 "data/maps/PalletNewLab/scripts.pory"
	lockall
# 104 "data/maps/PalletNewLab/scripts.pory"
	msgbox labscientist2_Text_0
# 105 "data/maps/PalletNewLab/scripts.pory"
	msgbox labscientist2_Text_1
# 106 "data/maps/PalletNewLab/scripts.pory"
	closemessage
# 107 "data/maps/PalletNewLab/scripts.pory"
	releaseall
	end


GameStart1_Text_0:
# 8 "data/maps/PalletNewLab/scripts.pory"
	.string "Hello {PLAYER}, I heard you're new\n"
	.string "in town. I'm Professoar Oak. I study\l"
	.string "all the different species of\l"
	.string "pokemon in the region.\l"
	.string "I have a request for you, I need\l"
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
# 37 "data/maps/PalletNewLab/scripts.pory"
	.string "I'm going to start you off with these\n"
	.string "fancy looking pokeballs too. They\l"
	.string "function the same as a regular\l"
	.string "pokeball but look cooler. Buy some\l"
	.string "more at the Mart.$"

GameStart1_Text_6:
# 42 "data/maps/PalletNewLab/scripts.pory"
	.string "Speak with the man in the trenchcoat\n"
	.string "in the corner, if you'd like a\l"
	.string "rundown of this ROM hack.$"

GameStart1_Text_7:
# 43 "data/maps/PalletNewLab/scripts.pory"
	.string "You should be good to go now. Have\n"
	.string "fun.$"

GameStart1_Text_8:
# 49 "data/maps/PalletNewLab/scripts.pory"
	.string "Good luck on your adventure.\n"
	.string "Speak to SCYTHE in the corner of\l"
	.string "the room for a rundown of the ROM\l"
	.string "hack!$"

scythedialogue_Text_0:
# 60 "data/maps/PalletNewLab/scripts.pory"
	.string "Hey! I'm Scythe. I am the creator of\n"
	.string "this Rom.$"

scythedialogue_Text_1:
# 61 "data/maps/PalletNewLab/scripts.pory"
	.string "Sorry you're now stuck in a long\n"
	.string "dialogue, but I will give you a\l"
	.string "full rundown of this romhack.$"

scythedialogue_Text_2:
# 62 "data/maps/PalletNewLab/scripts.pory"
	.string "The general layout has been kept the\n"
	.string "same as Fire Red. Most routes and\l"
	.string "areas have been modified, giving it\l"
	.string "a new feel.$"

scythedialogue_Text_3:
# 63 "data/maps/PalletNewLab/scripts.pory"
	.string "Some areas and routes have been\n"
	.string "created entirely new. Keep your\l"
	.string "eyes open and try exploring a bit.\l"
	.string "You might have to come back to an\l"
	.string "area after getting surf, cut, etc.$"

scythedialogue_Text_4:
# 64 "data/maps/PalletNewLab/scripts.pory"
	.string "The idea of this rom, is to find rare\n"
	.string "pokemon. They might be hard to\l"
	.string "find, but you can get every\l"
	.string "pokemon from gen 1-3, with the\l"
	.string "exception of a few legendaries.$"

scythedialogue_Text_5:
# 65 "data/maps/PalletNewLab/scripts.pory"
	.string "I tried to keep things slightly\n"
	.string "realistic in the sense that, you\l"
	.string "will find bug pokemon in a forest,\l"
	.string "you won't find saltwater fish in a\l"
	.string "river, etc.$"

scythedialogue_Text_6:
# 66 "data/maps/PalletNewLab/scripts.pory"
	.string "Just because an area looks cool,\n"
	.string "doesn't necessarily mean there is a\l"
	.string "rare pokemon hiding there, and just\l"
	.string "because an area is boring doesn't\l"
	.string "mean there is nothing there :P$"

scythedialogue_Text_7:
# 67 "data/maps/PalletNewLab/scripts.pory"
	.string "The fishing rods are able to find\n"
	.string "different things, old rod doesn't\l"
	.string "only catch magikarps anymore.$"

scythedialogue_Text_8:
# 68 "data/maps/PalletNewLab/scripts.pory"
	.string "All pokemon can be obtained WITHOUT\n"
	.string "needing to trade. Whether by\l"
	.string "leveling up, or a stone.$"

scythedialogue_Text_9:
# 69 "data/maps/PalletNewLab/scripts.pory"
	.string "Eevee is now effected by moon stones\n"
	.string "and sun stones. Slowpoke is too.$"

scythedialogue_Text_10:
# 70 "data/maps/PalletNewLab/scripts.pory"
	.string "Gym battles have increased\n"
	.string "difficulty. You will end up having\l"
	.string "to train your pokemon more than in\l"
	.string "Fire Red. Oh, and the elite 4 are\l"
	.string "increased too. Try beating them\l"
	.string "twice!$"

scythedialogue_Text_11:
# 71 "data/maps/PalletNewLab/scripts.pory"
	.string "Most of the in-game trades have been\n"
	.string "modified. Don't skip past them, they\l"
	.string "might be actaully useful to you.$"

scythedialogue_Text_12:
# 72 "data/maps/PalletNewLab/scripts.pory"
	.string "Shiny odds have been increased, from\n"
	.string "1/8192 to 1/262. I felt it was\l"
	.string "damn nearly impossible to find a\l"
	.string "shiny before, now you will be able\l"
	.string "to find a couple throughout your\l"
	.string "playthrough without grinding for\l"
	.string "hours. It's still rare enough that\l"
	.string "it will excite you when you find\l"
	.string "them, but not so rare that it\l"
	.string "literally never happens.$"

scythedialogue_Text_13:
# 73 "data/maps/PalletNewLab/scripts.pory"
	.string "The Town Map is kinda messed up, it\n"
	.string "is extremely complicated to edit it\l"
	.string "properly so I just gave up and\l"
	.string "left it alone. Some new areas are\l"
	.string "not going to show up on the map\l"
	.string "properly, or might bug a little if\l"
	.string "you open the map in certain places.\l"
	.string "Don't trust the town map too much,\l"
	.string "there are large areas / routes that\l"
	.string "you won't be able to see on there\l"
	.string "at all.$"

scythedialogue_Text_14:
# 74 "data/maps/PalletNewLab/scripts.pory"
	.string "My apologies for any bugs you find,\n"
	.string "I'm sure I've missed a few. If you\l"
	.string "find a bug, let me know and I can\l"
	.string "fix it and send the updated rom$"

scythedialogue_Text_15:
# 75 "data/maps/PalletNewLab/scripts.pory"
	.string "The rom hack ends after the pokemon\n"
	.string "league, Just make sure you go back\l"
	.string "and battle them a second time after\l"
	.string "beating them once. From there on\l"
	.string "out, it's the same as regular fire\l"
	.string "red.$"

scythedialogue_Text_16:
# 76 "data/maps/PalletNewLab/scripts.pory"
	.string "and that's it!! Good Luck!!!$"

labscientist1_Text_0:
# 85 "data/maps/PalletNewLab/scripts.pory"
	.string "Why are you over here? There's\n"
	.string "nothing here for you, this is just a\l"
	.string "dusty storage basement!$"

labscientist1_Text_1:
# 86 "data/maps/PalletNewLab/scripts.pory"
	.string "You should go speak with Professor\n"
	.string "Oak if you haven't already.$"

labscientist2_Text_0:
# 104 "data/maps/PalletNewLab/scripts.pory"
	.string "Hey there! I'm one of Professor Oak's\n"
	.string "Aide's. Nice to meet you. I'm sure\l"
	.string "I'll be working with you somewhere\l"
	.string "in the future!$"

labscientist2_Text_1:
# 105 "data/maps/PalletNewLab/scripts.pory"
	.string "You should go speak with Oak, or\n"
	.string "Scythe if you haven't already.$"
