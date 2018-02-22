LittlerootTown_MapScripts:: @ 81E7DCB
	map_script 3, LittlerootTown_MapScript1_1E7DDB
	map_script 2, LittlerootTown_MapScript2_1E7EC1
	map_script 4, LittlerootTown_MapScript2_1E7FE2
	.byte 0

LittlerootTown_MapScript1_1E7DDB: @ 81E7DDB
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call LittlerootTown_EventScript_271ED7
	compare VAR_0x4092, 2
	call_if 1, LittlerootTown_EventScript_1E7E67
	checkflag FLAG_0x052
	call_if 0, LittlerootTown_EventScript_1E7E6F
	compare VAR_0x4050, 3
	call_if 1, LittlerootTown_EventScript_1E7E92
	compare VAR_0x4082, 4
	call_if 1, LittlerootTown_EventScript_1E7E5C
	compare VAR_0x408C, 4
	call_if 1, LittlerootTown_EventScript_1E7E5C
	compare VAR_0x40C7, 1
	call_if 1, LittlerootTown_EventScript_1E7E53
	compare VAR_0x408D, 3
	call_if 1, LittlerootTown_EventScript_1E7E4F
	compare VAR_0x40D3, 1
	call_if 1, LittlerootTown_EventScript_1E7E4B
	compare VAR_0x40D3, 2
	call_if 1, LittlerootTown_EventScript_1E7E45
	end

LittlerootTown_EventScript_1E7E45:: @ 81E7E45
	setvar VAR_0x40D3, 3
	return

LittlerootTown_EventScript_1E7E4B:: @ 81E7E4B
	setflag FLAG_SPECIAL_FLAG_0x4000
	return

LittlerootTown_EventScript_1E7E4F:: @ 81E7E4F
	setflag FLAG_0x12D
	return

LittlerootTown_EventScript_1E7E53:: @ 81E7E53
	setvar VAR_0x40C7, 2
	setflag FLAG_0x3D3
	return

LittlerootTown_EventScript_1E7E5C:: @ 81E7E5C
	setvar VAR_0x4082, 5
	setvar VAR_0x408C, 5
	return

LittlerootTown_EventScript_1E7E67:: @ 81E7E67
	setobjectxyperm 4, 14, 8
	return

LittlerootTown_EventScript_1E7E6F:: @ 81E7E6F
	compare VAR_0x4050, 0
	goto_eq LittlerootTown_EventScript_1E7E86
	setobjectxyperm 1, 10, 1
	setobjectmovementtype 1, 7
	return

LittlerootTown_EventScript_1E7E86:: @ 81E7E86
	setobjectxyperm 1, 7, 2
	setobjectmovementtype 1, 8
	return

LittlerootTown_EventScript_1E7E92:: @ 81E7E92
	clearflag FLAG_0x2F0
	setobjectmovementtype 4, 8
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E7EB1
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E7EB9
	return

LittlerootTown_EventScript_1E7EB1:: @ 81E7EB1
	setobjectxyperm 4, 5, 9
	return

LittlerootTown_EventScript_1E7EB9:: @ 81E7EB9
	setobjectxyperm 4, 14, 9
	return

LittlerootTown_MapScript2_1E7EC1: @ 81E7EC1
	map_script_2 VAR_0x4092, 1, LittlerootTown_EventScript_1E7EDB
	map_script_2 VAR_0x4092, 2, LittlerootTown_EventScript_1E7EF9
	map_script_2 VAR_0x40D3, 1, LittlerootTown_EventScript_1E7FB1
	.2byte 0

LittlerootTown_EventScript_1E7EDB:: @ 81E7EDB
	lockall
	setvar VAR_0x8004, 5
	setvar VAR_0x8005, 8
	call LittlerootTown_EventScript_1E7F17
	setflag FLAG_0x2F9
	warpsilent LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 255, 8, 8
	waitstate
	releaseall
	end

LittlerootTown_EventScript_1E7EF9:: @ 81E7EF9
	lockall
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 8
	call LittlerootTown_EventScript_1E7F17
	setflag FLAG_0x2FA
	warpsilent LITTLEROOT_TOWN_MAYS_HOUSE_1F, 255, 2, 8
	waitstate
	releaseall
	end

LittlerootTown_EventScript_1E7F17:: @ 81E7F17
	delay 15
	playse SE_DANSA
	applymovement 255, LittlerootTown_Movement_1E7FAC
	waitmovement 0
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	addobject 4
	applymovement 4, LittlerootTown_Movement_1E7F98
	waitmovement 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	delay 10
	applymovement 4, LittlerootTown_Movement_1E7F9A
	waitmovement 0
	msgbox LittlerootTown_Text_1E86BC, 4
	closemessage
	applymovement 4, LittlerootTown_Movement_1E7F9D
	applymovement 255, LittlerootTown_Movement_1E7FA4
	waitmovement 0
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E7FA1
	applymovement 255, LittlerootTown_Movement_1E7FA9
	waitmovement 0
	setflag FLAG_0x2F0
	setvar VAR_0x4092, 3
	hideobjectat 255, PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_0x364
	clearflag FLAG_SPECIAL_FLAG_0x4000
	return

LittlerootTown_Movement_1E7F98: @ 81E7F98
	step_down
	step_end

LittlerootTown_Movement_1E7F9A: @ 81E7F9A
	step_down
	step_27
	step_end

LittlerootTown_Movement_1E7F9D: @ 81E7F9D
	step_14
	step_13
	step_up
	step_end

LittlerootTown_Movement_1E7FA1: @ 81E7FA1
	step_up
	step_54
	step_end

LittlerootTown_Movement_1E7FA4: @ 81E7FA4
	step_14
	step_13
	step_right
	step_26
	step_end

LittlerootTown_Movement_1E7FA9: @ 81E7FA9
	step_up
	step_up
	step_end

LittlerootTown_Movement_1E7FAC: @ 81E7FAC
	step_45
	step_14
	step_14
	step_14
	step_end

LittlerootTown_EventScript_1E7FB1:: @ 81E7FB1
	lockall
	playse SE_PIN
	applymovement 8, LittlerootTown_Movement_272598
	waitmovement 0
	delay 80
	msgbox LittlerootTown_Text_1E8DA2, 4
	closemessage
	clearflag FLAG_0x31A
	clearflag FLAG_0x31B
	delay 20
	clearflag FLAG_SPECIAL_FLAG_0x4000
	warp LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	waitstate
	releaseall
	end

LittlerootTown_MapScript2_1E7FE2: @ 81E7FE2
	map_script_2 VAR_0x40D3, 1, LittlerootTown_EventScript_1E7FEC
	.2byte 0

LittlerootTown_EventScript_1E7FEC:: @ 81E7FEC
	addobject 8
	addobject 7
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_EventScript_1E8004
	goto LittlerootTown_EventScript_1E8013
	end

LittlerootTown_EventScript_1E8004:: @ 81E8004
	setobjectxy 7, 6, 10
	setobjectxy 8, 5, 10
	end

LittlerootTown_EventScript_1E8013:: @ 81E8013
	setobjectxy 7, 13, 10
	setobjectxy 8, 14, 10
	end

LittlerootTown_EventScript_1E8022:: @ 81E8022
	msgbox LittlerootTown_Text_1E8ACF, 2
	end

LittlerootTown_EventScript_1E802B:: @ 81E802B
	msgbox LittlerootTown_Text_1E8B25, 2
	end

LittlerootTown_EventScript_1E8034:: @ 81E8034
	lock
	faceplayer
	checkflag FLAG_0x074
	goto_eq LittlerootTown_EventScript_1E8087
	checkflag FLAG_0x052
	goto_eq LittlerootTown_EventScript_1E807A
	compare VAR_0x4050, 0
	goto_if 5, LittlerootTown_EventScript_1E805D
	msgbox LittlerootTown_Text_1E8BB8, 4
	release
	end

LittlerootTown_EventScript_1E805D:: @ 81E805D
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_1E8C3A, 4
	closemessage
	applymovement 1, LittlerootTown_Movement_2725A2
	waitmovement 0
	setvar VAR_0x4050, 2
	release
	end

LittlerootTown_EventScript_1E807A:: @ 81E807A
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_1E8CE3, 4
	release
	end

LittlerootTown_EventScript_1E8087:: @ 81E8087
	msgbox LittlerootTown_Text_1E8D07, 4
	release
	end

LittlerootTown_EventScript_1E8091:: @ 81E8091
	lockall
	applymovement 1, LittlerootTown_Movement_1E80D1
	waitmovement 0
	call LittlerootTown_EventScript_1E80AD
	applymovement 1, LittlerootTown_Movement_1E80E1
	waitmovement 0
	releaseall
	end

LittlerootTown_EventScript_1E80AD:: @ 81E80AD
	msgbox LittlerootTown_Text_1E8BB8, 4
	closemessage
	applymovement 1, LittlerootTown_Movement_1E80DF
	applymovement 255, LittlerootTown_Movement_1E80EB
	waitmovement 0
	msgbox LittlerootTown_Text_1E8C07, 4
	closemessage
	return

LittlerootTown_Movement_1E80D1: @ 81E80D1
	step_03
	step_13
	step_51
	step_49
	step_13
	step_18
	step_18
	step_18
	step_18
	step_16
	step_16
	step_17
	step_00
	step_end

LittlerootTown_Movement_1E80DF: @ 81E80DF
	step_down
	step_end

LittlerootTown_Movement_1E80E1: @ 81E80E1
	step_right
	step_down
	step_down
	step_left
	step_left
	step_left
	step_left
	step_up
	step_25
	step_end

LittlerootTown_Movement_1E80EB: @ 81E80EB
	step_40
	step_down
	step_41
	step_end

LittlerootTown_EventScript_1E80EF:: @ 81E80EF
	lockall
	applymovement 1, LittlerootTown_Movement_1E810B
	waitmovement 0
	call LittlerootTown_EventScript_1E80AD
	applymovement 1, LittlerootTown_Movement_1E8118
	waitmovement 0
	releaseall
	end

LittlerootTown_Movement_1E810B: @ 81E810B
	step_03
	step_13
	step_51
	step_49
	step_13
	step_18
	step_18
	step_18
	step_16
	step_16
	step_18
	step_00
	step_end

LittlerootTown_Movement_1E8118: @ 81E8118
	step_left
	step_down
	step_left
	step_left
	step_left
	step_25
	step_end

LittlerootTown_EventScript_1E811F:: @ 81E811F
	lockall
	applymovement 1, LittlerootTown_Movement_2725A8
	waitmovement 0
	applymovement 255, LittlerootTown_Movement_2725A4
	waitmovement 0
	special GetPlayerBigGuyGirlString
	msgbox LittlerootTown_Text_1E8C3A, 4
	closemessage
	applymovement 1, LittlerootTown_Movement_2725A2
	waitmovement 0
	setvar VAR_0x4050, 2
	releaseall
	end

LittlerootTown_EventScript_1E8151:: @ 81E8151
	msgbox LittlerootTown_Text_1E8D32, 3
	end

LittlerootTown_EventScript_1E815A:: @ 81E815A
	msgbox LittlerootTown_Text_1E8D69, 3
	end

LittlerootTown_EventScript_1E8163:: @ 81E8163
	lockall
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E817D
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E8186
	releaseall
	end

LittlerootTown_EventScript_1E817D:: @ 81E817D
	msgbox LittlerootTown_Text_1E8D83, 4
	return

LittlerootTown_EventScript_1E8186:: @ 81E8186
	msgbox LittlerootTown_Text_1E8D8E, 4
	return

LittlerootTown_EventScript_1E818F:: @ 81E818F
	lockall
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E81A9
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E81B2
	releaseall
	end

LittlerootTown_EventScript_1E81A9:: @ 81E81A9
	msgbox LittlerootTown_Text_1E8D8E, 4
	return

LittlerootTown_EventScript_1E81B2:: @ 81E81B2
	msgbox LittlerootTown_Text_1E8D83, 4
	return

LittlerootTown_EventScript_1E81BB:: @ 81E81BB
	lockall
	setvar VAR_0x8008, 0
	setobjectxy 4, 10, 9
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E81CE:: @ 81E81CE
	lockall
	setvar VAR_0x8008, 1
	setobjectxy 4, 11, 9
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E81E1:: @ 81E81E1
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E81ED:: @ 81E81ED
	lockall
	setvar VAR_0x8008, 3
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E81F9:: @ 81E81F9
	lockall
	setvar VAR_0x8008, 4
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E8205:: @ 81E8205
	lockall
	setvar VAR_0x8008, 5
	goto LittlerootTown_EventScript_1E8211
	end

LittlerootTown_EventScript_1E8211:: @ 81E8211
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E8297
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E82A2
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E8281
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E828C
	msgbox LittlerootTown_Text_1E87E1, 4
	closemessage
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E82AD
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E82F0
	call LittlerootTown_EventScript_1E8693
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E8405
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E8448
	goto LittlerootTown_EventScript_1E8686
	end

LittlerootTown_EventScript_1E8281:: @ 81E8281
	setvar VAR_0x8009, 5
	setvar VAR_0x800A, 8
	return

LittlerootTown_EventScript_1E828C:: @ 81E828C
	setvar VAR_0x8009, 14
	setvar VAR_0x800A, 8
	return

LittlerootTown_EventScript_1E8297:: @ 81E8297
	applymovement 4, LittlerootTown_Movement_2725A8
	waitmovement 0
	return

LittlerootTown_EventScript_1E82A2:: @ 81E82A2
	applymovement 4, LittlerootTown_Movement_2725A4
	waitmovement 0
	return

LittlerootTown_EventScript_1E82AD:: @ 81E82AD
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_EventScript_1E8333
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_EventScript_1E8348
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_EventScript_1E835D
	compare VAR_0x8008, 3
	call_if 1, LittlerootTown_EventScript_1E8372
	compare VAR_0x8008, 4
	call_if 1, LittlerootTown_EventScript_1E8387
	compare VAR_0x8008, 5
	call_if 1, LittlerootTown_EventScript_1E839C
	return

LittlerootTown_EventScript_1E82F0:: @ 81E82F0
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_EventScript_1E8333
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_EventScript_1E8348
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_EventScript_1E83B1
	compare VAR_0x8008, 3
	call_if 1, LittlerootTown_EventScript_1E83C6
	compare VAR_0x8008, 4
	call_if 1, LittlerootTown_EventScript_1E83DB
	compare VAR_0x8008, 5
	call_if 1, LittlerootTown_EventScript_1E83F0
	return

LittlerootTown_EventScript_1E8333:: @ 81E8333
	applymovement 255, LittlerootTown_Movement_2725AA
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85D1
	waitmovement 0
	return

LittlerootTown_EventScript_1E8348:: @ 81E8348
	applymovement 255, LittlerootTown_Movement_2725AA
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85D8
	waitmovement 0
	return

LittlerootTown_EventScript_1E835D:: @ 81E835D
	applymovement 255, LittlerootTown_Movement_2725A4
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85DF
	waitmovement 0
	return

LittlerootTown_EventScript_1E8372:: @ 81E8372
	applymovement 255, LittlerootTown_Movement_2725A4
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85E4
	waitmovement 0
	return

LittlerootTown_EventScript_1E8387:: @ 81E8387
	applymovement 255, LittlerootTown_Movement_2725A4
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85EA
	waitmovement 0
	return

LittlerootTown_EventScript_1E839C:: @ 81E839C
	applymovement 255, LittlerootTown_Movement_2725A4
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85ED
	waitmovement 0
	return

LittlerootTown_EventScript_1E83B1:: @ 81E83B1
	applymovement 255, LittlerootTown_Movement_2725A8
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85F1
	waitmovement 0
	return

LittlerootTown_EventScript_1E83C6:: @ 81E83C6
	applymovement 255, LittlerootTown_Movement_2725A8
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85F5
	waitmovement 0
	return

LittlerootTown_EventScript_1E83DB:: @ 81E83DB
	applymovement 255, LittlerootTown_Movement_2725A8
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85F8
	waitmovement 0
	return

LittlerootTown_EventScript_1E83F0:: @ 81E83F0
	applymovement 255, LittlerootTown_Movement_2725A8
	waitmovement 0
	applymovement 4, LittlerootTown_Movement_1E85FE
	waitmovement 0
	return

LittlerootTown_EventScript_1E8405:: @ 81E8405
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_EventScript_1E848B
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_EventScript_1E8496
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_EventScript_1E84A1
	compare VAR_0x8008, 3
	call_if 1, LittlerootTown_EventScript_1E84C7
	compare VAR_0x8008, 4
	call_if 1, LittlerootTown_EventScript_1E84ED
	compare VAR_0x8008, 5
	call_if 1, LittlerootTown_EventScript_1E8513
	return

LittlerootTown_EventScript_1E8448:: @ 81E8448
	compare VAR_0x8008, 0
	call_if 1, LittlerootTown_EventScript_1E848B
	compare VAR_0x8008, 1
	call_if 1, LittlerootTown_EventScript_1E8496
	compare VAR_0x8008, 2
	call_if 1, LittlerootTown_EventScript_1E8539
	compare VAR_0x8008, 3
	call_if 1, LittlerootTown_EventScript_1E855F
	compare VAR_0x8008, 4
	call_if 1, LittlerootTown_EventScript_1E8585
	compare VAR_0x8008, 5
	call_if 1, LittlerootTown_EventScript_1E85AB
	return

LittlerootTown_EventScript_1E848B:: @ 81E848B
	applymovement 4, LittlerootTown_Movement_1E8603
	waitmovement 0
	return

LittlerootTown_EventScript_1E8496:: @ 81E8496
	applymovement 4, LittlerootTown_Movement_1E8609
	waitmovement 0
	return

LittlerootTown_EventScript_1E84A1:: @ 81E84A1
	applymovement 4, LittlerootTown_Movement_1E860F
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E84C7:: @ 81E84C7
	applymovement 4, LittlerootTown_Movement_1E8615
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E84ED:: @ 81E84ED
	applymovement 4, LittlerootTown_Movement_1E861C
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E8513:: @ 81E8513
	applymovement 4, LittlerootTown_Movement_1E8620
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E8539:: @ 81E8539
	applymovement 4, LittlerootTown_Movement_1E8625
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E855F:: @ 81E855F
	applymovement 4, LittlerootTown_Movement_1E862A
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E8585:: @ 81E8585
	applymovement 4, LittlerootTown_Movement_1E862E
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_1E85AB:: @ 81E85AB
	applymovement 4, LittlerootTown_Movement_1E8635
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_Movement_1E85D1: @ 81E85D1
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_Movement_1E85D8: @ 81E85D8
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_Movement_1E85DF: @ 81E85DF
	step_right
	step_right
	step_right
	step_right
	step_end

LittlerootTown_Movement_1E85E4: @ 81E85E4
	step_right
	step_right
	step_right
	step_right
	step_right
	step_end

LittlerootTown_Movement_1E85EA: @ 81E85EA
	step_right
	step_right
	step_end

LittlerootTown_Movement_1E85ED: @ 81E85ED
	step_right
	step_right
	step_right
	step_end

LittlerootTown_Movement_1E85F1: @ 81E85F1
	step_left
	step_left
	step_left
	step_end

LittlerootTown_Movement_1E85F5: @ 81E85F5
	step_left
	step_left
	step_end

LittlerootTown_Movement_1E85F8: @ 81E85F8
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

LittlerootTown_Movement_1E85FE: @ 81E85FE
	step_left
	step_left
	step_left
	step_left
	step_end

LittlerootTown_Movement_1E8603: @ 81E8603
	step_down
	step_down
	step_down
	step_down
	step_down
	step_end

LittlerootTown_Movement_1E8609: @ 81E8609
	step_down
	step_down
	step_down
	step_down
	step_down
	step_end

LittlerootTown_Movement_1E860F: @ 81E860F
	step_left
	step_left
	step_left
	step_left
	step_26
	step_end

LittlerootTown_Movement_1E8615: @ 81E8615
	step_left
	step_left
	step_left
	step_left
	step_left
	step_26
	step_end

LittlerootTown_Movement_1E861C: @ 81E861C
	step_left
	step_left
	step_26
	step_end

LittlerootTown_Movement_1E8620: @ 81E8620
	step_left
	step_left
	step_left
	step_26
	step_end

LittlerootTown_Movement_1E8625: @ 81E8625
	step_right
	step_right
	step_right
	step_26
	step_end

LittlerootTown_Movement_1E862A: @ 81E862A
	step_right
	step_right
	step_26
	step_end

LittlerootTown_Movement_1E862E: @ 81E862E
	step_right
	step_right
	step_right
	step_right
	step_right
	step_26
	step_end

LittlerootTown_Movement_1E8635: @ 81E8635
	step_right
	step_right
	step_right
	step_right
	step_26
	step_end

LittlerootTown_Movement_1E863B: @ 81E863B
	step_up
	step_end

LittlerootTown_EventScript_1E863D:: @ 81E863D
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_EventScript_1E8281
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_EventScript_1E828C
	call LittlerootTown_EventScript_1E8693
	applymovement 4, LittlerootTown_Movement_2725A6
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement 4, LittlerootTown_Movement_1E863B
	waitmovement 0
	hideobjectat 4, LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	goto LittlerootTown_EventScript_1E8686
	end

LittlerootTown_EventScript_1E8686:: @ 81E8686
	removeobject 4
	setflag FLAG_SYS_B_DASH
	setvar VAR_0x4050, 4
	release
	end

LittlerootTown_EventScript_1E8693:: @ 81E8693
	msgbox LittlerootTown_Text_1E87F0, 4
	playfanfare MUS_FANFA4
	message LittlerootTown_Text_1E8925
	waitfanfare
	setflag FLAG_0x112
	msgbox LittlerootTown_Text_1E894F, 4
	msgbox LittlerootTown_Text_1E8A03, 4
	closemessage
	delay 30
	return

LittlerootTown_Text_1E86BC: @ 81E86BC
	.string "MOM: {PLAYER}, we’re here, and I hate it!\p"
	.string "I must be a terrible parent to just leave\n"
	.string "you in the moving truck.\p"
	.string "Well, this is LITTLEROOT TOWN.\p"
	.string "Its pretty shit isnt it?\n"
	.string "Well its the only thing DAD could afford\p"
	.string "...\n"
	.string "Just go inside already.\p"
	.string "Im sure it isnt as shit as you think {PLAYER}!\n"
	.string "But its probably still awful.$"

LittlerootTown_Text_1E87E1: @ 81E87E1
	.string "MOM: Wait, {PLAYER}!$"

LittlerootTown_Text_1E87F0: @ 81E87F0
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to PROF. BIRCH?\p"
	.string "Oh! What an ...erm... adorable POKéMON.\n"
	.string "He better be paying you to take care of it.\p"
	.string "Anyway I found your better shoes in a box\n"
	.string "I have no idea why you even took them off \p"
	.string "in the first place!\n"
	.string "... oh right.\p"
	.string "I had probably planned to sell them.$"

LittlerootTown_Text_1E8925: @ 81E8925
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_1E894F: @ 81E894F
	.string "MOM: {PLAYER}, you know how to use them\n"
	.string "already dont you.\p"
	.string "but when you think about tho you only \n"
	.string "need half a B press to run as the second\p"
	.string "half of the press would be releasing \n"
	.string "the B button making you stop running$"

LittlerootTown_Text_1E8A03: @ 81E8A03
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "POKéMON now…\l"
	.string "Your father will be super pissed.\p"
	.string "...\n"
	.string "Actually go kick his ass for me\p"
	.string "He cared more about his pokemon than me!$"

LittlerootTown_Text_1E8ACF: @ 81E8ACF
	.string "If you use a MAC instead of a PC\p"
	.string "that means youre not a real hacker.$"

LittlerootTown_Text_1E8B25: @ 81E8B25
	.string "PROF. BIRCH is such a fucking weeb\n"
	.string "hell stay inside all day watching \l"
	.string "anime and then go out randomly\p"
	.string "to fight pokemon by himself\n"
	.string "I have no idea why hes even a professor$"

LittlerootTown_Text_1E8BB8: @ 81E8BB8
	.string "oh, oh, oh!\p"
	.string "Im oe of those NPCs who spouts,\n"
	.string "useless advice!\p"
	.string "Also I block your progress!$"

LittlerootTown_Text_1E8C07: @ 81E8C07
	.string "Lol go to your rivals house already\n"
	.string "ur such a noob.$"

LittlerootTown_Text_1E8C3A: @ 81E8C3A
	.string "heyo\p"
	.string "That weeaboo professor\n"
	.string "got himself into trouble\p"
	.string "its pretty fucking funny to watch\n"
	.string "like how many times has he learned\p"
	.string "that he doesnt have some bullshit\n"
	.string "anime protagonist powers that he\p"
	.string "can fight pokemon with lol$"

LittlerootTown_Text_1E8CE3: @ 81E8CE3
	.string "lol that weeb took a beating\n"
	.string "Im miffed you didnt let him die.$"

LittlerootTown_Text_1E8D07: @ 81E8D07
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_1E8D32: @ 81E8D32
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can’t be shaded any hue.”\p"
	.string "...wait theres a scribble on the sign\n"
	.string "“GEN3 RUINED POKEMON GENWUN FOREVER!”\p"
	.string "how rude$"

LittlerootTown_Text_1E8D69: @ 81E8D69
	.string "PROF. BIRCH’S POKéMON LAB\n"
	.string "there is a scedule for an anime club\p"
	.string "pinned to the sign as well$"

LittlerootTown_Text_1E8D83: @ 81E8D83
	.string "{PLAYER}’s HOUSE$"

LittlerootTown_Text_1E8D8E: @ 81E8D8E
	.string "PROF. BIRCH’S HOUSE$"

LittlerootTown_Text_1E8DA2: @ 81E8DA2
	.string "PROF. BIRCH: Werr, werr, {PLAYER}-Kun!\n"
	.string "Tat was good work out tere!\p"
	.string "I knew tere was someting speciar\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected tis desu.\p"
	.string "Oh, yes. Do you stirr have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I ave someting to show you.\n"
	.string "Let’s go to Anime Cru-\p"
	.string "I mean my LAB.$"
