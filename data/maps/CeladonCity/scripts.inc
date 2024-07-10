# 1 "data/maps/CeladonCity/scripts.pory"
.set LOCALID_FAT_MAN,   2
# 2 "data/maps/CeladonCity/scripts.pory"
.set LOCALID_POLIWRATH, 3
# 3 "data/maps/CeladonCity/scripts.pory"

# 4 "data/maps/CeladonCity/scripts.pory"
CeladonCity_MapScripts::
# 5 "data/maps/CeladonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
# 6 "data/maps/CeladonCity/scripts.pory"
	.byte 0
# 7 "data/maps/CeladonCity/scripts.pory"

# 8 "data/maps/CeladonCity/scripts.pory"
CeladonCity_OnTransition::
# 9 "data/maps/CeladonCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
# 10 "data/maps/CeladonCity/scripts.pory"
	end
# 11 "data/maps/CeladonCity/scripts.pory"

# 12 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_LittleGirl::
# 13 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
# 14 "data/maps/CeladonCity/scripts.pory"
	end
# 15 "data/maps/CeladonCity/scripts.pory"

# 16 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_OldMan1::
# 17 "data/maps/CeladonCity/scripts.pory"
	lock
# 18 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 19 "data/maps/CeladonCity/scripts.pory"
	release
# 20 "data/maps/CeladonCity/scripts.pory"
	end
# 21 "data/maps/CeladonCity/scripts.pory"

# 22 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Woman::
# 23 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
# 24 "data/maps/CeladonCity/scripts.pory"
	end
# 25 "data/maps/CeladonCity/scripts.pory"

# 26 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_OldMan2::
# 27 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
# 28 "data/maps/CeladonCity/scripts.pory"
	end
# 29 "data/maps/CeladonCity/scripts.pory"

# 30 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_SoftboiledTutor::
# 31 "data/maps/CeladonCity/scripts.pory"
	goto EventScript_SoftboiledTutor
# 32 "data/maps/CeladonCity/scripts.pory"
	end
# 33 "data/maps/CeladonCity/scripts.pory"

# 34 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_FatMan::
# 35 "data/maps/CeladonCity/scripts.pory"
	lock
# 36 "data/maps/CeladonCity/scripts.pory"
	faceplayer
# 37 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 38 "data/maps/CeladonCity/scripts.pory"
	closemessage
# 39 "data/maps/CeladonCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_FaceOriginalDirection
# 40 "data/maps/CeladonCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/CeladonCity/scripts.pory"
	release
# 42 "data/maps/CeladonCity/scripts.pory"
	end
# 43 "data/maps/CeladonCity/scripts.pory"

# 44 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Poliwrath::
# 45 "data/maps/CeladonCity/scripts.pory"
	lock
# 46 "data/maps/CeladonCity/scripts.pory"
	faceplayer
# 47 "data/maps/CeladonCity/scripts.pory"
	waitse
# 48 "data/maps/CeladonCity/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 49 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 50 "data/maps/CeladonCity/scripts.pory"
	closemessage
# 51 "data/maps/CeladonCity/scripts.pory"
	waitmoncry
# 52 "data/maps/CeladonCity/scripts.pory"
	applymovement LOCALID_POLIWRATH, Common_Movement_FaceOriginalDirection
# 53 "data/maps/CeladonCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/CeladonCity/scripts.pory"
	release
# 55 "data/maps/CeladonCity/scripts.pory"
	end
# 56 "data/maps/CeladonCity/scripts.pory"

# 57 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_RocketGrunt1::
# 58 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
# 59 "data/maps/CeladonCity/scripts.pory"
	end
# 60 "data/maps/CeladonCity/scripts.pory"

# 61 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_RocketGrunt2::
# 62 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
# 63 "data/maps/CeladonCity/scripts.pory"
	end
# 64 "data/maps/CeladonCity/scripts.pory"

# 65 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Boy::
# 66 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
# 67 "data/maps/CeladonCity/scripts.pory"
	end
# 68 "data/maps/CeladonCity/scripts.pory"

# 69 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_SilphCoScientist::
# 70 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
# 71 "data/maps/CeladonCity/scripts.pory"
	end
# 72 "data/maps/CeladonCity/scripts.pory"

# 73 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_TrainerTips1::
# 74 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
# 75 "data/maps/CeladonCity/scripts.pory"
	end
# 76 "data/maps/CeladonCity/scripts.pory"

# 77 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_CitySign::
# 78 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
# 79 "data/maps/CeladonCity/scripts.pory"
	end
# 80 "data/maps/CeladonCity/scripts.pory"

# 81 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_GymSign::
# 82 "data/maps/CeladonCity/scripts.pory"
	lockall
# 83 "data/maps/CeladonCity/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 84 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 85 "data/maps/CeladonCity/scripts.pory"
	releaseall
# 86 "data/maps/CeladonCity/scripts.pory"
	end
# 87 "data/maps/CeladonCity/scripts.pory"

# 88 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_MansionSign::
# 89 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
# 90 "data/maps/CeladonCity/scripts.pory"
	end
# 91 "data/maps/CeladonCity/scripts.pory"

# 92 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_DeptStoreSign::
# 93 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
# 94 "data/maps/CeladonCity/scripts.pory"
	end
# 95 "data/maps/CeladonCity/scripts.pory"

# 96 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_TrainerTips2::
# 97 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
# 98 "data/maps/CeladonCity/scripts.pory"
	end
# 99 "data/maps/CeladonCity/scripts.pory"

# 100 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_PrizeExchangeSign::
# 101 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
# 102 "data/maps/CeladonCity/scripts.pory"
	end
# 103 "data/maps/CeladonCity/scripts.pory"

# 104 "data/maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_GameCornerSign::
# 105 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
# 106 "data/maps/CeladonCity/scripts.pory"
	end

rodsandstuff::
# 111 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 112 "data/maps/CeladonCity/scripts.pory"
	setflag FLAG_BADGE01_GET
# 113 "data/maps/CeladonCity/scripts.pory"
	setflag FLAG_BADGE02_GET
# 114 "data/maps/CeladonCity/scripts.pory"
	setflag FLAG_BADGE05_GET
# 115 "data/maps/CeladonCity/scripts.pory"
	setflag FLAG_BADGE06_GET
# 116 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_HM03_SURF
# 117 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_HM02_FLY
# 118 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_HM06_ROCK_SMASH
# 119 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_HM01_CUT
# 120 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 121 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_BICYCLE
# 122 "data/maps/CeladonCity/scripts.pory"
	giveitem ITEM_MASTER_BALL, 50
# 123 "data/maps/CeladonCity/scripts.pory"
	msgbox rodsandstuff_Text_0
# 124 "data/maps/CeladonCity/scripts.pory"
	closemessage
# 125 "data/maps/CeladonCity/scripts.pory"
	releaseall
	end


rodsandstuff_Text_0:
# 123 "data/maps/CeladonCity/scripts.pory"
	.string "gucci$"
