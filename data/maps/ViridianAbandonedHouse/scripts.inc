ViridianAbandonedHouse_MapScripts::
	.byte 0


TriggerTest1::
# 9 "data/maps/ViridianAbandonedHouse/scripts.pory"
	lockall
# 10 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox TriggerTest1_Text_0
# 11 "data/maps/ViridianAbandonedHouse/scripts.pory"
	waitmessage
# 12 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 13 "data/maps/ViridianAbandonedHouse/scripts.pory"
	applymovement 2, trigger1
# 14 "data/maps/ViridianAbandonedHouse/scripts.pory"
	waitmovement 2
# 15 "data/maps/ViridianAbandonedHouse/scripts.pory"
	msgbox TriggerTest1_Text_1
# 16 "data/maps/ViridianAbandonedHouse/scripts.pory"
	closemessage
# 17 "data/maps/ViridianAbandonedHouse/scripts.pory"
	setvar VAR_0x8014, 1
# 18 "data/maps/ViridianAbandonedHouse/scripts.pory"
	removeobject 2
	return


# 22 "data/maps/ViridianAbandonedHouse/scripts.pory"
trigger1:
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_right
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_right
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_right
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_right
# 23 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_right
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_up
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_up
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_up
# 24 "data/maps/ViridianAbandonedHouse/scripts.pory"
	walk_up
	step_end

TriggerTest1_Text_0:
# 10 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Hey!$"

TriggerTest1_Text_1:
# 15 "data/maps/ViridianAbandonedHouse/scripts.pory"
	.string "Skidmore smells like moldy feet!$"
