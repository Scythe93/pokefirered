# 1 "data/maps/PewterCity_House1/scripts.pory"
.set LOCALID_NIDORAN, 3
# 2 "data/maps/PewterCity_House1/scripts.pory"

# 3 "data/maps/PewterCity_House1/scripts.pory"
PewterCity_House1_MapScripts::
# 4 "data/maps/PewterCity_House1/scripts.pory"
	.byte 0
# 5 "data/maps/PewterCity_House1/scripts.pory"

# 6 "data/maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_BaldingMan::
# 7 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
# 8 "data/maps/PewterCity_House1/scripts.pory"
	end
# 9 "data/maps/PewterCity_House1/scripts.pory"

# 10 "data/maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_LittleBoy::
# 11 "data/maps/PewterCity_House1/scripts.pory"
	lock
# 12 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 13 "data/maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 14 "data/maps/PewterCity_House1/scripts.pory"
	release
# 15 "data/maps/PewterCity_House1/scripts.pory"
	end
# 16 "data/maps/PewterCity_House1/scripts.pory"

# 17 "data/maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_Nidoran::
# 18 "data/maps/PewterCity_House1/scripts.pory"
	lock
# 19 "data/maps/PewterCity_House1/scripts.pory"
	faceplayer
# 20 "data/maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 21 "data/maps/PewterCity_House1/scripts.pory"
	applymovement LOCALID_NIDORAN, Common_Movement_FaceOriginalDirection
# 22 "data/maps/PewterCity_House1/scripts.pory"
	waitmovement 0
# 23 "data/maps/PewterCity_House1/scripts.pory"
	release
# 24 "data/maps/PewterCity_House1/scripts.pory"
	end
# 25 "data/maps/PewterCity_House1/scripts.pory"

# 26 "data/maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_DoNidoranCry::
# 27 "data/maps/PewterCity_House1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 28 "data/maps/PewterCity_House1/scripts.pory"
	waitse
# 29 "data/maps/PewterCity_House1/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 30 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 31 "data/maps/PewterCity_House1/scripts.pory"
	waitmoncry
# 32 "data/maps/PewterCity_House1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 33 "data/maps/PewterCity_House1/scripts.pory"
	return

DeepSeaFisherman::
# 37 "data/maps/PewterCity_House1/scripts.pory"
	lockall
# 38 "data/maps/PewterCity_House1/scripts.pory"
	msgbox DeepSeaFisherman_Text_0
# 39 "data/maps/PewterCity_House1/scripts.pory"
	releaseall
	return


DeepSeaFisherman2::
# 43 "data/maps/PewterCity_House1/scripts.pory"
	lockall
# 44 "data/maps/PewterCity_House1/scripts.pory"
	msgbox DeepSeaFisherman2_Text_0
# 45 "data/maps/PewterCity_House1/scripts.pory"
	releaseall
	return


DeepSeaFisherman_Text_0:
# 38 "data/maps/PewterCity_House1/scripts.pory"
	.string "These are the deepest seas in the\n"
	.string "region.\l"
	.string "Never know what you might catch$"

DeepSeaFisherman2_Text_0:
# 44 "data/maps/PewterCity_House1/scripts.pory"
	.string "It's good to try using different rods!\n"
	.string "You might find something new on each\l"
	.string "one!$"
