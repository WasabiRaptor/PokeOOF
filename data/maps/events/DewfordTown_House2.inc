DewfordTown_House2_MapObjects: @ 852DD5C
	object_event 1, MAP_OBJ_GFX_MAN_4, 0, 0, 6, 5, 3, 10, 0, 0, 0, 0, DewfordTown_House2_EventScript_1FE22E, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_BOY_2, 0, 0, 2, 3, 3, 1, 0, 0, 0, 0, DewfordTown_House2_EventScript_1FE271, 0, 0, 0

DewfordTown_House2_MapWarps: @ 852DD8C
	warp_def 3, 8, 0, 4, HUHFORD_TOWN
	warp_def 4, 8, 0, 4, HUHFORD_TOWN

DewfordTown_House2_MapEvents:: @ 852DD9C
	map_events DewfordTown_House2_MapObjects, DewfordTown_House2_MapWarps, 0x0, 0x0

