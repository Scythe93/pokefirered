# 1 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_MapScripts::
# 2 "data/maps/MtMoon_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
# 3 "data/maps/MtMoon_1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtMoon_1F/scripts.pory"

# 5 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_OnTransition::
# 6 "data/maps/MtMoon_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
# 7 "data/maps/MtMoon_1F/scripts.pory"
	end
# 8 "data/maps/MtMoon_1F/scripts.pory"

# 9 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_ZubatSign::
# 10 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
# 11 "data/maps/MtMoon_1F/scripts.pory"
	end
# 12 "data/maps/MtMoon_1F/scripts.pory"

# 13 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Marcos::
# 14 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 15 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/MtMoon_1F/scripts.pory"
	end
# 17 "data/maps/MtMoon_1F/scripts.pory"

# 18 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Josh::
# 19 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 20 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/MtMoon_1F/scripts.pory"
	end
# 22 "data/maps/MtMoon_1F/scripts.pory"

# 23 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Miriam::
# 24 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 25 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/MtMoon_1F/scripts.pory"
	end
# 27 "data/maps/MtMoon_1F/scripts.pory"

# 28 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Iris::
# 29 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 30 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/MtMoon_1F/scripts.pory"
	end
# 32 "data/maps/MtMoon_1F/scripts.pory"

# 33 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Jovan::
# 34 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 35 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/MtMoon_1F/scripts.pory"
	end
# 37 "data/maps/MtMoon_1F/scripts.pory"

# 38 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Kent::
# 39 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 40 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/MtMoon_1F/scripts.pory"
	end
# 42 "data/maps/MtMoon_1F/scripts.pory"

# 43 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Robby::
# 44 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 45 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/MtMoon_1F/scripts.pory"
	end

moonstone2::
# 52 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 53 "data/maps/MtMoon_1F/scripts.pory"
	giveitem ITEM_MOON_STONE
# 54 "data/maps/MtMoon_1F/scripts.pory"
	waitmessage
# 55 "data/maps/MtMoon_1F/scripts.pory"
	closemessage
# 56 "data/maps/MtMoon_1F/scripts.pory"
	removeobject 15
# 57 "data/maps/MtMoon_1F/scripts.pory"
	setflag FLAG_0x0B7
# 58 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	end


moonstone5::
# 63 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 64 "data/maps/MtMoon_1F/scripts.pory"
	giveitem ITEM_MOON_STONE
# 65 "data/maps/MtMoon_1F/scripts.pory"
	waitmessage
# 66 "data/maps/MtMoon_1F/scripts.pory"
	closemessage
# 67 "data/maps/MtMoon_1F/scripts.pory"
	removeobject 16
# 68 "data/maps/MtMoon_1F/scripts.pory"
	setflag FLAG_0x0B8
# 69 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	end

