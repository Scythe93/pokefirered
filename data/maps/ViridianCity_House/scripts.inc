ViridianCity_House_MapScripts::
	.byte 0


CelebiEncounter1::
# 6 "data/maps/ViridianCity_House/scripts.pory"
	lockall
# 7 "data/maps/ViridianCity_House/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 8 "data/maps/ViridianCity_House/scripts.pory"
	waitmoncry
# 9 "data/maps/ViridianCity_House/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50, ITEM_NONE
# 10 "data/maps/ViridianCity_House/scripts.pory"
	dowildbattle
# 11 "data/maps/ViridianCity_House/scripts.pory"
	removeobject 2
# 12 "data/maps/ViridianCity_House/scripts.pory"
	setflag FLAG_0x0C3
# 13 "data/maps/ViridianCity_House/scripts.pory"
	releaseall
	end

