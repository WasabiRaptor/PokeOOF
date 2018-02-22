LittlerootTown_ProfessorBirchsLab_MapScripts:: @ 81F9C91
	map_script 3, LittlerootTown_ProfessorBirchsLab_MapScript1_1F9CA1
	map_script 4, LittlerootTown_ProfessorBirchsLab_MapScript2_1F9D06
	map_script 2, LittlerootTown_ProfessorBirchsLab_MapScript2_1F9DB9
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScript1_1F9CA1: @ 81F9CA1
	call LittlerootTown_ProfessorBirchsLab_EventScript_271ED7
	call LittlerootTown_ProfessorBirchsLab_EventScript_2720AD
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9CF7
	compare VAR_0x40D3, 4
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9CF3
	compare VAR_0x40D3, 3
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9CCD
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9CCD:: @ 81F9CCD
	specialvar VAR_RESULT, sub_80C08E4
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9CE9
	setobjectmovementtype 3, 3
	setobjectxyperm 3, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9CE9:: @ 81F9CE9
	setvar VAR_0x40D3, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1F9CF3

LittlerootTown_ProfessorBirchsLab_EventScript_1F9CF3:: @ 81F9CF3
	setmaplayoutindex 432
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9CF7:: @ 81F9CF7
	setmaplayoutindex 432
	setobjectmovementtype 3, 3
	setobjectxyperm 3, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_MapScript2_1F9D06: @ 81F9D06
	map_script_2 VAR_0x4084, 2, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D40
	map_script_2 VAR_0x40D3, 1, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D45
	map_script_2 VAR_0x40D3, 2, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D45
	map_script_2 VAR_0x40D3, 3, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D71
	map_script_2 VAR_0x40D3, 6, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D71
	map_script_2 VAR_0x40D3, 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D75
	map_script_2 VAR_0x40D3, 5, LittlerootTown_ProfessorBirchsLab_EventScript_1F9D75
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_1F9D40:: @ 81F9D40
	turnobject 255, 2
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9D45:: @ 81F9D45
	turnobject 255, 2
	addobject 2
	addobject 3
	turnobject 3, 2
	setobjectxy 3, 5, 5
	turnobject 2, 1
	setobjectxy 2, 6, 4
	turnobject 1, 4
	setobjectxy 1, 10, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9D71:: @ 81F9D71
	addobject 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9D75:: @ 81F9D75
	addobject 4
	addobject 5
	addobject 6
	addobject 3
	turnobject 4, 1
	setobjectxy 4, 8, 4
	turnobject 5, 1
	setobjectxy 5, 9, 4
	turnobject 6, 1
	setobjectxy 6, 10, 4
	turnobject 2, 1
	setobjectxy 2, 6, 4
	turnobject 3, 4
	setobjectxy 3, 5, 5
	end

LittlerootTown_ProfessorBirchsLab_MapScript2_1F9DB9: @ 81F9DB9
	map_script_2 VAR_0x4084, 2, LittlerootTown_ProfessorBirchsLab_EventScript_1F9DDB
	map_script_2 VAR_0x4084, 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9E67
	map_script_2 VAR_0x40D3, 1, LittlerootTown_ProfessorBirchsLab_EventScript_1F9E80
	map_script_2 VAR_0x40D3, 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9F62
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_1F9DDB:: @ 81F9DDB
	lockall
	bufferleadmonspeciesname 0
	message LittlerootTown_ProfessorBirchsLab_Text_1FA74D
	waitmessage
	playfanfare MUS_FANFA4
	waitfanfare
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA8B1, 5
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E07
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E17
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E07:: @ 81F9E07
	setvar VAR_0x8004, 0
	call LittlerootTown_ProfessorBirchsLab_EventScript_2723DD
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1F9E17
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E17:: @ 81F9E17
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA8F6, 5
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E36
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E48
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E36:: @ 81F9E36
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA9D5, 4
	clearflag FLAG_0x3DF
	setvar VAR_0x4084, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E48:: @ 81F9E48
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAA35, 5
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E36
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9E48
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E67:: @ 81F9E67
	lockall
	applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_1F9E78
	waitmovement 0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA2F8
	end

LittlerootTown_ProfessorBirchsLab_Movement_1F9E78: @ 81F9E78
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9E80:: @ 81F9E80
	lockall
	delay 30
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB16D, 4
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_1F9F46
	waitmovement 0
	delay 20
	playse SE_TK_KASYA
	delay 10
	playse SE_TK_KASYA
	delay 10
	playse SE_TK_KASYA
	delay 10
	playse SE_TK_KASYA
	delay 20
	applymovement 3, LittlerootTown_ProfessorBirchsLab_Movement_2725A8
	applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_2725A4
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1F9F32
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1F9F3C
	playse SE_PC_ON
	waitse
	delay 20
	applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_1F9F58
	waitmovement 0
	applymovement 3, LittlerootTown_ProfessorBirchsLab_Movement_2725A6
	applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_2725A6
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB419, 4
	playfanfare MUS_FANFA4
	message LittlerootTown_ProfessorBirchsLab_Text_1FB436
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB466, 4
	closemessage
	setflag FLAG_0x31B
	setflag FLAG_0x31A
	setvar VAR_0x40D3, 2
	setvar VAR_0x40F5, 0
	setflag FLAG_0x072
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9F32:: @ 81F9F32
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB30F, 4
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1F9F3C:: @ 81F9F3C
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB38E, 4
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_Movement_1F9F46: @ 81F9F46
	step_left
	step_25
	step_14
	step_14
	step_right
	step_25
	step_14
	step_14
	step_right
	step_down
	step_down
	step_down
	step_down
	step_right
	step_right
	step_right
	step_26
	step_end

LittlerootTown_ProfessorBirchsLab_Movement_1F9F58: @ 81F9F58
	step_left
	step_left
	step_left
	step_up
	step_up
	step_up
	step_up
	step_left
	step_25
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9F62:: @ 81F9F62
	lockall
	applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_1F9F7C
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB5F9, 4
	setvar VAR_0x40D3, 5
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Movement_1F9F7C: @ 81F9F7C
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9F84:: @ 81F9F84
	lock
	faceplayer
	compare VAR_0x4084, 3
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1F9FB1
	checkflag FLAG_0x058
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1F9FA7
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA4E2, 4
	setflag FLAG_0x058
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9FA7:: @ 81F9FA7
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA641, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9FB1:: @ 81F9FB1
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FA6CE, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9FBB:: @ 81F9FBB
	release
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1FA057
	applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_2725A8
	waitmovement 0
	drawmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB7F6, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA061
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA06C
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1F9FEF:: @ 81F9FEF
	release
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1FA057
	applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_2725A8
	waitmovement 0
	drawmonpic SPECIES_TOTODILE, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB869, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA061
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA10D
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA023:: @ 81FA023
	release
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1FA057
	applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_2725A8
	waitmovement 0
	drawmonpic SPECIES_CHIKORITA, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB8E0, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA061
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA1AE
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA057:: @ 81FA057
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBAF8, 4
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA061:: @ 81FA061
	erasemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB959, 4
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA06C:: @ 81FA06C
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	setvar VAR_0x4001, 155
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA0A1
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA0CC
	erasemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_273811
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA0A1:: @ 81FA0A1
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 4
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA0FD
	call LittlerootTown_ProfessorBirchsLab_EventScript_27378B
	call LittlerootTown_ProfessorBirchsLab_EventScript_2723DD
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA0FD
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA0CC:: @ 81FA0CC
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 4
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA0F2
	call LittlerootTown_ProfessorBirchsLab_EventScript_273797
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA0F2
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA0F2:: @ 81FA0F2
	call LittlerootTown_ProfessorBirchsLab_EventScript_2737A0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA0FD
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA0FD:: @ 81FA0FD
	erasemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBA2C, 4
	setvar VAR_0x40D3, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA10D:: @ 81FA10D
	bufferspeciesname 0, SPECIES_TOTODILE
	setvar VAR_0x4001, 158
	givemon SPECIES_TOTODILE, 5, ITEM_NONE, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA142
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA16D
	erasemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_273811
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA142:: @ 81FA142
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 5
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA19E
	call LittlerootTown_ProfessorBirchsLab_EventScript_27378B
	call LittlerootTown_ProfessorBirchsLab_EventScript_2723DD
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA19E
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA16D:: @ 81FA16D
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 5
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA193
	call LittlerootTown_ProfessorBirchsLab_EventScript_273797
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA193
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA193:: @ 81FA193
	call LittlerootTown_ProfessorBirchsLab_EventScript_2737A0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA19E
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA19E:: @ 81FA19E
	erasemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBA2C, 4
	setvar VAR_0x40D3, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA1AE:: @ 81FA1AE
	bufferspeciesname 0, SPECIES_CHIKORITA
	setvar VAR_0x4001, 152
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA1E3
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA20E
	erasemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_273811
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA1E3:: @ 81FA1E3
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 6
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA23F
	call LittlerootTown_ProfessorBirchsLab_EventScript_27378B
	call LittlerootTown_ProfessorBirchsLab_EventScript_2723DD
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA23F
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA20E:: @ 81FA20E
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F
	removeobject 6
	msgbox gUnknown_08273374, 5
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA234
	call LittlerootTown_ProfessorBirchsLab_EventScript_273797
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA234
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA234:: @ 81FA234
	call LittlerootTown_ProfessorBirchsLab_EventScript_2737A0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA23F
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA23F:: @ 81FA23F
	erasemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBA2C, 4
	setvar VAR_0x40D3, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA24F:: @ 81FA24F
	playfanfare MUS_FANFA4
	message LittlerootTown_ProfessorBirchsLab_Text_1FB9D7
	waitmessage
	waitfanfare
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA25A:: @ 81FA25A
	lock
	faceplayer
	compare VAR_0x40D3, 5
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA28A
	compare VAR_0x40D3, 2
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA294
	checkflag FLAG_HAS_MATCH_CALL
	goto_if 0, LittlerootTown_ProfessorBirchsLab_EventScript_1FA29E
	checkflag FLAG_0x119
	goto_if 0, LittlerootTown_ProfessorBirchsLab_EventScript_1FA2D2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_1FA29E
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA28A:: @ 81FA28A
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB787, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA294:: @ 81FA294
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB466, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA29E:: @ 81FA29E
	checkflag FLAG_0x380
	goto_if 0, LittlerootTown_ProfessorBirchsLab_EventScript_272141
	compare VAR_0x40D3, 3
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_272141
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_272141
	compare VAR_0x4084, 5
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA3C4
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAA74, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA2D2:: @ 81FA2D2
Route101_EventScript_1FA2D2:: @ 81FA2D2
	msgbox Route101_Text_2B5F52, 4
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox Route101_Text_2B603A, 4
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_0x119
	setvar VAR_0x40DA, 2
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA2F8:: @ 81FA2F8
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAB22, 4
	call LittlerootTown_ProfessorBirchsLab_EventScript_1FA3AC
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAC4B, 4
	closemessage
	applymovement 3, LittlerootTown_ProfessorBirchsLab_Movement_1FA3E0
	waitmovement 0
	applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_2725A8
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA352
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA37F
	setvar VAR_0x4084, 5
	setflag FLAG_0x074
	setvar VAR_0x4051, 1
	setvar VAR_0x408D, 4
	setvar VAR_0x4050, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA352:: @ 81FA352
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FADD7, 4
	giveitem_std ITEM_POKE_BALL, 5
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA3CE
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAE40, 4
	setvar VAR_RESULT, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA37F:: @ 81FA37F
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAF3F, 4
	giveitem_std ITEM_POKE_BALL, 5
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA3D7
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAF8E, 4
	setvar VAR_RESULT, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3AC:: @ 81FA3AC
	playfanfare MUS_FANFA4
	message LittlerootTown_ProfessorBirchsLab_Text_1FAC32
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special sub_81AFDA0
	setflag FLAG_0x8E4
	setvar VAR_0x40CD, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3C4:: @ 81FA3C4
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAD6F, 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3CE:: @ 81FA3CE
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAEF3, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3D7:: @ 81FA3D7
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB05D, 4
	return

LittlerootTown_ProfessorBirchsLab_Movement_1FA3E0: @ 81FA3E0
	step_down
	step_27
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3E3:: @ 81FA3E3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB0A2, 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA3EC:: @ 81FA3EC
	lock
	faceplayer
	compare VAR_0x40D3, 5
	goto_eq LittlerootTown_ProfessorBirchsLab_EventScript_1FA43A
	compare VAR_0x40D3, 6
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1FA465
	compare VAR_0x40D3, 2
	goto_if 4, LittlerootTown_ProfessorBirchsLab_EventScript_1FA490
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA428
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA431
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA428:: @ 81FA428
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FAF08, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA431:: @ 81FA431
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB073, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA43A:: @ 81FA43A
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA453
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA45C
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA453:: @ 81FA453
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBB68, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA45C:: @ 81FA45C
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBC2D, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA465:: @ 81FA465
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA47E
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA487
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA47E:: @ 81FA47E
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBC8D, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA487:: @ 81FA487
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FBCD2, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA490:: @ 81FA490
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4A9
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4B2
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4A9:: @ 81FA4A9
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB528, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4B2:: @ 81FA4B2
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB58A, 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB:: @ 81FA4BB
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB0E7, 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4:: @ 81FA4C4
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB124, 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4CD:: @ 81FA4CD
	msgbox LittlerootTown_ProfessorBirchsLab_Text_1FB148, 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_1FA4D6:: @ 81FA4D6
	lockall
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_1FBD1A
	waitmessage
	clearflag FLAG_0x072
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Text_1FA4E2: @ 81FA4E2
	.string "Hunh? PROF. BIRCH?\p"
	.string "The PROF’s away on fieldwork.\n"
	.string "Ergo, he isn’t here.\p"
	.string "Oh, let me explain what fieldwork is.\p"
	.string "well to him at least\n"
	.string "he somehow got a grant for this lab\l"
	.string "and does nothing but try and replicate\p"
	.string "anime in real life.\n"
	.string "and he isnt even japanese, he purposely\l"
	.string "mispronounces everything because he thinks\l"
	.string "it helps him channel anime powers.$"

LittlerootTown_ProfessorBirchsLab_Text_1FA641: @ 81FA641
	.string "The PROF isn’t one for reading manga.\n"
	.string "He’s the type of person who would\l"
	.string "rather watch an anime in the original dub\l"
	.string "sometimes without subs even.$"

LittlerootTown_ProfessorBirchsLab_Text_1FA6CE: @ 81FA6CE
	.string "PROF. BIRCH is studying how to\n"
	.string "bring the power of anime into real life.\p"
	.string "The PROF enjoys watching anime all the time.\n"
	.string "He really loves his Waifus.$"

LittlerootTown_ProfessorBirchsLab_Text_1FA74D: @ 81FA74D
	.string "PROF. BIRCH: So, {PLAYER}-Kun.\p"
	.string "I’ve eard so muc about you from\n"
	.string "your fater.\p"
	.string "I’ve eard that you don’t have your\n"
	.string "own POKéMON yet.\p"
	.string "But the way you battred earrier,\n"
	.string "you purred it off wit apromb!\p"
	.string "I guess you ave your fater’s brood\n"
	.string "in your veins after arr desu!\p"
	.string "Oh, yes. As tanks for rescuing me,\n"
	.string "I’d rike you to ave the POKéMON you\l"
	.string "used earrier desu.\p"
	.string "{PLAYER} received the {STR_VAR_1}!$"

LittlerootTown_ProfessorBirchsLab_Text_1FA8B1: @ 81FA8B1
	.string "PROF. BIRCH: Wile you’re at it, wy not\n"
	.string "give a nickname to tat {STR_VAR_1} desu?$"

LittlerootTown_ProfessorBirchsLab_Text_1FA8F6: @ 81FA8F6
	.string "PROF. BIRCH: If you work at POKéMON\n"
	.string "and gain experience, I tink you’rr make\l"
	.string "an extremery good TRAINER.\p"
	.string "My kid, {RIVAL}, is also studying\n"
	.string "POKéMON wile elping me out desu.\p"
	.string "{PLAYER}-Kun, don’t you tink it migt be\n"
	.string "a good idea to go see {RIVAL} desu?$"

LittlerootTown_ProfessorBirchsLab_Text_1FA9D5: @ 81FA9D5
	.string "PROF. BIRCH: Great!\n"
	.string "{RIVAL} sourd be appy, too.\p"
	.string "Get {RIVAL} to teac you wat it\n"
	.string "means to be a TRAINER desu.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAA35: @ 81FAA35
	.string "PROF. BIRCH: Oh, don’t be tat way.\n"
	.string "You sourd go meet my kid desu.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAA74: @ 81FAA74
	.string "PROF. BIRCH: {RIVAL}?\n"
	.string "Gone home, I think.\p"
	.string "Or maybe that kid’s cutting again?\n"
	.string "Or maybe she... no\p"
	.string "If you or your POKéMON get tired,\n"
	.string "you sourd get some rest at home desu.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAB22: @ 81FAB22
	.string "PROF. BIRCH: Oh, hi, {PLAYER}-Kun!\p"
	.string "I eard you beat {RIVAL} on\n"
	.string "your first try. Tat’s excerrent desu!\p"
	.string "{RIVAL}’s been elping with my researc\n"
	.string "for a rong time.\p"
	.string "{RIVAL} as an extensive istory as\n"
	.string "a TRAINER arready desu.\p"
	.string "Here, {PLAYER}-Kun, I ordered tis for my\n"
	.string "researc, but I tink you sourd ave\l"
	.string "tis POKéDEX.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAC32: @ 81FAC32
	.string "{PLAYER} received the POKéDEX!$"

LittlerootTown_ProfessorBirchsLab_Text_1FAC4B: @ 81FAC4B
	.string "PROF. BIRCH: The POKéDEX is a igh-tec\n"
	.string "toor that automaticarry makes a record\l"
	.string "of any POKéMON you meet or catc desu.\p"
	.string "My kid, {RIVAL}, goes everywere\n"
	.string "with it.\p"
	.string "Wenever my kid catces a rare POKéMON\n"
	.string "and records its data in the POKéDEX,\l"
	.string "wy, {RIVAL} rooks for me wile I’m out\l"
	.string "doing ...fieldwork, and sows me desu.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAD6F: @ 81FAD6F
	.string "PROF. BIRCH: Countress POKéMON\n"
	.string "await you!\p"
	.string "Arg, I’m getting the itc to get out\n"
	.string "and rerease my powers onto the worrd!$"

LittlerootTown_ProfessorBirchsLab_Text_1FADD7: @ 81FADD7
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
	.string "You got a POKéDEX, too?\p"
	.string "...\n"
	.string "maybe I wont need these anymore$"

LittlerootTown_ProfessorBirchsLab_Text_1FAE40: @ 81FAE40
	.string "MAY: does this mean I can quit my job\n"
	.string "...\p"
	.string "you know since now you got him\n"
	.string "so Im nt needed anymore\p"
	.string "...\n"
	.string "so I can just sulk at the house$"

LittlerootTown_ProfessorBirchsLab_Text_1FAEF3: @ 81FAEF3
	.string "Oh? Your BAG’s full dumbass.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAF08: @ 81FAF08
	.string "MAY:...\n"
	.string "can I leave now$"

LittlerootTown_ProfessorBirchsLab_Text_1FAF3F: @ 81FAF3F
	.string "BRENDAN: Huh…\n"
	.string "So you got a POKéDEX, too.\p"
	.string "that nice girrl\n"
	.string "I’ll give you these to match it.$"

LittlerootTown_ProfessorBirchsLab_Text_1FAF8E: @ 81FAF8E
	.string "BRENDAN: You know it’s more fun to\n"
	.string "have a whole bunch of POKéMON.\p"
	.string "I’m going to explore all over the place\n"
	.string "to find pokemon that match my outfit.\p"
	.string "Like look at this little guy dad gave me\n"
	.string "Its so cute I want to wear it as a hat.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB05D: @ 81FB05D
	.string "Hey, your BAG’s full.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB073: @ 81FB073
	.string "BRENDAN: We still need to get that\n"
	.string "Mall trip planned out girl.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB0A2: @ 81FB0A2
	.string "It’s a serious-looking machine.\n"
	.string "The PROF must use this for research.\p"
	.string "oh wait it a replica prop from an anime$"

LittlerootTown_ProfessorBirchsLab_Text_1FB0E7: @ 81FB0E7
	.string "sombody has paused their anime at the\n"
	.string "the perfet frame so see some girls panties$"

LittlerootTown_ProfessorBirchsLab_Text_1FB124: @ 81FB124
	.string "It’s crammed with anime DVDs.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB148: @ 81FB148
	.string "It’s a Manga.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB16D: @ 81FB16D
	.string "PROF. BIRCH: Now…\p"
	.string "{PLAYER}-Kun and {RIVAL}, I’ve ad te two\n"
	.string "of you elp me study POKéMON.\p"
	.string "Tanks to your herp, new facts\n"
	.string "are coming to right.\p"
	.string "It appears that in the HOENN region,\n"
	.string "tere are also POKéMON from oter\l"
	.string "regions.\p"
	.string "It goes to sow how rich and varied\n"
	.string "te naturar environments of HOENN\l"
	.string "appen to be.\p"
	.string "Tat’s why I tink it’s necessary for\n"
	.string "me to upgrade your POKéDEX to\l"
	.string "the NATIONAL Mode.\p"
	.string "ere, ret me see your POKéDEX units.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB30F: @ 81FB30F
	.string "MAY:...\p"
	.string "so theres more pokemon to catch?\n"
	.string "...\p"
	.string "great\n"
	.string "{PLAYER} you take care of this $"

LittlerootTown_ProfessorBirchsLab_Text_1FB38E: @ 81FB38E
	.string "BRENDAN: I went out all over HOENN\n"
	.string "and checked out all the POKéMON.\p"
	.string "none of them can outmatch my style\n"
	.string "now I can compare my style with the world.\p"
	.string "Yep, you’re lucky, {PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB419: @ 81FB419
	.string "PROF. BIRCH: Okay, arr done!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB436: @ 81FB436
	.string "{PLAYER}’s POKéDEX was upgraded\n"
	.string "to the NATIONAL Mode!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB466: @ 81FB466
	.string "PROF. BIRCH: But risten.\n"
	.string "You’ve become the CAMPION,\l"
	.string "but your POKéMON journey isn’t over desu.\p"
	.string "Tere is no end to the road\n"
	.string "tat is POKéMON.\p"
	.string "Somewere, tere is a grassy patc\n"
	.string "tat’s waiting for you desu!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB528: @ 81FB528
	.string "MAY:...\p"
	.string "so I can just hang out here and sulk?\n"
	.string "ok$"

LittlerootTown_ProfessorBirchsLab_Text_1FB58A: @ 81FB58A
	.string "BRENDAN: For the time being,\n"
	.string "I’m taking a break from finding new styles\p"
	.string "I’ll be helping out the PROF here\n"
	.string "for a while, he definely needs better style$"

LittlerootTown_ProfessorBirchsLab_Text_1FB5F9: @ 81FB5F9
	.string "PROF. BIRCH: Oh, {PLAYER}-Kun!\n"
	.string "ret’s have a rook at your POKéDEX.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Yes, tere’s no doubt about it.\p"
	.string "You rearry have compreted the HOENN\n"
	.string "region’s POKéDEX desu.\p"
	.string "Tat’s more tan just impressive.\p"
	.string "I ave a gift for you desu.\p"
	.string "Consider it my sow of appreciation\n"
	.string "for te fantastic work you’ve done desu.\p"
	.string "My gift is a rare POKéMON onry found\n"
	.string "in another region!\p"
	.string "You can ave any one of tese\n"
	.string "tree POKéMON desu!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB787: @ 81FB787
	.string "PROF. BIRCH: Tese are rare POKéMON\n"
	.string "onry found in anoter region!\p"
	.string "You can ave any one of tese\n"
	.string "tree POKéMON desu!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB7F6: @ 81FB7F6
	.string "PROF. BIRCH: Te FIRE POKéMON\n"
	.string "CYNDAQUIR caught your eye desu!\p"
	.string "You’re as sarp as ever!\p"
	.string "So te CYNDAQUIR is your choice desu?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB869: @ 81FB869
	.string "PROF. BIRCH: Te WATER POKéMON\n"
	.string "TOTODIRE is your choice!\p"
	.string "You know ow to pick a good one.\p"
	.string "So, you’rr take the TOTODIRE desu?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB8E0: @ 81FB8E0
	.string "PROF. BIRCH: The GRASS POKéMON\n"
	.string "CIKORITA is your coice!\p"
	.string "You sure know wat you’re doing.\p"
	.string "So, you’rr take the CIKORITA desu?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB959: @ 81FB959
	.string "PROF. BIRCH: Take your time before\n"
	.string "you decide.\p"
	.string "They’re arr invaruabre POKéMON desu.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9A8: @ 81FB9A8
	.string "PROF. BIRCH: I see!\n"
	.string "You picked a fine POKéMON desu!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9D7: @ 81FB9D7
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. BIRCH!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9FC: @ 81FB9FC
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_1} you received?$"

LittlerootTown_ProfessorBirchsLab_Text_1FBA2C: @ 81FBA2C
	.string "PROF. BIRCH: risten, {PLAYER}-Kun.\n"
	.string "You’ve compreted the HOENN POKéDEX,\l"
	.string "but your POKéMON journey isn’t over desu.\p"
	.string "Tere is no end to the road\n"
	.string "tat is POKéMON desu.\p"
	.string "Somewhere, tere is a grassy patc\n"
	.string "that’s waiting for you desu!$"

LittlerootTown_ProfessorBirchsLab_Text_1FBAF8: @ 81FBAF8
	.string "You received the promised POKéMON.\n"
	.string "Better leave the others alone.\p"
	.string "even if you deserve all three$"

LittlerootTown_ProfessorBirchsLab_Text_1FBB3A: @ 81FBB3A
	.string "Oh, you don’t have any room for\n"
	.string "this POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBB68: @ 81FBB68
	.string "MAY: {PLAYER}{KUN}, after this…\n"
	.string "What are you going to do?\p"
	.string "...\n"
	.string "will you finaly let me cut you?\p"
	.string "...\n"
	.string "ugh why are you even more silent than me?\p"
	.string "I’m staying here to help the PROF.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBC2D: @ 81FBC2D
	.string "BRENDAN: your outfit is still rather drab\n"
	.string "but your choice of pokemon makes up for it\l"
	.string "but girrl you need better clothes.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBC8D: @ 81FBC8D
	.string "MAY: Oh, hi, {PLAYER}\n"
	.string "Have you gone to that place,\l"
	.string "the BATTLE FRONTIER?\p"
	.string "I want to see the anguish on peoples faces after\n"
	.string "complete beatdowns by the FRONTIER BRAINS"

LittlerootTown_ProfessorBirchsLab_Text_1FBCD2: @ 81FBCD2
	.string "BRENDAN: Hey, {PLAYER}!\n"
	.string "Have you gone out to that place,\l"
	.string "the BATTLE FRONTIER? I hear theres\p"
	.string "a man named tucker with a great sense\n"
	.string "of fashion similar to mine$"

LittlerootTown_ProfessorBirchsLab_Text_1FBD1A: @ 81FBD1A
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "HEY ASSHOLE!\n"
	.string "GO TO THE FUCKING S.S.TIDAL\p"
	.string "GET ON THAT FUCKING BOAT\n"
	.string "GET APROVED ON GOING TO THE\p"
	.string "BATTLE FRONTIER\p"
	.string "THEN YOU CAN COME OVER TO OUR ISLAND\n"
	.string "AND THEN WELL KICK YOUR ASS SO HARD \p"
	.string "YOU START SHITTING OUT OF YOUR MOUTH\n"
	.string "HAHA GET REKT NOOB\p"
	.string "YOU DONT HAVE THE SMOGON STRATS TO \n"
	.string "BEAT US WELL DESTROY YOU\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!\p"
	.string "{PLAYER}: what the fuck even was that?$"
