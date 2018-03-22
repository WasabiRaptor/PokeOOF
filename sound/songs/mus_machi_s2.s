	.include "MPlayDef.s"

	.equ	mus_machi_s2_grp, voicegroup_86816B0
	.equ	mus_machi_s2_pri, 0
	.equ	mus_machi_s2_rev, 0
	.equ	mus_machi_s2_mvl, 127
	.equ	mus_machi_s2_key, 0
	.equ	mus_machi_s2_tbs, 1
	.equ	mus_machi_s2_exg, 0
	.equ	mus_machi_s2_cmp, 1

	.section .rodata
	.global	mus_machi_s2
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_machi_s2_1:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 85*mus_machi_s2_tbs/2
	.byte		VOICE , 56
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N08   , Gs2 , v112
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		N08   , Ds2 
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N04   
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
@ 001   ----------------------------------------
mus_machi_s2_1_001:
	.byte		N08   , Gs2 , v112
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Gs2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N08   , Cn3 
	.byte		N08   , Dn3 
	.byte	W12
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte	PEND
@ 002   ----------------------------------------
mus_machi_s2_1_002:
	.byte		N08   , Gs2 , v112
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		N08   , Ds2 
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N04   
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte	PEND
@ 003   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_001
@ 004   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_002
@ 005   ----------------------------------------
	.byte		N08   , Gs2 , v112
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Gs2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Ds3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Fn3 
	.byte	W12
	.byte		N04   
	.byte		N04   , As3 
	.byte	W12
@ 006   ----------------------------------------
	.byte		N11   , Cs2 
	.byte	W12
	.byte		N05   , En3 , v076
	.byte		N05   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N05   , Gn3 
	.byte	W06
	.byte		N11   , Cn2 , v108
	.byte	W12
	.byte		N05   , Fs3 , v076
	.byte		N05   , As3 
	.byte	W06
	.byte		        Fs3 
	.byte		N05   , As3 
	.byte	W06
	.byte		N11   , As1 , v108
	.byte	W12
	.byte		N05   , Dn3 , v076
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		N11   , Fn2 , v108
	.byte	W12
	.byte		N05   , Dn3 , v076
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte		N05   , Fn3 
	.byte	W06
@ 007   ----------------------------------------
mus_machi_s2_1_007:
	.byte		N11   , Fs2 , v108
	.byte	W12
	.byte		N05   , Dn3 , v076
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		N04   , Gs2 , v108
	.byte		N04   , Dn3 
	.byte		N04   , Fn3 
	.byte	W12
	.byte		        Dn3 
	.byte		N04   , Fn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N08   , Cn3 
	.byte		N08   , Dn3 
	.byte	W12
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte	PEND
@ 008   ----------------------------------------
mus_machi_s2_1_008:
	.byte		N08   , Gs2 , v108
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W12
	.byte		N08   , Ds2 
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N04   
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Fn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte	PEND
@ 009   ----------------------------------------
mus_machi_s2_1_009:
	.byte		N08   , Gs2 , v108
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Gs2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N08   , Cn3 
	.byte		N08   , Dn3 
	.byte	W12
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte	PEND
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 025   ----------------------------------------
	.byte		N08   , Gs2 , v108
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Gs2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Ds3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Ds3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        Fn3 
	.byte	W12
	.byte		N04   
	.byte		N04   , As3 
	.byte	W12
@ 026   ----------------------------------------
	.byte		N11   , Cs2 
	.byte	W12
	.byte		N05   , En3 , v076
	.byte		N05   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N05   , Gn3 
	.byte	W06
	.byte		N11   , Cn2 , v108
	.byte	W12
	.byte		N05   , Fs3 , v076
	.byte		N05   , As3 
	.byte	W06
	.byte		        Fs3 
	.byte		N05   , As3 
	.byte	W06
	.byte		N11   , As1 , v108
	.byte	W12
	.byte		N05   , Dn3 , v076
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte		N05   , Fn3 
	.byte	W06
	.byte		N11   , Fn2 , v108
	.byte	W12
	.byte		N05   , Dn3 , v076
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Dn3 
	.byte		N05   , Fn3 
	.byte	W06
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_007
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_009
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_1_008
@ 039   ----------------------------------------
	.byte		N08   , Gs2 , v108
	.byte	W12
	.byte		N04   , Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Dn3 
	.byte	W06
	.byte		        Gs2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte		N04   , Cn3 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte		N04   , Ds3 
	.byte	W06
	.byte		N08   , Cn3 
	.byte		N08   , Dn3 
	.byte	W12
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W06
	.byte		        En3 
	.byte		N04   , Gn3 
	.byte	W04
	.byte	GOTO
	 .word  mus_machi_s2_1
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_machi_s2_2:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 60
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W24
	.byte		N11   , Bn5 , v112
	.byte	W12
	.byte		        Cn3 
	.byte	W60
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
mus_machi_s2_2_004:
	.byte	W24
	.byte		N11   , Bn5 , v112
	.byte	W12
	.byte		        Cn3 
	.byte	W60
	.byte	PEND
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_2_004
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W24
	.byte		N11   , Bn5 , v112
	.byte	W12
	.byte		        Cn3 
	.byte	W11
	.byte	GOTO
	 .word  mus_machi_s2_2
	.byte	FINE

@**************** Track 3 (Midi-Chn.10) ****************@

mus_machi_s2_3:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 58
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W72
	.byte		N20   , Cs4 , v112
	.byte		N20   , Dn4 
	.byte	W24
@ 001   ----------------------------------------
mus_machi_s2_3_001:
	.byte	W24
	.byte		N05   , Dn3 , v112
	.byte	W06
	.byte		N05   
	.byte	W42
	.byte		N20   , Cs4 
	.byte		N20   , Dn4 
	.byte	W24
	.byte	PEND
@ 002   ----------------------------------------
mus_machi_s2_3_002:
	.byte	W24
	.byte		N20   , Dn3 , v112
	.byte	W48
	.byte		        Cs4 
	.byte		N20   , Dn4 
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 004   ----------------------------------------
mus_machi_s2_3_004:
	.byte	W72
	.byte		N20   , Cs4 , v112
	.byte		N20   , Dn4 
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_001
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_002
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_3_004
@ 039   ----------------------------------------
	.byte	W24
	.byte		N20   , Dn3 , v112
	.byte	W48
	.byte		        Cs4 
	.byte		N20   , Dn4 
	.byte	W20
	.byte	GOTO
	 .word  mus_machi_s2_3
	.byte	FINE

@**************** Track 4 (Midi-Chn.11) ****************@

mus_machi_s2_4:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 56
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
mus_machi_s2_4_001:
	.byte	W48
	.byte		N11   , Gn5 , v092
	.byte	W12
	.byte		N04   , Fn5 
	.byte	W06
	.byte		N05   , Gn5 
	.byte	W06
	.byte		N11   , Dn5 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
mus_machi_s2_4_002:
	.byte	W12
	.byte		N11   , Ds5 , v092
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Gn4 
	.byte	W48
	.byte	PEND
@ 003   ----------------------------------------
mus_machi_s2_4_003:
	.byte		N11   , As4 , v092
	.byte	W48
	.byte		        Gn5 
	.byte	W12
	.byte		N04   , Fn5 
	.byte	W06
	.byte		N05   , Gn5 
	.byte	W06
	.byte		N11   , Dn5 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
mus_machi_s2_4_004:
	.byte	W12
	.byte		N11   , Ds5 , v092
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N05   , Ds5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        Gn5 
	.byte	W48
	.byte	PEND
@ 005   ----------------------------------------
mus_machi_s2_4_005:
	.byte		N11   , Fn5 , v092
	.byte	W24
	.byte		        As5 
	.byte	W24
	.byte		        Cn6 
	.byte	W12
	.byte		N05   , As5 
	.byte	W06
	.byte		        Cn6 
	.byte	W06
	.byte		N11   , Gn5 
	.byte	W12
	.byte		        Fn5 
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
	.byte	W48
	.byte		        Gs5 
	.byte	W12
	.byte		N05   , Gn5 
	.byte	W06
	.byte		        Gs5 
	.byte	W06
	.byte		N11   , Ds5 
	.byte	W12
	.byte		        Cs5 
	.byte	W12
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_4_001
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_4_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_4_003
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_4_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_4_005
@ 026   ----------------------------------------
	.byte	W48
	.byte		N11   , Gs5 , v092
	.byte	W12
	.byte		N05   , Gn5 
	.byte	W06
	.byte		        Gs5 
	.byte	W06
	.byte		N11   , Ds5 
	.byte	W12
	.byte		        Cs5 
	.byte	W11
	.byte	GOTO
	 .word  mus_machi_s2_4
	.byte	FINE

@**************** Track 5 (Midi-Chn.13) ****************@

mus_machi_s2_5:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 47
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte		N20   , Fn4 , v112
	.byte	W96
@ 007   ----------------------------------------
	.byte		        Cs4 
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte		        Fn4 
	.byte	W96
@ 027   ----------------------------------------
	.byte		        Cs4 
	.byte	W20
	.byte	GOTO
	 .word  mus_machi_s2_5
	.byte	FINE

@**************** Track 6 (Midi-Chn.10) ****************@

mus_machi_s2_6:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
mus_machi_s2_6_007:
	.byte	W48
	.byte		N05   , Ds3 , v060
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 008   ----------------------------------------
mus_machi_s2_6_008:
	.byte		N05   , Ds3 , v060
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_008
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_008
@ 011   ----------------------------------------
	.byte		N05   , Ds3 , v060
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W54
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_007
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_008
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_008
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_6_008
@ 031   ----------------------------------------
	.byte		N05   , Ds3 , v060
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W05
	.byte	GOTO
	 .word  mus_machi_s2_6
	.byte	FINE

@**************** Track 7 (Midi-Chn.12) ****************@

mus_machi_s2_7:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 80
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
mus_machi_s2_7_007:
	.byte	W48
	.byte		N05   , Ds5 , v092
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		N05   
	.byte	W18
	.byte	PEND
@ 008   ----------------------------------------
mus_machi_s2_7_008:
	.byte		N05   , Gs4 , v092
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		N05   
	.byte	W18
	.byte		        Cn4 
	.byte	W06
	.byte		N05   
	.byte	W18
	.byte	PEND
@ 009   ----------------------------------------
mus_machi_s2_7_009:
	.byte		N05   , As3 , v092
	.byte	W06
	.byte		N05   
	.byte	W42
	.byte		        Ds5 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		N05   
	.byte	W18
	.byte	PEND
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_008
@ 011   ----------------------------------------
mus_machi_s2_7_011:
	.byte		N05   , As3 , v092
	.byte	W06
	.byte		N05   
	.byte	W90
	.byte	PEND
@ 012   ----------------------------------------
mus_machi_s2_7_012:
	.byte	W72
	.byte		N05   , Ds4 , v092
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte	PEND
@ 013   ----------------------------------------
mus_machi_s2_7_013:
	.byte		N11   , Dn5 , v092
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		N05   , Cn5 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        Fn4 
	.byte	W54
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_012
@ 015   ----------------------------------------
mus_machi_s2_7_015:
	.byte		N05   , Ds5 , v092
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		N11   , Gn5 
	.byte	W12
	.byte		        As4 
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gn4 
	.byte	W24
	.byte	PEND
@ 016   ----------------------------------------
mus_machi_s2_7_016:
	.byte		N11   , Gs4 , v092
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        As4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte	PEND
@ 017   ----------------------------------------
	.byte	W06
	.byte		N05   , Ds4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        Gn5 
	.byte	W54
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_007
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_008
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_009
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_008
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_011
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_012
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_013
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_012
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_015
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_7_016
@ 037   ----------------------------------------
	.byte	W06
	.byte		N05   , Ds4 , v092
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        Gn5 
	.byte	W05
	.byte	GOTO
	 .word  mus_machi_s2_7
	.byte	FINE

@**************** Track 8 (Midi-Chn.14) ****************@

mus_machi_s2_8:
	.byte	KEYSH , mus_machi_s2_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 81
	.byte		VOL   , 127*mus_machi_s2_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
mus_machi_s2_8_011:
	.byte	W30
	.byte		N05   , Dn3 , v112
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
mus_machi_s2_8_012:
	.byte	W12
	.byte		N11   , Ds3 , v112
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        As2 
	.byte	W24
	.byte		N05   , Ds4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte	PEND
@ 013   ----------------------------------------
mus_machi_s2_8_013:
	.byte		N11   , Dn5 , v112
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		N05   , Cn5 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N05   , Fn3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
mus_machi_s2_8_014:
	.byte	W12
	.byte		N11   , Ds3 , v112
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		N05   , Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		N11   , Gn3 
	.byte	W24
	.byte		N05   , Ds4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte	PEND
@ 015   ----------------------------------------
mus_machi_s2_8_015:
	.byte		N05   , Ds5 , v112
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		N11   , Gn5 
	.byte	W12
	.byte		        As4 
	.byte	W24
	.byte		        As3 
	.byte	W12
	.byte		N05   , Gs3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
mus_machi_s2_8_016:
	.byte		N11   , Fn3 , v112
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        As3 
	.byte	W12
	.byte		N05   , Gs3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte	PEND
@ 017   ----------------------------------------
mus_machi_s2_8_017:
	.byte	W06
	.byte		N05   , Ds4 , v112
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        Gn5 
	.byte	W06
	.byte		N11   , As3 
	.byte	W12
	.byte		N05   , Gs3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte	PEND
@ 018   ----------------------------------------
	.byte		        Fn3 
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Ds3 
	.byte	W48
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_011
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_012
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_013
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_014
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_015
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_016
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_machi_s2_8_017
@ 038   ----------------------------------------
	.byte		N11   , Fn3 , v112
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Ds3 
	.byte	W11
	.byte	GOTO
	 .word  mus_machi_s2_8
	.byte	FINE

@******************************************************@
	.align	2

mus_machi_s2:
	.byte	8	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_machi_s2_pri	@ Priority
	.byte	mus_machi_s2_rev	@ Reverb.

	.word	mus_machi_s2_grp

	.word	mus_machi_s2_1
	.word	mus_machi_s2_2
	.word	mus_machi_s2_3
	.word	mus_machi_s2_4
	.word	mus_machi_s2_5
	.word	mus_machi_s2_6
	.word	mus_machi_s2_7
	.word	mus_machi_s2_8

	.end
