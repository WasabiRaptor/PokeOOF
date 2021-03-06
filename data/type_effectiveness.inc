@ format: attacking type, defending type, damage multiplier
@ the multiplier is a (decimal) fixed-point number:
@	 20 is ×2.0
@	 05 is ×0.5
@	 00 is ×0

gTypeEffectiveness:: @ 831ACE8
	.byte   TYPE_NORMAL,	 TYPE_ROCK,  5
	.byte   TYPE_NORMAL,	TYPE_METAL,  5
	.byte	 TYPE_LIT,	 TYPE_LIT,  5
	.byte	 TYPE_LIT,	TYPE_WATER,  5
	.byte	 TYPE_LIT,	TYPE_WEED, 20
	.byte	 TYPE_LIT,	  TYPE_FRIDGE, 20
	.byte	 TYPE_LIT,	  TYPE_BUG, 20
	.byte	 TYPE_LIT,	 TYPE_ROCK,  5
	.byte	 TYPE_LIT,   TYPE_DRAGON,  5
	.byte	 TYPE_LIT,	TYPE_METAL, 20
	.byte	TYPE_WATER,	 TYPE_LIT, 20
	.byte	TYPE_WATER,	TYPE_WEED,  5
	.byte	TYPE_WATER,   TYPE_GROUND, 20
	.byte	TYPE_WATER,	 TYPE_ROCK, 20
	.byte	TYPE_WATER,   TYPE_DRAGON,  5
	.byte TYPE_AC/DC,	TYPE_WATER, 20
	.byte TYPE_AC/DC, TYPE_ELECTRIC,  5
	.byte TYPE_AC/DC,	TYPE_WEED,  5
	.byte TYPE_AC/DC,   TYPE_GROUND,  0
	.byte TYPE_AC/DC,   TYPE_BIRD, 20
	.byte TYPE_AC/DC,   TYPE_DRAGON,  5
	.byte	TYPE_WEED,	 TYPE_LIT,  5
	.byte	TYPE_WEED,	TYPE_WATER, 20
	.byte	TYPE_WEED,	TYPE_WEED,  5
	.byte	TYPE_WEED,   TYPE_POISON,  5
	.byte	TYPE_WEED,   TYPE_GROUND, 20
	.byte	TYPE_WEED,   TYPE_BIRD,  5
	.byte	TYPE_WEED,	  TYPE_BUG,  5
	.byte	TYPE_WEED,	 TYPE_ROCK, 20
	.byte	  TYPE_FRIDGE,	TYPE_WATER,  5
	.byte	  TYPE_FRIDGE,	TYPE_WEED, 20
	.byte	  TYPE_FRIDGE,	  TYPE_FRIDGE,  5
	.byte	  TYPE_FRIDGE,   TYPE_GROUND, 20
	.byte	  TYPE_FRIDGE,   TYPE_BIRD, 20
	.byte	  TYPE_FRIDGE,   TYPE_DRAGON, 20
	.byte	  TYPE_FRIDGE,	TYPE_METAL,  5
	.byte	  TYPE_FRIDGE,	 TYPE_LIT,  5
	.byte TYPE_FIGHTING,   TYPE_NORMAL, 20
	.byte TYPE_FIGHTING,	  TYPE_FRIDGE, 20
	.byte TYPE_FIGHTING,   TYPE_POISON,  5
	.byte TYPE_FIGHTING,   TYPE_BIRD,  5
	.byte TYPE_FIGHTING,  TYPE_PSYCHIC,  5
	.byte TYPE_FIGHTING,	 TYPE_ROCK, 20
	.byte TYPE_FIGHTING,	 TYPE_EVIL, 20
	.byte TYPE_FIGHTING,	TYPE_STEEL, 20
	.byte TYPE_FIGHTING,	TYPE_FAIRY,  5
	.byte   TYPE_POISON,	TYPE_WEED, 20
	.byte   TYPE_POISON,   TYPE_POISON,  5
	.byte   TYPE_POISON,   TYPE_GROUND,  5
	.byte   TYPE_POISON,	 TYPE_ROCK,  5
	.byte   TYPE_POISON,	TYPE_GHOST,  5
	.byte   TYPE_POISON,	TYPE_METAL,  0
	.byte   TYPE_POISON,    TYPE_FAIRY, 20
	.byte   TYPE_GROUND,	 TYPE_LIT, 20
	.byte   TYPE_GROUND, TYPE_AC/DC, 20
	.byte   TYPE_GROUND,	TYPE_WEED,  5
	.byte   TYPE_GROUND,   TYPE_POISON, 20
	.byte   TYPE_GROUND,   TYPE_BIRD,  0
	.byte   TYPE_GROUND,	  TYPE_BUG,  5
	.byte   TYPE_GROUND,	 TYPE_ROCK, 20
	.byte   TYPE_GROUND,	TYPE_METAL, 20
	.byte   TYPE_BIRD, TYPE_AC/DC,  5
	.byte   TYPE_BIRD,	TYPE_WEED, 20
	.byte   TYPE_BIRD, TYPE_FIGHTING, 20
	.byte   TYPE_BIRD,	  TYPE_BUG, 20
	.byte   TYPE_BIRD,	 TYPE_ROCK,  5
	.byte   TYPE_BIRD,	TYPE_METAL,  5
	.byte  TYPE_PSYCHIC, TYPE_FIGHTING, 20
	.byte  TYPE_PSYCHIC,   TYPE_POISON, 20
	.byte  TYPE_PSYCHIC,  TYPE_PSYCHIC,  5
	.byte  TYPE_PSYCHIC,	 TYPE_EVIL,  0
	.byte	  TYPE_BUG,	 TYPE_LIT,  5
	.byte	  TYPE_BUG,	TYPE_WEED, 20
	.byte	  TYPE_BUG, TYPE_FIGHTING,  5
	.byte	  TYPE_BUG,   TYPE_POISON,  5
	.byte	  TYPE_BUG,   TYPE_BIRD,  5
	.byte	  TYPE_BUG,  TYPE_PSYCHIC, 20
	.byte	  TYPE_BUG,	TYPE_GHOST,  5
	.byte	  TYPE_BUG,	 TYPE_EVIL, 20
	.byte	  TYPE_BUG,	TYPE_METAL,  5
	.byte	 TYPE_ROCK,	 TYPE_LIT, 20
	.byte	 TYPE_ROCK,	  TYPE_FRIDGE, 20
	.byte	 TYPE_ROCK, TYPE_FIGHTING,  5
	.byte	 TYPE_ROCK,   TYPE_GROUND,  5
	.byte	 TYPE_ROCK,   TYPE_BIRD, 20
	.byte	 TYPE_ROCK,	  TYPE_BUG, 20
	.byte	 TYPE_ROCK,	TYPE_METAL,  5
	.byte	TYPE_GHOST,   TYPE_NORMAL,  0
	.byte	TYPE_GHOST,  TYPE_PSYCHIC, 20
	.byte	TYPE_GHOST,	TYPE_METAL,  5
	.byte	TYPE_GHOST,	TYPE_GHOST, 20
	.byte   TYPE_DRAGON,   TYPE_DRAGON, 20
	.byte   TYPE_DRAGON,	TYPE_METAL,  5
	.byte   TYPE_DRAGON,    TYPE_FAIRY, 0
	.byte	 TYPE_EVIL, TYPE_FIGHTING,  5
	.byte	 TYPE_EVIL,  TYPE_PSYCHIC, 20
	.byte	 TYPE_EVIL,	TYPE_GHOST, 20
	.byte	 TYPE_EVIL,	 TYPE_EVIL,  5
	.byte	 TYPE_EVIL,	TYPE_FAIRY,  5
	.byte	TYPE_METAL,	 TYPE_LIT,  5
	.byte	TYPE_METAL,	TYPE_WATER,  5
	.byte	TYPE_METAL, TYPE_AC/DC,  5
	.byte	TYPE_METAL,	  TYPE_FRIDGE, 20
	.byte	TYPE_METAL,	 TYPE_ROCK, 20
	.byte	TYPE_METAL,	TYPE_METAL,  5
	.byte	TYPE_METAL,     TYPE_FAIRY, 20
	.byte	TYPE_FAIRY,	TYPE_LIT,  5
	.byte   TYPE_FAIRY,     TYPE_FIGHTING, 20
	.byte   TYPE_FAIRY,     TYPE_POISON,  5
	.byte   TYPE_FAIRY,     TYPE_EVIL, 20
	.byte   TYPE_FAIRY,     TYPE_DRAGON, 20
	.byte   TYPE_FAIRY,     TYPE_METAL,  5
	.byte		  0xFE,		  0xFE,  0
	.byte   TYPE_NORMAL,	TYPE_GHOST,  0
	.byte TYPE_FIGHTING,	TYPE_GHOST,  0
	.byte		  0xFF,		  0xFF,  0
