# 1 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
.equ LOCALID_MOM, 1
# 2 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 3 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_0x305, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 19 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 21 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 22 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 24 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 27 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 35 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 36 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 37 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 44 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 45 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 52 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 53 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 55 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 56 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return

StartingFirstRival1::
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_0x304
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end

