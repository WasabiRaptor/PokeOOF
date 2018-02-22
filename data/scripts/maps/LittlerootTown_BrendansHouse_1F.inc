LittlerootTown_BrendansHouse_1F_MapScripts:: @ 81F7755
	map_script 1, LittlerootTown_BrendansHouse_1F_MapScript1_1F7765
	map_script 3, LittlerootTown_BrendansHouse_1F_MapScript1_1F77A4
	map_script 2, LittlerootTown_BrendansHouse_1F_MapScript2_1F77EA
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScript1_1F7765: @ 81F7765
	compare VAR_0x4092, 6
	call_if 0, LittlerootTown_BrendansHouse_1F_EventScript_1F777A
	checkflag FLAG_0x112
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F778D
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F777A:: @ 81F777A
	setmetatile 5, 4, 624, 1
	setmetatile 5, 2, 616, 1
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F778D:: @ 81F778D
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_BrendansHouse_1F_EventScript_1F779A
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F779A:: @ 81F779A
	setmetatile 3, 7, 659, 1
	return

LittlerootTown_BrendansHouse_1F_MapScript1_1F77A4: @ 81F77A4
	compare VAR_0x4092, 3
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F77DE
	compare VAR_0x4092, 5
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F77C6
	compare VAR_0x4092, 6
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F77D2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F77C6:: @ 81F77C6
	setobjectxyperm 1, 8, 4
	setobjectmovementtype 1, 7
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F77D2:: @ 81F77D2
	setobjectxyperm 1, 4, 5
	setobjectmovementtype 1, 7
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F77DE:: @ 81F77DE
	setobjectxyperm 1, 9, 8
	setobjectmovementtype 1, 7
	return

LittlerootTown_BrendansHouse_1F_MapScript2_1F77EA: @ 81F77EA
	map_script_2 VAR_0x4092, 3, LittlerootTown_BrendansHouse_1F_EventScript_1F783C
	map_script_2 VAR_0x4092, 5, LittlerootTown_BrendansHouse_1F_EventScript_1F7814
	map_script_2 VAR_0x4092, 6, LittlerootTown_BrendansHouse_1F_EventScript_1F784D
	map_script_2 VAR_0x4082, 1, LittlerootTown_BrendansHouse_1F_EventScript_1F785E
	map_script_2 VAR_0x4082, 3, LittlerootTown_BrendansHouse_1F_EventScript_292AF2
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_1F7814:: @ 81F7814
	lockall
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F7B67, 4
	closemessage
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_1F783A
	applymovement 1, LittlerootTown_BrendansHouse_1F_Movement_1F783A
	waitmovement 0
	warp LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_1F783A: @ 81F783A
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F783C:: @ 81F783C
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_292704
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F784D:: @ 81F784D
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_29286D
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F785E:: @ 81F785E
	lockall
	playse SE_PIN
	applymovement 4, LittlerootTown_BrendansHouse_1F_Movement_272598
	waitmovement 0
	applymovement 4, LittlerootTown_BrendansHouse_1F_Movement_27259A
	waitmovement 0
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_2725A4
	applymovement 4, LittlerootTown_BrendansHouse_1F_Movement_1F789C
	waitmovement 0
	special GetRivalSonDaughterString
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F8BC5, 4
	setflag FLAG_0x057
	setvar VAR_0x4082, 2
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_1F789C: @ 81F789C
	step_down
	step_right
	step_right
	step_right
	step_right
	step_right
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F78A3:: @ 81F78A3
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	applymovement VAR_0x8004, LittlerootTown_BrendansHouse_1F_Movement_2725A4
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_292765
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78BE:: @ 81F78BE
	lockall
	setvar VAR_0x8008, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78CA:: @ 81F78CA
	lockall
	setvar VAR_0x8008, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78D6:: @ 81F78D6
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78E2:: @ 81F78E2
	playse SE_KAIDAN
	delay 10
	addobject 7
	delay 30
	playse SE_PIN
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_272598
	waitmovement 0
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_27259A
	waitmovement 0
	compare VAR_0x8008, 1
	call_if 5, LittlerootTown_BrendansHouse_1F_EventScript_1F7981
	playbgm MUS_BOY_SUP, 1
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F798C
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F7997
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F79A2
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F90B4, 4
	closemessage
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F79C1
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F79D3
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_BrendansHouse_1F_EventScript_1F79E5
	playse SE_KAIDAN
	removeobject 7
	setflag FLAG_0x2E9
	setflag FLAG_0x331
	clearflag FLAG_0x2F8
	delay 30
	setvar VAR_0x408D, 3
	setvar VAR_0x4050, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F7981:: @ 81F7981
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_2725AA
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F798C:: @ 81F798C
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79AD
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F7997:: @ 81F7997
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79B5
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79A2:: @ 81F79A2
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79B9
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_1F79AD: @ 81F79AD
	step_27
	step_left
	step_26
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79B5: @ 81F79B5
	step_up
	step_up
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79B9: @ 81F79B9
	step_28
	step_right
	step_26
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F79C1:: @ 81F79C1
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_1F79F7
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A06
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79D3:: @ 81F79D3
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_1F79FB
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A0C
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79E5:: @ 81F79E5
	applymovement 255, LittlerootTown_BrendansHouse_1F_Movement_1F7A02
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A16
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_1F79F7: @ 81F79F7
	step_14
	step_13
	step_28
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79FB: @ 81F79FB
	step_14
	step_13
	step_28
	step_14
	step_14
	step_26
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A02: @ 81F7A02
	step_14
	step_13
	step_27
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A06: @ 81F7A06
	step_28
	step_right
	step_26
	step_up
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A0C: @ 81F7A0C
	step_28
	step_right
	step_26
	step_up
	step_up
	step_27
	step_left
	step_26
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A16: @ 81F7A16
	step_27
	step_left
	step_26
	step_up
	step_up
	step_end

LittlerootTown_BrendansHouse_1F_Text_1F7A1C: @ 81F7A1C
	.string "MOM: See, {PLAYER}?\n"
	.string "Its ok I guess?$"

LittlerootTown_BrendansHouse_1F_Text_1F7A46: @ 81F7A46
	.string "Looks like the mover’s POKéMON do all the work\n"
	.string "of moving us in and cleaning up after.\l"
	.string "I dont remember paying for that\p"
	.string "{PLAYER}, theres only one bed.\n"
	.string "So youll have to sleep on the floor\p"
	.string "Also go set the clock upstairs\n"
	.string "to the correct timezone.\l"
	.string "Ill halt your progress if you dont!$"

LittlerootTown_BrendansHouse_1F_Text_1F7B24: @ 81F7B24
	.string "MOM: Well, {PLAYER}?\p"
	.string "go upstairs and fix the clock.\n"
	.string "Ill see if I can fix this TV$"

LittlerootTown_BrendansHouse_1F_Text_1F7B67: @ 81F7B67
LittlerootTown_MaysHouse_1F_Text_1F7B67: @ 81F7B67
	.string "MOM: {PLAYER}.\p"
	.string "Go set the clock in your room, honey.$"

LittlerootTown_BrendansHouse_1F_Text_1F7B96: @ 81F7B96
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

LittlerootTown_BrendansHouse_1F_Text_1F7BBC: @ 81F7BBC
LittlerootTown_MaysHouse_1F_Text_1F7BBC: @ 81F7BBC
	.string "MOM: Look! It’s PETALBURG GYM!\n"
	.string "Maybe DAD will finally get beaten\p"
	.string "hard enough to spend time with me$"

LittlerootTown_BrendansHouse_1F_Text_1F7BF1: @ 81F7BF1
LittlerootTown_MaysHouse_1F_Text_1F7BF1: @ 81F7BF1
	.string "MOM: Oh… It’s over.\p"
	.string "I think DAD was on, but we missed him.\n"
	.string "Too bad.$"

LittlerootTown_BrendansHouse_1F_Text_1F7C35: @ 81F7C35
LittlerootTown_MaysHouse_1F_Text_1F7C35: @ 81F7C35
	.string "Oh, yes.\n"
	.string "One of DAD’s friends lives in town.\p"
	.string "PROF. BIRCH is his name, but Ive heard.\p"
	.string "hes more of a weeaboo than a professor\p"
	.string "He lives right next door, so you should\n"
	.string "go over and introduce yourself.$"

LittlerootTown_BrendansHouse_1F_Text_1F7CC3: @ 81F7CC3
	.string "MOM: Make sure to come back home {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_Text_1F7CD8: @ 81F7CD8
	.string "MOM: Did you introduce yourself to\n"
	.string "PROF. WEEA- I mean BIRCH?$"

LittlerootTown_BrendansHouse_1F_Text_1F7D08: @ 81F7D08
	.string "MOM: How are you doing, {PLAYER}?\n"
	.string "You look a little tired.\p"
	.string "I think you should rest a bit.p"
	.string "But remember the bed is mine\n"
	.string "you sleep on the floor."
	

LittlerootTown_BrendansHouse_1F_Text_1F7D5C: @ 81F7D5C
	.string "MOM: Remember to become more profitable\n"
	.string "than your father$"

LittlerootTown_BrendansHouse_1F_Text_1F7D73: @ 81F7D73
	.string "MOM: Oh? Did you finally kick your fathers\p"
	.string "ass? then you could probably use this$"

LittlerootTown_BrendansHouse_1F_Text_1F7DBE: @ 81F7DBE
	.string "you’re better than your father {PLAYER}\n"
	.string "maybe someday we can get another bed for you\p"
	.string "or you could always live in a SECRET BASE$"

LittlerootTown_BrendansHouse_1F_Text_1F7E0E: @ 81F7E0E
	.string "MOM: What is that, honey? A POKéNAV?\n"
	.string "Who in their right mind hands out free phones?\p"
	.string "Well, register me so I can stalk your GPS\n"
	.string "and make sure youre not dead\p"
	.string "… … …$"

LittlerootTown_BrendansHouse_1F_Text_1F7E89: @ 81F7E89
	.string "Registered MOM\n"
	.string "in the POKéNAV.$"

LittlerootTown_BrendansHouse_1F_Text_1F7EA8: @ 81F7EA8
	.string "(incoherent animal noise)$"

LittlerootTown_BrendansHouse_1F_Text_1F7EB3: @ 81F7EB3
	.string "(strangely sexual grunts)$"

LittlerootTown_BrendansHouse_1F_Text_1F7EC6: @ 81F7EC6
	.string "INTERVIEWER: …We brought you this\n"
	.string "report from in front of PETALBURG GYM.$"

LittlerootTown_BrendansHouse_1F_Text_1F7F0F: @ 81F7F0F
	.string "There is a movie on TV.\p"
	.string "... MOM sure watches some messed up shit\n"
	.string "like seriously why is that on TV\p"
	.string "Better get going!$"

LittlerootTown_BrendansHouse_1F_Text_1F7F66: @ 81F7F66
	.string "It’s the instruction booklet for the\n"
	.string "RUNNING SHOES.\p"
	.string "“Press the B Button to run while\n"
	.string "wearing your RUNNING SHOES.\p"
	.string "“Lace up your RUNNING SHOES and hit\n"
	.string "the road running!”\p"
	.string "... it appears MOM has scribbled some illegible\n"
	.string "notes on how if there are half A presses\p"
	.string "then there are also half B presses$"

LittlerootTown_BrendansHouse_1F_Text_1F800E: @ 81F800E
	.string "DAD: Hm?\p"
	.string "Hey, it’s {PLAYER}!\p"
	.string "It’s been a while since I saw you,\n"
	.string "but you look…stronger, somehow.\p"
	.string "thats probably because you trecked\n"
	.string "every trail in this entire region.\p"
	.string "Oh, yes, I have something for you.\n"
	.string "This came to you from someone named\l"
	.string "MR. BRINEY.$"

LittlerootTown_BrendansHouse_1F_Text_1F80FE: @ 81F80FE
	.string "DAD: Hm, a TICKET for a ferry?\p"
	.string "Id be careful about going on a boat trip\n"
	.string "with a strange old man you barely know.$"

LittlerootTown_BrendansHouse_1F_Text_1F815B: @ 81F815B
	.string "I’d better get back to PETALBURG GYM.\p"
	.string "MOM, thanks for looking after the house\n"
	.string "while I’m away.\p"
	.string "(he winks at her as he leaves)$"

LittlerootTown_BrendansHouse_1F_Text_1F81B9: @ 81F81B9
	.string "MOM: That DAD of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is POKéMON.\p"
	.string "He should relax and stay a little longer.\n"
	.string "at least he made me remember why\p"
	.string "I married him last night\n"
	.string "(MOM demonstrates with a hand motion)\p"
	.string "{PLAYER}:...\n"
	.string "...\p"
	.string "...\n"
	.string "...\p"
	.string "...\n"
	.string "...\p"
	.string "...\n"
	.string "...\p"
	.string "what the fuck$"
	

LittlerootTown_BrendansHouse_1F_Text_1F824B: @ 81F824B
	.string "MOM: Is that a breaking news story?$"

LittlerootTown_BrendansHouse_1F_Text_1F826F: @ 81F826F
	.string "We bring you this emergency\n"
	.string "news flash!\p"
	.string "In various HOENN locales, there have\n"
	.string "been reports of a BZZT…colored\l"
	.string "POKéMON in flight.\p"
	.string "The identity of this POKéMON is\n"
	.string "currently unknown.\p"
	.string "We now return you to the regular\n"
	.string "movie program.$"

LittlerootTown_BrendansHouse_1F_Text_1F8351: @ 81F8351
	.string "MOM: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that POKéMON was?$"

LittlerootTown_BrendansHouse_1F_Text_1F83A1: @ 81F83A1
	.string "MOM: Well, isn’t that something!\n"
	.string "There are still unknown POKéMON.\p"
	.string "go capture it now, you are the protagonist\n"
	.string "its your job$"
