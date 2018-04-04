DewfordTown_House2_MapScripts:: @ 81FE22D
	.byte 0

DewfordTown_House2_EventScript_1FE22E:: @ 81FE22E
	lock
	faceplayer
	checkflag FLAG_0x121
	goto_eq DewfordTown_House2_EventScript_1FE267
	msgbox DewfordTown_House2_Text_1FE27A, 4
	giveitem_std ITEM_SILK_SCARF
	compare VAR_RESULT, 0
	goto_eq DewfordTown_House2_EventScript_1FE25D
	setflag FLAG_0x121
	release
	end

DewfordTown_House2_EventScript_1FE25D:: @ 81FE25D
	msgbox DewfordTown_House2_Text_1FE356, 4
	release
	end

DewfordTown_House2_EventScript_1FE267:: @ 81FE267
	msgbox DewfordTown_House2_Text_1FE3D1, 4
	release
	end

DewfordTown_House2_EventScript_1FE271:: @ 81FE271
	msgbox DewfordTown_House2_Text_1FE444, 2
	end

DewfordTown_House2_Text_1FE27A: @ 81FE27A
	.string "huh!$"

DewfordTown_House2_Text_1FE356: @ 81FE356
	.string "...huh...$"

DewfordTown_House2_Text_1FE3D1: @ 81FE3D1
	.string "huh!$"

DewfordTown_House2_Text_1FE444: @ 81FE444
	.string "huh.$"

