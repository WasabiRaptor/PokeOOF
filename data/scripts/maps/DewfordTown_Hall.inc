DewfordTown_Hall_MapScripts:: @ 81FD4CF
	.byte 0

DewfordTown_Hall_EventScript_1FD4D0:: @ 81FD4D0
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	special sub_81229C8
	compare VAR_RESULT, 1
	goto_eq DewfordTown_Hall_EventScript_1FD4EF
	msgbox DewfordTown_Hall_Text_1FD818, 4
	release
	end

DewfordTown_Hall_EventScript_1FD4EF:: @ 81FD4EF
	msgbox DewfordTown_Hall_Text_1FD877, 4
	release
	end

DewfordTown_Hall_EventScript_1FD4F9:: @ 81FD4F9
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FD8ED, 4
	release
	end

DewfordTown_Hall_EventScript_1FD50A:: @ 81FD50A
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	special sub_811EF6C
	msgbox DewfordTown_Hall_Text_1FD948, 5
	compare VAR_RESULT, 1
	goto_eq DewfordTown_Hall_EventScript_1FD533
	compare VAR_RESULT, 0
	goto_eq DewfordTown_Hall_EventScript_1FD53D
	end

DewfordTown_Hall_EventScript_1FD533:: @ 81FD533
	msgbox DewfordTown_Hall_Text_1FD9B3, 4
	release
	end

DewfordTown_Hall_EventScript_1FD53D:: @ 81FD53D
	msgbox DewfordTown_Hall_Text_1FDA06, 4
	release
	end

DewfordTown_Hall_EventScript_1FD547:: @ 81FD547
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDA5C, 4
	closemessage
	applymovement 4, DewfordTown_Hall_Movement_2725A6
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_1FD563:: @ 81FD563
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDA99, 4
	closemessage
	applymovement 5, DewfordTown_Hall_Movement_2725A6
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_1FD57F:: @ 81FD57F
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDAC4, 4
	release
	end

DewfordTown_Hall_EventScript_1FD590:: @ 81FD590
	lockall
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDB89, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD5A0:: @ 81FD5A0
	lockall
	call DewfordTown_Hall_EventScript_271E8B
	special sub_8122A30
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_1FD607
	case 4, DewfordTown_Hall_EventScript_1FD607
	case 1, DewfordTown_Hall_EventScript_1FD611
	case 5, DewfordTown_Hall_EventScript_1FD607
	case 2, DewfordTown_Hall_EventScript_1FD61B
	case 6, DewfordTown_Hall_EventScript_1FD61B
	case 3, DewfordTown_Hall_EventScript_1FD625
	case 7, DewfordTown_Hall_EventScript_1FD61B
	end

DewfordTown_Hall_EventScript_1FD607:: @ 81FD607
	msgbox DewfordTown_Hall_Text_1FDC05, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD611:: @ 81FD611
	msgbox DewfordTown_Hall_Text_1FDC21, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD61B:: @ 81FD61B
	msgbox DewfordTown_Hall_Text_1FDC3C, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD625:: @ 81FD625
	msgbox DewfordTown_Hall_Text_1FDC57, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD62F:: @ 81FD62F
	lockall
	setvar VAR_0x8008, 0
	goto DewfordTown_Hall_EventScript_1FD647
	end

DewfordTown_Hall_EventScript_1FD63B:: @ 81FD63B
	lockall
	setvar VAR_0x8008, 1
	goto DewfordTown_Hall_EventScript_1FD647
	end

DewfordTown_Hall_EventScript_1FD647:: @ 81FD647
	call DewfordTown_Hall_EventScript_271E8B
	special sub_8122A30
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_1FD6AD
	case 1, DewfordTown_Hall_EventScript_1FD6AD
	case 2, DewfordTown_Hall_EventScript_1FD6C9
	case 3, DewfordTown_Hall_EventScript_1FD6C9
	case 4, DewfordTown_Hall_EventScript_1FD6E5
	case 5, DewfordTown_Hall_EventScript_1FD6E5
	case 6, DewfordTown_Hall_EventScript_1FD701
	case 7, DewfordTown_Hall_EventScript_1FD71D
	end

DewfordTown_Hall_EventScript_1FD6AD:: @ 81FD6AD
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDC76, 4
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDCE2, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD6C9:: @ 81FD6C9
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDD95, 4
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDE0E, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD6E5:: @ 81FD6E5
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDE77, 4
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDED8, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD701:: @ 81FD701
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDF72, 4
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDFF1, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD71D:: @ 81FD71D
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FE09A, 4
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FE0F2, 4
	releaseall
	end

DewfordTown_Hall_EventScript_1FD739:: @ 81FD739
	return

DewfordTown_Hall_EventScript_1FD73A:: @ 81FD73A
	applymovement 8, DewfordTown_Hall_Movement_1FD7D6
	waitmovement 0
	compare VAR_0x8008, 0
	goto_eq DewfordTown_Hall_EventScript_1FD75B
	compare VAR_0x8008, 1
	goto_eq DewfordTown_Hall_EventScript_1FD771
	end

DewfordTown_Hall_EventScript_1FD75B:: @ 81FD75B
	compare VAR_FACING, 4
	goto_eq DewfordTown_Hall_EventScript_1FD739
	applymovement 255, DewfordTown_Hall_Movement_2725A8
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD771:: @ 81FD771
	return

DewfordTown_Hall_EventScript_1FD772:: @ 81FD772
	applymovement 7, DewfordTown_Hall_Movement_1FD7D8
	waitmovement 0
	compare VAR_0x8008, 0
	goto_eq DewfordTown_Hall_EventScript_1FD793
	compare VAR_0x8008, 1
	goto_eq DewfordTown_Hall_EventScript_1FD7C0
	end

DewfordTown_Hall_EventScript_1FD793:: @ 81FD793
	compare VAR_FACING, 2
	call_if 1, DewfordTown_Hall_EventScript_1FD7AA
	compare VAR_FACING, 1
	call_if 1, DewfordTown_Hall_EventScript_1FD7B5
	return

DewfordTown_Hall_EventScript_1FD7AA:: @ 81FD7AA
	applymovement 255, DewfordTown_Hall_Movement_2725A6
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD7B5:: @ 81FD7B5
	applymovement 255, DewfordTown_Hall_Movement_2725AA
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD7C0:: @ 81FD7C0
	compare VAR_FACING, 3
	goto_eq DewfordTown_Hall_EventScript_1FD739
	applymovement 255, DewfordTown_Hall_Movement_2725A4
	waitmovement 0
	return

DewfordTown_Hall_Movement_1FD7D6: @ 81FD7D6
	step_1f
	step_end

DewfordTown_Hall_Movement_1FD7D8: @ 81FD7D8
	step_20
	step_end

DewfordTown_Hall_EventScript_1FD7DA:: @ 81FD7DA
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	checkflag FLAG_0x0E6
	goto_eq DewfordTown_Hall_EventScript_1FD80E
	msgbox DewfordTown_Hall_Text_1FE142, 4
	giveitem_std ITEM_TM36
	compare VAR_RESULT, 0
	goto_eq DewfordTown_Hall_EventScript_272054
	setflag FLAG_0x0E6
	release
	end

DewfordTown_Hall_EventScript_1FD80E:: @ 81FD80E
	msgbox DewfordTown_Hall_Text_1FE1ED, 4
	release
	end

DewfordTown_Hall_Text_1FD818: @ 81FD818
	.string "huh.\n"
	.string "“{STR_VAR_1}”!\p"
	.string "huh!\n"
	.string "huh “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_1FD877: @ 81FD877
	.string "huh!?\n"
	.string "“{STR_VAR_1}”!\p"
	.string "huh...\p"
	.string "huh.$"

DewfordTown_Hall_Text_1FD8ED: @ 81FD8ED
	.string "huh?\n"
	.string "“{STR_VAR_1},”\l"
	.string "huh!\p"
	.string "huh...$"

DewfordTown_Hall_Text_1FD948: @ 81FD948
	.string "huh!\n"
	.string "“{STR_VAR_1}” now.\p"
	.string "huh?\n"
	.string "between “{STR_VAR_1}”\l"
	.string "and “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_1FD9B3: @ 81FD9B3
	.string "huh!\n"
	.string "huh!?\p"
	.string "huh?\n"
	.string "heh.$"

DewfordTown_Hall_Text_1FDA06: @ 81FDA06
	.string "huh?!\n"
	.string "huh?!\p"
	.string "huh.\n"
	.string "huh!$"

DewfordTown_Hall_Text_1FDA5C: @ 81FDA5C
	.string "huh...n"
	.string "“{STR_VAR_1}”…\l"
	.string "huh?$"

DewfordTown_Hall_Text_1FDA99: @ 81FDA99
	.string "huh…\p"
	.string "Is “{STR_VAR_1}”\n"
	.string "huh?$"

DewfordTown_Hall_Text_1FDAC4: @ 81FDAC4
	.string "huh\n"
	.string "“{STR_VAR_1}”\l"
	.string "huh.\p"
	.string "huh?\n"
	.string "“{STR_VAR_1}” DOLLS…\p"
	.string "Official “{STR_VAR_1}”\n"
	.string "huh…\p"
	.string "huh\n"
	.string "“{STR_VAR_1}”\l"
	.string "huh.\p"
	.string "Heheh, huh!\n"
	.string "huh!$"

DewfordTown_Hall_Text_1FDB89: @ 81FDB89
	.string "IDENTIFYING GOOD\n"
	.string "“{STR_VAR_1}” &\l"
	.string "BAD “{STR_VAR_1}”…\p"
	.string "THE LINK BETWEEN\n"
	.string "“{STR_VAR_1}” AND\l"
	.string "HUH…\p"
	.string "USEFUL\n"
	.string "“{STR_VAR_1}”…\p"
	.string "It’s neatly jammed with books about\n"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_1FDC05: @ 81FDC05
	.string "“{STR_VAR_1}’S\n"
	.string "HUH!” is the title.$"

DewfordTown_Hall_Text_1FDC21: @ 81FDC21
	.string "“{STR_VAR_1}’S\n"
	.string "HUH?” is the title.$"

DewfordTown_Hall_Text_1FDC3C: @ 81FDC3C
	.string "It’s titled “HUH...\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_1FDC57: @ 81FDC57
	.string "It’s titled “HUH!?\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_1FDC76: @ 81FDC76
	.string "huh “{STR_VAR_1}”!\n"
	.string "Cool, huh?\p"
	.string "huh!\p"
	.string "...huh!\n"
	.string "huh!$"

DewfordTown_Hall_Text_1FDCE2: @ 81FDCE2
	.string "huh ,huh.\p"
	.string "huh!\n"
	.string "“{STR_VAR_1}”\l"
	.string "huh.\p"
	.string "huh…\n"
	.string "huh?\l"
	.string "huh!\p"
	.string "...huh!$"

DewfordTown_Hall_Text_1FDD95: @ 81FDD95
	.string "huh!\n"
	.string "heh “{STR_VAR_1}.”\p"
	.string "“{STR_VAR_1}”\n"
	.string "huh.\p"
	.string "huh!\n"
	.string "… …\p"
	.string "huh!\n"
	.string "{STR_VAR_1}!\p"
	.string "huh!\n"
	.string "{STR_VAR_1}!$"

DewfordTown_Hall_Text_1FDE0E: @ 81FDE0E
	.string "… …\p"
	.string "huh?\n"
	.string "huh!\l"
	.string "huh...\l"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_1FDE77: @ 81FDE77
	.string "huh!\n"
	.string "huh?\l"
	.string "“{STR_VAR_1}” huh...\l"
	.string "huh.$"

DewfordTown_Hall_Text_1FDED8: @ 81FDED8
	.string "huh!\p"
	.string "heh?\n"
	.string "hih\l"
	.string "“{STR_VAR_1}.”\l"
	.string "hoh!\p"
	.string "hah\n"
	.string "hyh“{STR_VAR_1}”!$"

DewfordTown_Hall_Text_1FDF72: @ 81FDF72
	.string "huh…\p"
	.string "huh!\n"
	.string "“{STR_VAR_1}” has\l"
	.string "huh.\l"
	.string "huh?$"

DewfordTown_Hall_Text_1FDFF1: @ 81FDFF1
	.string "huh?\n"
	.string "...huh?\p"
	.string "huh!\n"
	.string "“{STR_VAR_1}”\l"
	.string "huh.\l"
	.string "huh.\p"
	.string "huh\n"
	.string "“{STR_VAR_1}”\l"
	.string "PROFESSOR HUH!$"

DewfordTown_Hall_Text_1FE09A: @ 81FE09A
	.string "huh,\n"
	.string "huh!\l"
	.string "heh “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_1FE0F2: @ 81FE0F2
	.string "hoh!\p"
	.string "heh!\n"
	.string "“{STR_VAR_1}” DUO!\p"
	.string "huh?\n"
	.string "Hahahah!$"

DewfordTown_Hall_Text_1FE142: @ 81FE142
	.string "hah?\n"
	.string "heh.\p"
	.string "hih!\n"
	.string "hoh?\p"
	.string "huh!\n"
	.string "hyh.$"

DewfordTown_Hall_Text_1FE1ED: @ 81FE1ED
	.string "huh.\p"
	.string "huh?\n"
	.string "“{STR_VAR_1}”\l"
	.string "huh.$"

