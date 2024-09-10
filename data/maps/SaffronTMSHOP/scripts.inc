SaffronTMSHOP_MapScripts::
	.byte 0



SaffronCity_TM_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart SaffronCity_TM_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
SaffronCity_TM_Items::
	.2byte ITEM_TM24_THUNDERBOLT
	.2byte ITEM_TM07_HAIL
	.2byte ITEM_TM06_TOXIC
	.2byte ITEM_TM13_ICE_BEAM
	.2byte ITEM_TM23_IRON_TAIL
	.2byte ITEM_TM28_DIG
	.2byte ITEM_TM19_GIGA_DRAIN
	.2byte ITEM_TM35_FLAMETHROWER
	.2byte ITEM_TM40_AERIAL_ACE
	.2byte ITEM_TM47_STEEL_WING
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM36_SLUDGE_BOMB
	.2byte ITEM_TM03_WATER_PULSE
	.2byte ITEM_TM25_THUNDER
	.2byte ITEM_TM29_PSYCHIC
	.2byte ITEM_TM02_DRAGON_CLAW
	.2byte ITEM_TM01_FOCUS_PUNCH
	.2byte ITEM_TM09_BULLET_SEED
	.2byte ITEM_TM14_BLIZZARD
	.2byte ITEM_TM26_EARTHQUAKE
	.2byte ITEM_NONE

	release
	end
