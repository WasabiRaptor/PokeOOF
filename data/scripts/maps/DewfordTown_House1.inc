DewfordTown_House1_MapScripts:: @ 81FC3CD
	.byte 0

DewfordTown_House1_EventScript_1FC3CE:: @ 81FC3CE
	msgbox DewfordTown_House1_Text_1FC3F3, 2
	end

DewfordTown_House1_EventScript_1FC3D7:: @ 81FC3D7
	msgbox DewfordTown_House1_Text_1FC45B, 2
	end

DewfordTown_House1_EventScript_1FC3E0:: @ 81FC3E0
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox DewfordTown_House1_Text_1FC510, 4
	waitmoncry
	release
	end

DewfordTown_House1_Text_1FC3F3: @ 81FC3F3
	.string "huh.$"

DewfordTown_House1_Text_1FC45B: @ 81FC45B
	.string "huh?$"

DewfordTown_House1_Text_1FC510: @ 81FC510
	.string "ZIGZAGOON: huh.$"

