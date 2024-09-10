# 1 "data/maps/SaffronCity/scripts.pory"
.set LOCALID_DOOR_GUARD_GRUNT, 6
# 2 "data/maps/SaffronCity/scripts.pory"

# 3 "data/maps/SaffronCity/scripts.pory"
SaffronCity_MapScripts::
# 4 "data/maps/SaffronCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 5 "data/maps/SaffronCity/scripts.pory"
	.byte 0
# 6 "data/maps/SaffronCity/scripts.pory"

# 7 "data/maps/SaffronCity/scripts.pory"
SaffronCity_OnTransition::
# 8 "data/maps/SaffronCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 9 "data/maps/SaffronCity/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
# 10 "data/maps/SaffronCity/scripts.pory"
	end
# 11 "data/maps/SaffronCity/scripts.pory"

# 12 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 13 "data/maps/SaffronCity/scripts.pory"
	setobjectxyperm LOCALID_DOOR_GUARD_GRUNT, 33, 31
# 14 "data/maps/SaffronCity/scripts.pory"
	return
# 15 "data/maps/SaffronCity/scripts.pory"

# 16 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 17 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 18 "data/maps/SaffronCity/scripts.pory"
	end
# 19 "data/maps/SaffronCity/scripts.pory"

# 20 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 21 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 22 "data/maps/SaffronCity/scripts.pory"
	end
# 23 "data/maps/SaffronCity/scripts.pory"

# 24 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 25 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 26 "data/maps/SaffronCity/scripts.pory"
	end
# 27 "data/maps/SaffronCity/scripts.pory"

# 28 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 29 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 30 "data/maps/SaffronCity/scripts.pory"
	end
# 31 "data/maps/SaffronCity/scripts.pory"

# 32 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 33 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 34 "data/maps/SaffronCity/scripts.pory"
	end
# 35 "data/maps/SaffronCity/scripts.pory"

# 36 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 37 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 38 "data/maps/SaffronCity/scripts.pory"
	end
# 39 "data/maps/SaffronCity/scripts.pory"

# 40 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 41 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 42 "data/maps/SaffronCity/scripts.pory"
	end
# 43 "data/maps/SaffronCity/scripts.pory"

# 44 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 45 "data/maps/SaffronCity/scripts.pory"
	lock
# 46 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 47 "data/maps/SaffronCity/scripts.pory"
	applymovement LOCALID_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 48 "data/maps/SaffronCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 50 "data/maps/SaffronCity/scripts.pory"
	release
# 51 "data/maps/SaffronCity/scripts.pory"
	end
# 52 "data/maps/SaffronCity/scripts.pory"

# 53 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 54 "data/maps/SaffronCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 55 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 56 "data/maps/SaffronCity/scripts.pory"
	release
# 57 "data/maps/SaffronCity/scripts.pory"
	end
# 58 "data/maps/SaffronCity/scripts.pory"

# 59 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 60 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 61 "data/maps/SaffronCity/scripts.pory"
	end
# 62 "data/maps/SaffronCity/scripts.pory"

# 63 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Youngster::
# 64 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 65 "data/maps/SaffronCity/scripts.pory"
	end
# 66 "data/maps/SaffronCity/scripts.pory"

# 67 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Lass::
# 68 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 69 "data/maps/SaffronCity/scripts.pory"
	end
# 70 "data/maps/SaffronCity/scripts.pory"

# 71 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Boy::
# 72 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 73 "data/maps/SaffronCity/scripts.pory"
	end
# 74 "data/maps/SaffronCity/scripts.pory"

# 75 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 76 "data/maps/SaffronCity/scripts.pory"
	lock
# 77 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 78 "data/maps/SaffronCity/scripts.pory"
	waitse
# 79 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 80 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 81 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 82 "data/maps/SaffronCity/scripts.pory"
	release
# 83 "data/maps/SaffronCity/scripts.pory"
	end
# 84 "data/maps/SaffronCity/scripts.pory"

# 85 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Man::
# 86 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 87 "data/maps/SaffronCity/scripts.pory"
	end
# 88 "data/maps/SaffronCity/scripts.pory"

# 89 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_CitySign::
# 90 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 91 "data/maps/SaffronCity/scripts.pory"
	end
# 92 "data/maps/SaffronCity/scripts.pory"

# 93 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 94 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 95 "data/maps/SaffronCity/scripts.pory"
	end
# 96 "data/maps/SaffronCity/scripts.pory"

# 97 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_GymSign::
# 98 "data/maps/SaffronCity/scripts.pory"
	lockall
# 99 "data/maps/SaffronCity/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 100 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 101 "data/maps/SaffronCity/scripts.pory"
	releaseall
# 102 "data/maps/SaffronCity/scripts.pory"
	end
# 103 "data/maps/SaffronCity/scripts.pory"

# 104 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 105 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 106 "data/maps/SaffronCity/scripts.pory"
	end
# 107 "data/maps/SaffronCity/scripts.pory"

# 108 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 109 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 110 "data/maps/SaffronCity/scripts.pory"
	end
# 111 "data/maps/SaffronCity/scripts.pory"

# 112 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 113 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 114 "data/maps/SaffronCity/scripts.pory"
	end
# 115 "data/maps/SaffronCity/scripts.pory"

# 116 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 117 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 118 "data/maps/SaffronCity/scripts.pory"
	end
# 119 "data/maps/SaffronCity/scripts.pory"

# 120 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 121 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 122 "data/maps/SaffronCity/scripts.pory"
	end
# 123 "data/maps/SaffronCity/scripts.pory"

# 124 "data/maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 125 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 126 "data/maps/SaffronCity/scripts.pory"
	end

tmsign1::
# 131 "data/maps/SaffronCity/scripts.pory"
	lockall
# 132 "data/maps/SaffronCity/scripts.pory"
	msgbox tmsign1_Text_0
# 133 "data/maps/SaffronCity/scripts.pory"
	msgbox tmsign1_Text_1
# 134 "data/maps/SaffronCity/scripts.pory"
	closemessage
# 135 "data/maps/SaffronCity/scripts.pory"
	releaseall
	end


tmsign1_Text_0:
# 132 "data/maps/SaffronCity/scripts.pory"
	.string "Saffron City TM SHOP!$"

tmsign1_Text_1:
# 133 "data/maps/SaffronCity/scripts.pory"
	.string "All the offensive TM's you need!$"
