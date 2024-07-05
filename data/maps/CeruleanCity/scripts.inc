# 1 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_POLICEMAN, 1
# 2 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_GRUNT,     2
# 3 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_SLOWBRO,   5
# 4 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_LASS,      6
# 5 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_RIVAL,     8
# 6 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_WOMAN,     11
# 7 "data/maps/CeruleanCity/scripts.pory"

# 8 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_MapScripts::
# 9 "data/maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 10 "data/maps/CeruleanCity/scripts.pory"
	.byte 0
# 11 "data/maps/CeruleanCity/scripts.pory"

# 12 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_OnTransition::
# 13 "data/maps/CeruleanCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 14 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_BlockExits
# 15 "data/maps/CeruleanCity/scripts.pory"
	end
# 16 "data/maps/CeruleanCity/scripts.pory"

# 17 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 18 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_POLICEMAN, 30, 12
# 19 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_SLOWBRO, 26, 31
# 20 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_LASS, 27, 31
# 21 "data/maps/CeruleanCity/scripts.pory"
	return
# 22 "data/maps/CeruleanCity/scripts.pory"

# 23 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 24 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 25 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 26 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 27 "data/maps/CeruleanCity/scripts.pory"
	end
# 28 "data/maps/CeruleanCity/scripts.pory"

# 29 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 30 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 31 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 23, 0
# 33 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 34 "data/maps/CeruleanCity/scripts.pory"
	end
# 35 "data/maps/CeruleanCity/scripts.pory"

# 36 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 37 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 38 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 39 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 24, 0
# 40 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 41 "data/maps/CeruleanCity/scripts.pory"
	end
# 42 "data/maps/CeruleanCity/scripts.pory"

# 43 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Rival::
# 44 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 45 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 46 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 47 "data/maps/CeruleanCity/scripts.pory"
	addobject LOCALID_RIVAL
# 48 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalEnter
# 49 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 51 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 52 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 53 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 54 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 55 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 56 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 57 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 58 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 59 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 60 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 61 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 62 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 63 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 64 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 65 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 66 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 67 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 68 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalExit
# 69 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 71 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_RIVAL
# 72 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 73 "data/maps/CeruleanCity/scripts.pory"
	end
# 74 "data/maps/CeruleanCity/scripts.pory"

# 75 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 76 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 77 "data/maps/CeruleanCity/scripts.pory"
	return
# 78 "data/maps/CeruleanCity/scripts.pory"

# 79 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 80 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 81 "data/maps/CeruleanCity/scripts.pory"
	return
# 82 "data/maps/CeruleanCity/scripts.pory"

# 83 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 84 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 85 "data/maps/CeruleanCity/scripts.pory"
	return
# 86 "data/maps/CeruleanCity/scripts.pory"

# 87 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 88 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 89 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalStartExit
# 90 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/CeruleanCity/scripts.pory"
	return
# 92 "data/maps/CeruleanCity/scripts.pory"

# 93 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 94 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 95 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 96 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/CeruleanCity/scripts.pory"
	return
# 98 "data/maps/CeruleanCity/scripts.pory"

# 99 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 100 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 101 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 102 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 103 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 104 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 105 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 106 "data/maps/CeruleanCity/scripts.pory"

# 107 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 108 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 109 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 110 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 111 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 112 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 113 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 114 "data/maps/CeruleanCity/scripts.pory"

# 115 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 116 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 117 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 118 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 119 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 120 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 121 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 122 "data/maps/CeruleanCity/scripts.pory"

# 123 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 124 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 125 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 126 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 127 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 128 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 129 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 130 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 131 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 132 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 133 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 134 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 135 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 136 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 137 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 138 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 139 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 140 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 141 "data/maps/CeruleanCity/scripts.pory"

# 142 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 143 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 144 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 145 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 146 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 147 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 148 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 149 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 150 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 151 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 152 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 153 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 154 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 155 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 156 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 157 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 158 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 159 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 160 "data/maps/CeruleanCity/scripts.pory"

# 161 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 162 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 163 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 164 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 165 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 166 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 167 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 168 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 169 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 170 "data/maps/CeruleanCity/scripts.pory"

# 171 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 172 "data/maps/CeruleanCity/scripts.pory"
	lock
# 173 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 174 "data/maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 175 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 176 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 177 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 178 "data/maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 179 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 180 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 181 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 182 "data/maps/CeruleanCity/scripts.pory"
	end
# 183 "data/maps/CeruleanCity/scripts.pory"

# 184 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 185 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 186 "data/maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 187 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 188 "data/maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 189 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 190 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 191 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 192 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 193 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 195 "data/maps/CeruleanCity/scripts.pory"
	release
# 196 "data/maps/CeruleanCity/scripts.pory"
	end
# 197 "data/maps/CeruleanCity/scripts.pory"

# 198 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 199 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 200 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 201 "data/maps/CeruleanCity/scripts.pory"
	release
# 202 "data/maps/CeruleanCity/scripts.pory"
	end
# 203 "data/maps/CeruleanCity/scripts.pory"

# 204 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 205 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 206 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 207 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 210 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 212 "data/maps/CeruleanCity/scripts.pory"
	end
# 213 "data/maps/CeruleanCity/scripts.pory"

# 214 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 215 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 216 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 217 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 218 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 219 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 220 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 222 "data/maps/CeruleanCity/scripts.pory"
	end
# 223 "data/maps/CeruleanCity/scripts.pory"

# 224 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 225 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 226 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 227 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GRUNT
# 228 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 229 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 230 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 231 "data/maps/CeruleanCity/scripts.pory"
	end
# 232 "data/maps/CeruleanCity/scripts.pory"

# 233 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 234 "data/maps/CeruleanCity/scripts.pory"
	lock
# 235 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 236 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 237 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 238 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_POLICEMAN, Common_Movement_FaceOriginalDirection
# 239 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/CeruleanCity/scripts.pory"
	release
# 241 "data/maps/CeruleanCity/scripts.pory"
	end
# 242 "data/maps/CeruleanCity/scripts.pory"

# 243 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 244 "data/maps/CeruleanCity/scripts.pory"
	lock
# 245 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 246 "data/maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 247 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 248 "data/maps/CeruleanCity/scripts.pory"
	release
# 249 "data/maps/CeruleanCity/scripts.pory"
	end
# 250 "data/maps/CeruleanCity/scripts.pory"

# 251 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 252 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 253 "data/maps/CeruleanCity/scripts.pory"
	release
# 254 "data/maps/CeruleanCity/scripts.pory"
	end
# 255 "data/maps/CeruleanCity/scripts.pory"

# 256 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 257 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 258 "data/maps/CeruleanCity/scripts.pory"
	end
# 259 "data/maps/CeruleanCity/scripts.pory"

# 260 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 261 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 262 "data/maps/CeruleanCity/scripts.pory"
	end
# 263 "data/maps/CeruleanCity/scripts.pory"

# 264 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 265 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 266 "data/maps/CeruleanCity/scripts.pory"
	end
# 267 "data/maps/CeruleanCity/scripts.pory"

# 268 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Woman::
# 269 "data/maps/CeruleanCity/scripts.pory"
	lock
# 270 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 271 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 272 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 273 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FaceOriginalDirection
# 274 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/CeruleanCity/scripts.pory"
	release
# 276 "data/maps/CeruleanCity/scripts.pory"
	end
# 277 "data/maps/CeruleanCity/scripts.pory"

# 278 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Lass::
# 279 "data/maps/CeruleanCity/scripts.pory"
	lock
# 280 "data/maps/CeruleanCity/scripts.pory"
	random 3
# 281 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 282 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 283 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 284 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 285 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 286 "data/maps/CeruleanCity/scripts.pory"
	delay 40
# 287 "data/maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 288 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_SLOWBRO, Common_Movement_QuestionMark
# 289 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/CeruleanCity/scripts.pory"
	delay 30
# 291 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 292 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 293 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 294 "data/maps/CeruleanCity/scripts.pory"
	release
# 295 "data/maps/CeruleanCity/scripts.pory"
	end
# 296 "data/maps/CeruleanCity/scripts.pory"

# 297 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 298 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 299 "data/maps/CeruleanCity/scripts.pory"
	return
# 300 "data/maps/CeruleanCity/scripts.pory"

# 301 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 302 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 303 "data/maps/CeruleanCity/scripts.pory"
	return
# 304 "data/maps/CeruleanCity/scripts.pory"

# 305 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 306 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 307 "data/maps/CeruleanCity/scripts.pory"
	return
# 308 "data/maps/CeruleanCity/scripts.pory"

# 309 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 310 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 311 "data/maps/CeruleanCity/scripts.pory"
	return
# 312 "data/maps/CeruleanCity/scripts.pory"

# 313 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 314 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 315 "data/maps/CeruleanCity/scripts.pory"
	return
# 316 "data/maps/CeruleanCity/scripts.pory"

# 317 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 318 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 319 "data/maps/CeruleanCity/scripts.pory"
	return
# 320 "data/maps/CeruleanCity/scripts.pory"

# 321 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 322 "data/maps/CeruleanCity/scripts.pory"
	lock
# 323 "data/maps/CeruleanCity/scripts.pory"
	random 4
# 324 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 325 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 326 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 327 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 328 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 329 "data/maps/CeruleanCity/scripts.pory"
	release
# 330 "data/maps/CeruleanCity/scripts.pory"
	end
# 331 "data/maps/CeruleanCity/scripts.pory"

# 332 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 333 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 334 "data/maps/CeruleanCity/scripts.pory"
	return
# 335 "data/maps/CeruleanCity/scripts.pory"

# 336 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 337 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 338 "data/maps/CeruleanCity/scripts.pory"
	return
# 339 "data/maps/CeruleanCity/scripts.pory"

# 340 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 341 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 342 "data/maps/CeruleanCity/scripts.pory"
	return
# 343 "data/maps/CeruleanCity/scripts.pory"

# 344 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 345 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 346 "data/maps/CeruleanCity/scripts.pory"
	return
# 347 "data/maps/CeruleanCity/scripts.pory"

# 348 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 349 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 350 "data/maps/CeruleanCity/scripts.pory"
	end
# 351 "data/maps/CeruleanCity/scripts.pory"

# 352 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 353 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 354 "data/maps/CeruleanCity/scripts.pory"
	end
# 355 "data/maps/CeruleanCity/scripts.pory"

# 356 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 357 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 358 "data/maps/CeruleanCity/scripts.pory"
	end
# 359 "data/maps/CeruleanCity/scripts.pory"

# 360 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 361 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 362 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 363 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 364 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 365 "data/maps/CeruleanCity/scripts.pory"
	end

RivalBattle3::
# 370 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 371 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_0
# 372 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, MUS_FUCHSIA
# 373 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 374 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 375 "data/maps/CeruleanCity/scripts.pory"
	applymovement 13, rivalright1
# 376 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 13
# 377 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_1
# 378 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 379 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, RivalBattle3_Text_2, RivalBattle3_Text_3, Rival3WalkAway
# 380 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
	return


Rival3WalkAway::
# 385 "data/maps/CeruleanCity/scripts.pory"
	msgbox Rival3WalkAway_Text_0
# 386 "data/maps/CeruleanCity/scripts.pory"
	msgbox Rival3WalkAway_Text_1
# 387 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 388 "data/maps/CeruleanCity/scripts.pory"
	applymovement 13, rivalescape2
# 389 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 13
# 390 "data/maps/CeruleanCity/scripts.pory"
	removeobject 13
# 391 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
# 392 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 393 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
# 394 "data/maps/CeruleanCity/scripts.pory"
	removeobject 13
# 395 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	end


Rival3WalkAwayCenter::
# 399 "data/maps/CeruleanCity/scripts.pory"
	msgbox Rival3WalkAway_Text_0
# 400 "data/maps/CeruleanCity/scripts.pory"
	msgbox Rival3WalkAway_Text_1
# 401 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 402 "data/maps/CeruleanCity/scripts.pory"
	applymovement 13, rivalescape2center
# 403 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 13
# 404 "data/maps/CeruleanCity/scripts.pory"
	removeobject 13
# 405 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
# 406 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 407 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
# 408 "data/maps/CeruleanCity/scripts.pory"
	removeobject 13
# 409 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	end


# 413 "data/maps/CeruleanCity/scripts.pory"
rivalright1:
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 414 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 415 "data/maps/CeruleanCity/scripts.pory"
	face_right
	step_end

# 418 "data/maps/CeruleanCity/scripts.pory"
rivalescape2:
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 419 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 420 "data/maps/CeruleanCity/scripts.pory"
	walk_left
	step_end

fixvartemp::
# 426 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 0
# 427 "data/maps/CeruleanCity/scripts.pory"
	clearflag FLAG_HIDE_CERULEAN_RIVAL
	return


RivalBattle3left::
# 431 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 432 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_0
# 433 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, MUS_FUCHSIA
# 434 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 435 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 436 "data/maps/CeruleanCity/scripts.pory"
	applymovement 13, rivalleft1
# 437 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 13
# 438 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_1
# 439 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 440 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, RivalBattle3_Text_2, RivalBattle3_Text_3, Rival3WalkAway
# 441 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
	return


# 445 "data/maps/CeruleanCity/scripts.pory"
rivalleft1:
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 446 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 447 "data/maps/CeruleanCity/scripts.pory"
	face_left
	step_end

RivalBattle3center::
# 451 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 452 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_0
# 453 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, MUS_FUCHSIA
# 454 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 455 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 456 "data/maps/CeruleanCity/scripts.pory"
	applymovement 13, rivalcenter1
# 457 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 13
# 458 "data/maps/CeruleanCity/scripts.pory"
	msgbox RivalBattle3_Text_1
# 459 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 460 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, RivalBattle3_Text_2, RivalBattle3_Text_3, Rival3WalkAwayCenter
# 461 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_RIVAL
	return


# 465 "data/maps/CeruleanCity/scripts.pory"
rivalcenter1:
# 466 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 466 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 466 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 466 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 466 "data/maps/CeruleanCity/scripts.pory"
	walk_down
	step_end

# 469 "data/maps/CeruleanCity/scripts.pory"
rivalescape2center:
# 470 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 471 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 472 "data/maps/CeruleanCity/scripts.pory"
	walk_left
	step_end

ceruleanmeow::
# 476 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 477 "data/maps/CeruleanCity/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 478 "data/maps/CeruleanCity/scripts.pory"
	msgbox ceruleanmeow_Text_0
# 479 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 480 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	end


RivalBattle3_Text_0:
# 371 "data/maps/CeruleanCity/scripts.pory"
	.string "Yo!$"

RivalBattle3_Text_1:
# 377 "data/maps/CeruleanCity/scripts.pory"
	.string "EW!! I knew I smelled shit! Have you\n"
	.string "caught anything good yet? I've\l"
	.string "been catching all types of rare\l"
	.string "pokemon! There's no way you're\l"
	.string "doing as good as me!$"

RivalBattle3_Text_2:
# 379 "data/maps/CeruleanCity/scripts.pory"
	.string "I'm going to knock YOU out!$"

RivalBattle3_Text_3:
# 379 "data/maps/CeruleanCity/scripts.pory"
	.string "god damnit!!!$"

Rival3WalkAway_Text_0:
# 385 "data/maps/CeruleanCity/scripts.pory"
	.string "To catch them is my real test.. to\n"
	.string "TRAIN them is my cause!$"

Rival3WalkAway_Text_1:
# 386 "data/maps/CeruleanCity/scripts.pory"
	.string "You're dead next time... Smell ya\n"
	.string "later!$"

ceruleanmeow_Text_0:
# 478 "data/maps/CeruleanCity/scripts.pory"
	.string "Meeeeeowth!$"
