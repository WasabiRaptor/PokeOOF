MossdeepCity_PokemonCenter_1F_MapScripts:: @ 822223F
	map_script 3, MossdeepCity_PokemonCenter_1F_MapScript1_22224A
	map_script 5, MossdeepCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

MossdeepCity_PokemonCenter_1F_MapScript1_22224A: @ 822224A
	setrespawn 9
	end

MossdeepCity_PokemonCenter_1F_EventScript_22224E:: @ 822224E
	setvar VAR_0x800B, 1
	call MossdeepCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

MossdeepCity_PokemonCenter_1F_EventScript_22225C:: @ 822225C
	msgbox MossdeepCity_PokemonCenter_1F_Text_22226E, 2
	end

MossdeepCity_PokemonCenter_1F_EventScript_222265:: @ 8222265
	msgbox MossdeepCity_PokemonCenter_1F_Text_2222D9, 2
	end

MossdeepCity_PokemonCenter_1F_Text_22226E: @ 822226E
	.string "Did you hear that "Despacito 2"\n"	         
	.string "was confirmed by NASA-X.\p"
	.string "The song will be featuring \n"
	.string "Rick Astley, Elon Musk and PewDiePie.\p"
	.string "I'm soo hyped!$"

MossdeepCity_PokemonCenter_1F_Text_2222D9: @ 82222D9
	.string "I'm such a huge fan of Elon Musk,\n"
	.string "he did a lot of good to this world.\p"
	.string "He even owns NASA and they are\n"
	.string " planning to soon go into space\p"
	.string " to save space from Deoxys.\l"
	.string "The destructive powers of Groudon\n"
	.string " and Kyogre reached space and\p"
	.string " caused a disturbation within the"\n
	.string " Deoxys's home planet.\l"
	.string "The Deoxys population are very\n"
	.string " outraged and already targeted this\p"
	.string " city and are sending Psychic\n"
	.string " Boost from space.\l"
	.string "Thankfully Elon Musk and NASA \p"
	.string "have send out their Dark Type \n"
	.string " Pokemon to destroy their attacks.$"
	
	
