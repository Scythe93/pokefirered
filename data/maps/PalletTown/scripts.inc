# 3 "data/maps/PalletTown/scripts.pory"

# 4 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_SIGN_LADY, 1
# 5 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_PROF_OAK,  3
# 6 "data/maps/PalletTown/scripts.pory"

# 7 "data/maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 8 "data/maps/PalletTown/scripts.pory"

# 9 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 10 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 11 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 12 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_StartRivalBattle
# 13 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 14 "data/maps/PalletTown/scripts.pory"

# 15 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 16 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 17 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 18 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 19 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 20 "data/maps/PalletTown/scripts.pory"
	end
# 21 "data/maps/PalletTown/scripts.pory"

# 22 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 23 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 24 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 25 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 26 "data/maps/PalletTown/scripts.pory"
	return
# 27 "data/maps/PalletTown/scripts.pory"

# 28 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 29 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 30 "data/maps/PalletTown/scripts.pory"
	return
# 31 "data/maps/PalletTown/scripts.pory"

# 32 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 33 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 34 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 5, 15
# 35 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/PalletTown/scripts.pory"
	return
# 37 "data/maps/PalletTown/scripts.pory"

# 38 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 39 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 12, 2
# 40 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 42 "data/maps/PalletTown/scripts.pory"
	return
# 43 "data/maps/PalletTown/scripts.pory"

# 44 "data/maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 45 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 46 "data/maps/PalletTown/scripts.pory"
	.2byte 0
# 47 "data/maps/PalletTown/scripts.pory"

# 48 "data/maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 49 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 50 "data/maps/PalletTown/scripts.pory"
	lockall
# 51 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 14, 14
# 53 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 54 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 55 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 56 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 58 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 59 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 60 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 61 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 62 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 63 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 64 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 65 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 66 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 67 "data/maps/PalletTown/scripts.pory"
	closemessage
# 68 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 69 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 70 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 71 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 73 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 74 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 75 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 76 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 78 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 79 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 80 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 81 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 82 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 83 "data/maps/PalletTown/scripts.pory"
	waitstate
# 84 "data/maps/PalletTown/scripts.pory"
	releaseall
# 85 "data/maps/PalletTown/scripts.pory"
	end
# 86 "data/maps/PalletTown/scripts.pory"

# 87 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 88 "data/maps/PalletTown/scripts.pory"
	closemessage
# 89 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakExit
# 90 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 92 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 93 "data/maps/PalletTown/scripts.pory"
	releaseall
# 94 "data/maps/PalletTown/scripts.pory"
	end
# 95 "data/maps/PalletTown/scripts.pory"

# 96 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 97 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 98 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 99 "data/maps/PalletTown/scripts.pory"
	end
# 100 "data/maps/PalletTown/scripts.pory"

# 101 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 102 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 103 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 104 "data/maps/PalletTown/scripts.pory"
	end
# 105 "data/maps/PalletTown/scripts.pory"

# 106 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 107 "data/maps/PalletTown/scripts.pory"
	walk_left
# 108 "data/maps/PalletTown/scripts.pory"
	walk_left
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_up
# 111 "data/maps/PalletTown/scripts.pory"
	walk_up
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_up
# 115 "data/maps/PalletTown/scripts.pory"
	walk_left
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_left
# 120 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 121 "data/maps/PalletTown/scripts.pory"
	step_end
# 122 "data/maps/PalletTown/scripts.pory"

# 123 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 124 "data/maps/PalletTown/scripts.pory"
	walk_right
# 125 "data/maps/PalletTown/scripts.pory"
	walk_right
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_down
# 130 "data/maps/PalletTown/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	step_end
# 138 "data/maps/PalletTown/scripts.pory"

# 139 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 140 "data/maps/PalletTown/scripts.pory"
	walk_right
# 141 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_down
# 146 "data/maps/PalletTown/scripts.pory"
	walk_down
# 147 "data/maps/PalletTown/scripts.pory"
	walk_down
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_right
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/PalletTown/scripts.pory"
	step_end
# 157 "data/maps/PalletTown/scripts.pory"

# 158 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 159 "data/maps/PalletTown/scripts.pory"
	walk_down
# 160 "data/maps/PalletTown/scripts.pory"
	walk_right
# 161 "data/maps/PalletTown/scripts.pory"
	walk_right
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_down
# 166 "data/maps/PalletTown/scripts.pory"
	walk_down
# 167 "data/maps/PalletTown/scripts.pory"
	walk_down
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_right
# 171 "data/maps/PalletTown/scripts.pory"
	walk_right
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	step_end
# 175 "data/maps/PalletTown/scripts.pory"

# 176 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 177 "data/maps/PalletTown/scripts.pory"
	lockall
# 178 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 179 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 180 "data/maps/PalletTown/scripts.pory"
	end
# 181 "data/maps/PalletTown/scripts.pory"

# 182 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 183 "data/maps/PalletTown/scripts.pory"
	lockall
# 184 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 185 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 186 "data/maps/PalletTown/scripts.pory"
	end
# 187 "data/maps/PalletTown/scripts.pory"

# 188 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 189 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 190 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 191 "data/maps/PalletTown/scripts.pory"
	delay 30
# 192 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 193 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 194 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 195 "data/maps/PalletTown/scripts.pory"
	delay 85
# 196 "data/maps/PalletTown/scripts.pory"
	closemessage
# 197 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 198 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 200 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 201 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/PalletTown/scripts.pory"
	delay 30
# 203 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 204 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 205 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 206 "data/maps/PalletTown/scripts.pory"
	delay 30
# 207 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 208 "data/maps/PalletTown/scripts.pory"
	closemessage
# 209 "data/maps/PalletTown/scripts.pory"
	delay 30
# 210 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 211 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 212 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 213 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 214 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 215 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 216 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 218 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 219 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 220 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 221 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 222 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 223 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 224 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 225 "data/maps/PalletTown/scripts.pory"
	waitstate
# 226 "data/maps/PalletTown/scripts.pory"
	releaseall
# 227 "data/maps/PalletTown/scripts.pory"
	end
# 228 "data/maps/PalletTown/scripts.pory"

# 229 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 230 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 231 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/PalletTown/scripts.pory"
	return
# 233 "data/maps/PalletTown/scripts.pory"

# 234 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 235 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
# 236 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/PalletTown/scripts.pory"
	return
# 238 "data/maps/PalletTown/scripts.pory"

# 239 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 240 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 241 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 242 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/PalletTown/scripts.pory"
	return
# 244 "data/maps/PalletTown/scripts.pory"

# 245 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 246 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 247 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 248 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/PalletTown/scripts.pory"
	return
# 250 "data/maps/PalletTown/scripts.pory"

# 251 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 252 "data/maps/PalletTown/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown/scripts.pory"
	walk_right
# 255 "data/maps/PalletTown/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown/scripts.pory"
	walk_right
# 258 "data/maps/PalletTown/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown/scripts.pory"
	step_end
# 261 "data/maps/PalletTown/scripts.pory"

# 262 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 263 "data/maps/PalletTown/scripts.pory"
	walk_right
# 264 "data/maps/PalletTown/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown/scripts.pory"
	walk_right
# 267 "data/maps/PalletTown/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown/scripts.pory"
	walk_right
# 270 "data/maps/PalletTown/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown/scripts.pory"
	step_end
# 273 "data/maps/PalletTown/scripts.pory"

# 274 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 275 "data/maps/PalletTown/scripts.pory"
	walk_left
# 276 "data/maps/PalletTown/scripts.pory"
	walk_down
# 277 "data/maps/PalletTown/scripts.pory"
	walk_down
# 278 "data/maps/PalletTown/scripts.pory"
	walk_down
# 279 "data/maps/PalletTown/scripts.pory"
	walk_down
# 280 "data/maps/PalletTown/scripts.pory"
	walk_down
# 281 "data/maps/PalletTown/scripts.pory"
	walk_down
# 282 "data/maps/PalletTown/scripts.pory"
	walk_down
# 283 "data/maps/PalletTown/scripts.pory"
	walk_down
# 284 "data/maps/PalletTown/scripts.pory"
	walk_down
# 285 "data/maps/PalletTown/scripts.pory"
	walk_down
# 286 "data/maps/PalletTown/scripts.pory"
	walk_down
# 287 "data/maps/PalletTown/scripts.pory"
	walk_right
# 288 "data/maps/PalletTown/scripts.pory"
	walk_right
# 289 "data/maps/PalletTown/scripts.pory"
	walk_right
# 290 "data/maps/PalletTown/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown/scripts.pory"
	.endm
# 292 "data/maps/PalletTown/scripts.pory"

# 293 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 294 "data/maps/PalletTown/scripts.pory"
	walk_down
# 295 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 296 "data/maps/PalletTown/scripts.pory"
	walk_right
# 297 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/PalletTown/scripts.pory"
	step_end
# 299 "data/maps/PalletTown/scripts.pory"

# 300 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 301 "data/maps/PalletTown/scripts.pory"
	walk_down
# 302 "data/maps/PalletTown/scripts.pory"
	walk_left
# 303 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 304 "data/maps/PalletTown/scripts.pory"
	walk_right
# 305 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/PalletTown/scripts.pory"
	step_end
# 307 "data/maps/PalletTown/scripts.pory"

# 308 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 309 "data/maps/PalletTown/scripts.pory"
	walk_up
# 310 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 311 "data/maps/PalletTown/scripts.pory"
	step_end
# 312 "data/maps/PalletTown/scripts.pory"

# 313 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 314 "data/maps/PalletTown/scripts.pory"
	walk_down
# 315 "data/maps/PalletTown/scripts.pory"
	walk_down
# 316 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 317 "data/maps/PalletTown/scripts.pory"
	step_end
# 318 "data/maps/PalletTown/scripts.pory"

# 319 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 320 "data/maps/PalletTown/scripts.pory"
	walk_down
# 321 "data/maps/PalletTown/scripts.pory"
	walk_down
# 322 "data/maps/PalletTown/scripts.pory"
	walk_left
# 323 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 324 "data/maps/PalletTown/scripts.pory"
	step_end
# 325 "data/maps/PalletTown/scripts.pory"

# 326 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 327 "data/maps/PalletTown/scripts.pory"
	walk_right
# 328 "data/maps/PalletTown/scripts.pory"
	walk_up
# 329 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 330 "data/maps/PalletTown/scripts.pory"
	step_end
# 331 "data/maps/PalletTown/scripts.pory"

# 332 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 333 "data/maps/PalletTown/scripts.pory"
	lock
# 334 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 335 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 336 "data/maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 337 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 338 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 339 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 340 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 341 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 342 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_ExclamationMark
# 343 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 344 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_Delay48
# 345 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 347 "data/maps/PalletTown/scripts.pory"
	closemessage
# 348 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 349 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 350 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_SIGN_LADY
# 351 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 352 "data/maps/PalletTown/scripts.pory"
	release
# 353 "data/maps/PalletTown/scripts.pory"
	end
# 354 "data/maps/PalletTown/scripts.pory"

# 355 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 356 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 357 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/PalletTown/scripts.pory"
	return
# 359 "data/maps/PalletTown/scripts.pory"

# 360 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 361 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 362 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/PalletTown/scripts.pory"
	return
# 364 "data/maps/PalletTown/scripts.pory"

# 365 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 366 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 367 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 368 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 369 "data/maps/PalletTown/scripts.pory"
	release
# 370 "data/maps/PalletTown/scripts.pory"
	end
# 371 "data/maps/PalletTown/scripts.pory"

# 372 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 373 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 374 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 375 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 376 "data/maps/PalletTown/scripts.pory"
	release
# 377 "data/maps/PalletTown/scripts.pory"
	end
# 378 "data/maps/PalletTown/scripts.pory"

# 379 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 380 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 381 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 383 "data/maps/PalletTown/scripts.pory"
	release
# 384 "data/maps/PalletTown/scripts.pory"
	end
# 385 "data/maps/PalletTown/scripts.pory"

# 386 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 387 "data/maps/PalletTown/scripts.pory"
	walk_right
# 388 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 389 "data/maps/PalletTown/scripts.pory"
	step_end
# 390 "data/maps/PalletTown/scripts.pory"

# 391 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 392 "data/maps/PalletTown/scripts.pory"
	walk_left
# 393 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 394 "data/maps/PalletTown/scripts.pory"
	step_end
# 395 "data/maps/PalletTown/scripts.pory"

# 396 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 397 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 398 "data/maps/PalletTown/scripts.pory"
	end
# 399 "data/maps/PalletTown/scripts.pory"

# 400 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 401 "data/maps/PalletTown/scripts.pory"
	lockall
# 402 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 403 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 404 "data/maps/PalletTown/scripts.pory"
	releaseall
# 405 "data/maps/PalletTown/scripts.pory"
	end
# 406 "data/maps/PalletTown/scripts.pory"

# 407 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 408 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 409 "data/maps/PalletTown/scripts.pory"
	end
# 410 "data/maps/PalletTown/scripts.pory"

# 411 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 412 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 413 "data/maps/PalletTown/scripts.pory"
	end
# 414 "data/maps/PalletTown/scripts.pory"

# 415 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 416 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 417 "data/maps/PalletTown/scripts.pory"
	end
# 418 "data/maps/PalletTown/scripts.pory"

# 419 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 420 "data/maps/PalletTown/scripts.pory"
	lockall
# 421 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 422 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 423 "data/maps/PalletTown/scripts.pory"
	releaseall
# 424 "data/maps/PalletTown/scripts.pory"
	end
# 425 "data/maps/PalletTown/scripts.pory"

# 426 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 427 "data/maps/PalletTown/scripts.pory"
	lockall
# 428 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 429 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 430 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 432 "data/maps/PalletTown/scripts.pory"
	releaseall
# 433 "data/maps/PalletTown/scripts.pory"
	end
# 434 "data/maps/PalletTown/scripts.pory"

# 435 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 436 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 437 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 438 "data/maps/PalletTown/scripts.pory"
	closemessage
# 439 "data/maps/PalletTown/scripts.pory"
	delay 20
# 440 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 441 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 442 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 443 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 444 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 445 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 446 "data/maps/PalletTown/scripts.pory"
	signmsg
# 447 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 448 "data/maps/PalletTown/scripts.pory"
	normalmsg
# 449 "data/maps/PalletTown/scripts.pory"
	return
# 450 "data/maps/PalletTown/scripts.pory"

# 451 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 452 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 453 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 454 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 455 "data/maps/PalletTown/scripts.pory"
	release
# 456 "data/maps/PalletTown/scripts.pory"
	end

PalletTown_StartRivalBattle::
# 463 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_0x305, PalletTown_StartRivalBattle_1
# 467 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_0x304
	return

PalletTown_StartRivalBattle_1:
# 464 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_0x304
	return


ConvoRoadBlock1::
# 473 "data/maps/PalletTown/scripts.pory"
	lockall
# 474 "data/maps/PalletTown/scripts.pory"
	msgbox ConvoRoadBlock1_Text_0
# 475 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


MASTERBALLS1::
# 483 "data/maps/PalletTown/scripts.pory"
	giveitem ITEM_MASTER_BALL, 30
# 484 "data/maps/PalletTown/scripts.pory"
	msgbox MASTERBALLS1_Text_0
# 485 "data/maps/PalletTown/scripts.pory"
	closemessage
# 486 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


RARECANDIES::
# 492 "data/maps/PalletTown/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 493 "data/maps/PalletTown/scripts.pory"
	msgbox RARECANDIES_Text_0
# 494 "data/maps/PalletTown/scripts.pory"
	closemessage
# 495 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


sunstones::
# 500 "data/maps/PalletTown/scripts.pory"
	giveitem ITEM_SUN_STONE, 30
# 501 "data/maps/PalletTown/scripts.pory"
	giveitem ITEM_MOON_STONE, 30
# 502 "data/maps/PalletTown/scripts.pory"
	closemessage
# 503 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


ConvoRoadBlock1_Text_0:
# 474 "data/maps/PalletTown/scripts.pory"
	.string "Beat it kid! we're having an imporant\n"
	.string "conversation here!\l"
	.string "Why don't you go down to the Lab\l"
	.string "and see what Oak is up to?$"

MASTERBALLS1_Text_0:
# 484 "data/maps/PalletTown/scripts.pory"
	.string "masterballs$"

RARECANDIES_Text_0:
# 493 "data/maps/PalletTown/scripts.pory"
	.string "rarecandies$"
