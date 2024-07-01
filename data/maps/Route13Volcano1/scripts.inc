Route13Volcano1_MapScripts::
	.byte 0


HotSpringGirl::
# 6 "data/maps/Route13Volcano1/scripts.pory"
	lockall
# 7 "data/maps/Route13Volcano1/scripts.pory"
	msgbox HotSpringGirl_Text_0
# 8 "data/maps/Route13Volcano1/scripts.pory"
	releaseall
	return


VolcanoSign::
# 12 "data/maps/Route13Volcano1/scripts.pory"
	lockall
# 13 "data/maps/Route13Volcano1/scripts.pory"
	msgbox VolcanoSign_Text_0
# 14 "data/maps/Route13Volcano1/scripts.pory"
	releaseall
	return


TRAINER_Volcano_Lass::
# 18 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_Volcano_Lass1, vLass_Intro, vLass_Outro
# 19 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vLass, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


TRAINER_Volcano_Youngster::
# 38 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_Volcano_Young1, TRAINER_Volcano_Youngster_Text_0, vYoung_Outro
# 39 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vYoung, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


TRAINER_Volcano_Trainer1::
# 53 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_COOLVITO, vTrainer1_Intro, vTrainer1_Outro
# 54 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vTrainer1, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


TRAINER_Volcano_BallTony1::
# 72 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_BALLTONY, vTony_Intro, vTony_Outro
# 73 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vTony, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


Volcano_Aanah::
# 91 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_COOLAANAH, vAanah_Intro, vAanah_Outro
# 92 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vAanah, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


Volcano_Skidmore::
# 110 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_SKIDMORE, vSkid_Intro, vSkid_Outro
# 111 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vSkid, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


Volcano_hiker1::
# 130 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_HIKER1, vhike1_Intro, vhike1_Outro
# 131 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vhike1, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


volcanoultraball::
# 149 "data/maps/Route13Volcano1/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 150 "data/maps/Route13Volcano1/scripts.pory"
	removeobject 11
# 151 "data/maps/Route13Volcano1/scripts.pory"
	releaseall
	return


volcanofirestone1::
# 155 "data/maps/Route13Volcano1/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 156 "data/maps/Route13Volcano1/scripts.pory"
	removeobject 8
# 157 "data/maps/Route13Volcano1/scripts.pory"
	releaseall
	return


volcanomoonstone1::
# 161 "data/maps/Route13Volcano1/scripts.pory"
	giveitem ITEM_MOON_STONE
# 162 "data/maps/Route13Volcano1/scripts.pory"
	removeobject 12
# 163 "data/maps/Route13Volcano1/scripts.pory"
	releaseall
	return


Volcano_hiker2::
# 168 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_HIKER2, vhike2_Intro, vhike2_Outro
# 169 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vhike1, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


Volcano_hiker3::
# 187 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_HIKER3, vhike3_Intro, vhike3_Outro
# 188 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vhike1, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


Volcano_hiker4::
# 206 "data/maps/Route13Volcano1/scripts.pory"
	trainerbattle_single TRAINER_VOLCANO_HIKER4, vhike4_Intro, vhike4_Outro
# 207 "data/maps/Route13Volcano1/scripts.pory"
	msgbox PostBattle_vhike4, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route13Volcano1/scripts.pory"
	waitmessage
	end


HotSpringGirl_Text_0:
# 7 "data/maps/Route13Volcano1/scripts.pory"
	.string "This is a Natural hot spring produced\n"
	.string "from the heat of Mt. Coder.\l"
	.string "Taking a dip will heal your Pokemon!$"

VolcanoSign_Text_0:
# 13 "data/maps/Route13Volcano1/scripts.pory"
	.string "Mt Coder.\n"
	.string "ACTIVE VOLCANO.$"

TRAINER_Volcano_Youngster_Text_0:
# 38 "data/maps/Route13Volcano1/scripts.pory"
	.string "I'm not supposed to be out here!$"

vLass_Intro::
# 24 "data/maps/Route13Volcano1/scripts.pory"
	.string "That's not snow, it's ashes from the Volcano!$"

vLass_Outro::
# 28 "data/maps/Route13Volcano1/scripts.pory"
	.string "Best of luck!$"

PostBattle_vLass::
# 32 "data/maps/Route13Volcano1/scripts.pory"
	.string "You got this!$"

vYoung_Outro::
# 44 "data/maps/Route13Volcano1/scripts.pory"
	.string "Mom doesn't want me near the Volcano!$"

PostBattle_vYoung::
# 48 "data/maps/Route13Volcano1/scripts.pory"
	.string "Don't tell my mom that you saw me!$"

vTrainer1_Outro::
# 59 "data/maps/Route13Volcano1/scripts.pory"
	.string "Don't get burned.$"

vTrainer1_Intro::
# 63 "data/maps/Route13Volcano1/scripts.pory"
	.string "You feel the heat from Mt. Coder?$"

PostBattle_vTrainer1::
# 67 "data/maps/Route13Volcano1/scripts.pory"
	.string "Don't get burned.$"

vTony_Outro::
# 78 "data/maps/Route13Volcano1/scripts.pory"
	.string "I think you can make it.$"

vTony_Intro::
# 82 "data/maps/Route13Volcano1/scripts.pory"
	.string "Are you climbing to the summit?$"

PostBattle_vTony::
# 86 "data/maps/Route13Volcano1/scripts.pory"
	.string "Don't get burned.$"

vAanah_Outro::
# 97 "data/maps/Route13Volcano1/scripts.pory"
	.string "My babies!!!!$"

vAanah_Intro::
# 101 "data/maps/Route13Volcano1/scripts.pory"
	.string "I gotta pee so bad$"

PostBattle_vAanah::
# 105 "data/maps/Route13Volcano1/scripts.pory"
	.string "You're lucky I don't shoot you$"

vSkid_Outro::
# 116 "data/maps/Route13Volcano1/scripts.pory"
	.string "Oh SHIT that wasn't coke!$"

vSkid_Intro::
# 120 "data/maps/Route13Volcano1/scripts.pory"
	.string "Can I get a bump?$"

PostBattle_vSkid::
# 124 "data/maps/Route13Volcano1/scripts.pory"
	.string "..lost in a K hole..$"

vhike1_Outro::
# 136 "data/maps/Route13Volcano1/scripts.pory"
	.string "Maybe I should train harder.$"

vhike1_Intro::
# 140 "data/maps/Route13Volcano1/scripts.pory"
	.string "I've never hiked a Volcano before!$"

PostBattle_vhike1::
# 144 "data/maps/Route13Volcano1/scripts.pory"
	.string "Maybe I should train harder..$"

vhike2_Outro::
# 174 "data/maps/Route13Volcano1/scripts.pory"
	.string "I haven't found anything yet.$"

vhike2_Intro::
# 178 "data/maps/Route13Volcano1/scripts.pory"
	.string "I heard there were rare pokemon here$"

PostBattle_vhike2::
# 182 "data/maps/Route13Volcano1/scripts.pory"
	.string "Maybe I should train harder..$"

vhike3_Outro::
# 193 "data/maps/Route13Volcano1/scripts.pory"
	.string "It wasn't easy.$"

vhike3_Intro::
# 197 "data/maps/Route13Volcano1/scripts.pory"
	.string "I evolved my pokemon!$"

PostBattle_vhike3::
# 201 "data/maps/Route13Volcano1/scripts.pory"
	.string "Maybe I should train harder..$"

vhike4_Outro::
# 212 "data/maps/Route13Volcano1/scripts.pory"
	.string "Keep your eyes peeled$"

vhike4_Intro::
# 216 "data/maps/Route13Volcano1/scripts.pory"
	.string "Watch out for dangerous pokemon$"

PostBattle_vhike4::
# 220 "data/maps/Route13Volcano1/scripts.pory"
	.string "Maybe I should train harder..$"
