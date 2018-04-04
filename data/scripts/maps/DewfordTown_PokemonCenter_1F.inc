DewfordTown_PokemonCenter_1F_MapScripts:: @ 81FC523
	map_script 3, DewfordTown_PokemonCenter_1F_MapScript1_1FC52E
	map_script 5, DewfordTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

DewfordTown_PokemonCenter_1F_MapScript1_1FC52E: @ 81FC52E
	setrespawn 15
	call DewfordTown_PokemonCenter_1F_EventScript_2718DE
	end

DewfordTown_PokemonCenter_1F_EventScript_1FC537:: @ 81FC537
	setvar VAR_0x800B, 1
	call DewfordTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_1FC545:: @ 81FC545
	msgbox DewfordTown_PokemonCenter_1F_Text_1FC557, 2
	end

DewfordTown_PokemonCenter_1F_EventScript_1FC54E:: @ 81FC54E
	msgbox DewfordTown_PokemonCenter_1F_Text_1FC5AE, 2
	end

DewfordTown_PokemonCenter_1F_Text_1FC557: @ 81FC557
	.string "huh.$"

DewfordTown_PokemonCenter_1F_Text_1FC5AE: @ 81FC5AE
	.string "...huh?$"

