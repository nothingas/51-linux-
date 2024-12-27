                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _CY
                                     13 	.globl _AC
                                     14 	.globl _F0
                                     15 	.globl _RS1
                                     16 	.globl _RS0
                                     17 	.globl _OV
                                     18 	.globl _FL
                                     19 	.globl _P
                                     20 	.globl _TF2
                                     21 	.globl _EXF2
                                     22 	.globl _RCLK
                                     23 	.globl _TCLK
                                     24 	.globl _EXEN2
                                     25 	.globl _TR2
                                     26 	.globl _C_T2
                                     27 	.globl _CP_RL2
                                     28 	.globl _T2CON_7
                                     29 	.globl _T2CON_6
                                     30 	.globl _T2CON_5
                                     31 	.globl _T2CON_4
                                     32 	.globl _T2CON_3
                                     33 	.globl _T2CON_2
                                     34 	.globl _T2CON_1
                                     35 	.globl _T2CON_0
                                     36 	.globl _PT2
                                     37 	.globl _PS
                                     38 	.globl _PT1
                                     39 	.globl _PX1
                                     40 	.globl _PT0
                                     41 	.globl _PX0
                                     42 	.globl _RD
                                     43 	.globl _WR
                                     44 	.globl _T1
                                     45 	.globl _T0
                                     46 	.globl _INT1
                                     47 	.globl _INT0
                                     48 	.globl _TXD
                                     49 	.globl _RXD
                                     50 	.globl _P3_7
                                     51 	.globl _P3_6
                                     52 	.globl _P3_5
                                     53 	.globl _P3_4
                                     54 	.globl _P3_3
                                     55 	.globl _P3_2
                                     56 	.globl _P3_1
                                     57 	.globl _P3_0
                                     58 	.globl _EA
                                     59 	.globl _ET2
                                     60 	.globl _ES
                                     61 	.globl _ET1
                                     62 	.globl _EX1
                                     63 	.globl _ET0
                                     64 	.globl _EX0
                                     65 	.globl _P2_7
                                     66 	.globl _P2_6
                                     67 	.globl _P2_5
                                     68 	.globl _P2_4
                                     69 	.globl _P2_3
                                     70 	.globl _P2_2
                                     71 	.globl _P2_1
                                     72 	.globl _P2_0
                                     73 	.globl _SM0
                                     74 	.globl _SM1
                                     75 	.globl _SM2
                                     76 	.globl _REN
                                     77 	.globl _TB8
                                     78 	.globl _RB8
                                     79 	.globl _TI
                                     80 	.globl _RI
                                     81 	.globl _T2EX
                                     82 	.globl _T2
                                     83 	.globl _P1_7
                                     84 	.globl _P1_6
                                     85 	.globl _P1_5
                                     86 	.globl _P1_4
                                     87 	.globl _P1_3
                                     88 	.globl _P1_2
                                     89 	.globl _P1_1
                                     90 	.globl _P1_0
                                     91 	.globl _TF1
                                     92 	.globl _TR1
                                     93 	.globl _TF0
                                     94 	.globl _TR0
                                     95 	.globl _IE1
                                     96 	.globl _IT1
                                     97 	.globl _IE0
                                     98 	.globl _IT0
                                     99 	.globl _P0_7
                                    100 	.globl _P0_6
                                    101 	.globl _P0_5
                                    102 	.globl _P0_4
                                    103 	.globl _P0_3
                                    104 	.globl _P0_2
                                    105 	.globl _P0_1
                                    106 	.globl _P0_0
                                    107 	.globl _B
                                    108 	.globl _A
                                    109 	.globl _ACC
                                    110 	.globl _PSW
                                    111 	.globl _TH2
                                    112 	.globl _TL2
                                    113 	.globl _RCAP2H
                                    114 	.globl _RCAP2L
                                    115 	.globl _T2MOD
                                    116 	.globl _T2CON
                                    117 	.globl _IP
                                    118 	.globl _P3
                                    119 	.globl _IE
                                    120 	.globl _P2
                                    121 	.globl _SBUF
                                    122 	.globl _SCON
                                    123 	.globl _P1
                                    124 	.globl _TH1
                                    125 	.globl _TH0
                                    126 	.globl _TL1
                                    127 	.globl _TL0
                                    128 	.globl _TMOD
                                    129 	.globl _TCON
                                    130 	.globl _PCON
                                    131 	.globl _DPH
                                    132 	.globl _DPL
                                    133 	.globl _SP
                                    134 	.globl _P0
                                    135 	.globl _Delay
                                    136 ;--------------------------------------------------------
                                    137 ; special function registers
                                    138 ;--------------------------------------------------------
                                    139 	.area RSEG    (ABS,DATA)
      000000                        140 	.org 0x0000
                           000080   141 _P0	=	0x0080
                           000081   142 _SP	=	0x0081
                           000082   143 _DPL	=	0x0082
                           000083   144 _DPH	=	0x0083
                           000087   145 _PCON	=	0x0087
                           000088   146 _TCON	=	0x0088
                           000089   147 _TMOD	=	0x0089
                           00008A   148 _TL0	=	0x008a
                           00008B   149 _TL1	=	0x008b
                           00008C   150 _TH0	=	0x008c
                           00008D   151 _TH1	=	0x008d
                           000090   152 _P1	=	0x0090
                           000098   153 _SCON	=	0x0098
                           000099   154 _SBUF	=	0x0099
                           0000A0   155 _P2	=	0x00a0
                           0000A8   156 _IE	=	0x00a8
                           0000B0   157 _P3	=	0x00b0
                           0000B8   158 _IP	=	0x00b8
                           0000C8   159 _T2CON	=	0x00c8
                           0000C9   160 _T2MOD	=	0x00c9
                           0000CA   161 _RCAP2L	=	0x00ca
                           0000CB   162 _RCAP2H	=	0x00cb
                           0000CC   163 _TL2	=	0x00cc
                           0000CD   164 _TH2	=	0x00cd
                           0000D0   165 _PSW	=	0x00d0
                           0000E0   166 _ACC	=	0x00e0
                           0000E0   167 _A	=	0x00e0
                           0000F0   168 _B	=	0x00f0
                                    169 ;--------------------------------------------------------
                                    170 ; special function bits
                                    171 ;--------------------------------------------------------
                                    172 	.area RSEG    (ABS,DATA)
      000000                        173 	.org 0x0000
                           000080   174 _P0_0	=	0x0080
                           000081   175 _P0_1	=	0x0081
                           000082   176 _P0_2	=	0x0082
                           000083   177 _P0_3	=	0x0083
                           000084   178 _P0_4	=	0x0084
                           000085   179 _P0_5	=	0x0085
                           000086   180 _P0_6	=	0x0086
                           000087   181 _P0_7	=	0x0087
                           000088   182 _IT0	=	0x0088
                           000089   183 _IE0	=	0x0089
                           00008A   184 _IT1	=	0x008a
                           00008B   185 _IE1	=	0x008b
                           00008C   186 _TR0	=	0x008c
                           00008D   187 _TF0	=	0x008d
                           00008E   188 _TR1	=	0x008e
                           00008F   189 _TF1	=	0x008f
                           000090   190 _P1_0	=	0x0090
                           000091   191 _P1_1	=	0x0091
                           000092   192 _P1_2	=	0x0092
                           000093   193 _P1_3	=	0x0093
                           000094   194 _P1_4	=	0x0094
                           000095   195 _P1_5	=	0x0095
                           000096   196 _P1_6	=	0x0096
                           000097   197 _P1_7	=	0x0097
                           000090   198 _T2	=	0x0090
                           000091   199 _T2EX	=	0x0091
                           000098   200 _RI	=	0x0098
                           000099   201 _TI	=	0x0099
                           00009A   202 _RB8	=	0x009a
                           00009B   203 _TB8	=	0x009b
                           00009C   204 _REN	=	0x009c
                           00009D   205 _SM2	=	0x009d
                           00009E   206 _SM1	=	0x009e
                           00009F   207 _SM0	=	0x009f
                           0000A0   208 _P2_0	=	0x00a0
                           0000A1   209 _P2_1	=	0x00a1
                           0000A2   210 _P2_2	=	0x00a2
                           0000A3   211 _P2_3	=	0x00a3
                           0000A4   212 _P2_4	=	0x00a4
                           0000A5   213 _P2_5	=	0x00a5
                           0000A6   214 _P2_6	=	0x00a6
                           0000A7   215 _P2_7	=	0x00a7
                           0000A8   216 _EX0	=	0x00a8
                           0000A9   217 _ET0	=	0x00a9
                           0000AA   218 _EX1	=	0x00aa
                           0000AB   219 _ET1	=	0x00ab
                           0000AC   220 _ES	=	0x00ac
                           0000AD   221 _ET2	=	0x00ad
                           0000AF   222 _EA	=	0x00af
                           0000B0   223 _P3_0	=	0x00b0
                           0000B1   224 _P3_1	=	0x00b1
                           0000B2   225 _P3_2	=	0x00b2
                           0000B3   226 _P3_3	=	0x00b3
                           0000B4   227 _P3_4	=	0x00b4
                           0000B5   228 _P3_5	=	0x00b5
                           0000B6   229 _P3_6	=	0x00b6
                           0000B7   230 _P3_7	=	0x00b7
                           0000B0   231 _RXD	=	0x00b0
                           0000B1   232 _TXD	=	0x00b1
                           0000B2   233 _INT0	=	0x00b2
                           0000B3   234 _INT1	=	0x00b3
                           0000B4   235 _T0	=	0x00b4
                           0000B5   236 _T1	=	0x00b5
                           0000B6   237 _WR	=	0x00b6
                           0000B7   238 _RD	=	0x00b7
                           0000B8   239 _PX0	=	0x00b8
                           0000B9   240 _PT0	=	0x00b9
                           0000BA   241 _PX1	=	0x00ba
                           0000BB   242 _PT1	=	0x00bb
                           0000BC   243 _PS	=	0x00bc
                           0000BD   244 _PT2	=	0x00bd
                           0000C8   245 _T2CON_0	=	0x00c8
                           0000C9   246 _T2CON_1	=	0x00c9
                           0000CA   247 _T2CON_2	=	0x00ca
                           0000CB   248 _T2CON_3	=	0x00cb
                           0000CC   249 _T2CON_4	=	0x00cc
                           0000CD   250 _T2CON_5	=	0x00cd
                           0000CE   251 _T2CON_6	=	0x00ce
                           0000CF   252 _T2CON_7	=	0x00cf
                           0000C8   253 _CP_RL2	=	0x00c8
                           0000C9   254 _C_T2	=	0x00c9
                           0000CA   255 _TR2	=	0x00ca
                           0000CB   256 _EXEN2	=	0x00cb
                           0000CC   257 _TCLK	=	0x00cc
                           0000CD   258 _RCLK	=	0x00cd
                           0000CE   259 _EXF2	=	0x00ce
                           0000CF   260 _TF2	=	0x00cf
                           0000D0   261 _P	=	0x00d0
                           0000D1   262 _FL	=	0x00d1
                           0000D2   263 _OV	=	0x00d2
                           0000D3   264 _RS0	=	0x00d3
                           0000D4   265 _RS1	=	0x00d4
                           0000D5   266 _F0	=	0x00d5
                           0000D6   267 _AC	=	0x00d6
                           0000D7   268 _CY	=	0x00d7
                                    269 ;--------------------------------------------------------
                                    270 ; overlayable register banks
                                    271 ;--------------------------------------------------------
                                    272 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        273 	.ds 8
                                    274 ;--------------------------------------------------------
                                    275 ; internal ram data
                                    276 ;--------------------------------------------------------
                                    277 	.area DSEG    (DATA)
                                    278 ;--------------------------------------------------------
                                    279 ; overlayable items in internal ram
                                    280 ;--------------------------------------------------------
                                    281 	.area	OSEG    (OVR,DATA)
                                    282 ;--------------------------------------------------------
                                    283 ; Stack segment in internal ram
                                    284 ;--------------------------------------------------------
                                    285 	.area	SSEG
      000008                        286 __start__stack:
      000008                        287 	.ds	1
                                    288 
                                    289 ;--------------------------------------------------------
                                    290 ; indirectly addressable internal ram data
                                    291 ;--------------------------------------------------------
                                    292 	.area ISEG    (DATA)
                                    293 ;--------------------------------------------------------
                                    294 ; absolute internal ram data
                                    295 ;--------------------------------------------------------
                                    296 	.area IABS    (ABS,DATA)
                                    297 	.area IABS    (ABS,DATA)
                                    298 ;--------------------------------------------------------
                                    299 ; bit data
                                    300 ;--------------------------------------------------------
                                    301 	.area BSEG    (BIT)
                                    302 ;--------------------------------------------------------
                                    303 ; paged external ram data
                                    304 ;--------------------------------------------------------
                                    305 	.area PSEG    (PAG,XDATA)
                                    306 ;--------------------------------------------------------
                                    307 ; external ram data
                                    308 ;--------------------------------------------------------
                                    309 	.area XSEG    (XDATA)
                                    310 ;--------------------------------------------------------
                                    311 ; absolute external ram data
                                    312 ;--------------------------------------------------------
                                    313 	.area XABS    (ABS,XDATA)
                                    314 ;--------------------------------------------------------
                                    315 ; external initialized ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area XISEG   (XDATA)
                                    318 	.area HOME    (CODE)
                                    319 	.area GSINIT0 (CODE)
                                    320 	.area GSINIT1 (CODE)
                                    321 	.area GSINIT2 (CODE)
                                    322 	.area GSINIT3 (CODE)
                                    323 	.area GSINIT4 (CODE)
                                    324 	.area GSINIT5 (CODE)
                                    325 	.area GSINIT  (CODE)
                                    326 	.area GSFINAL (CODE)
                                    327 	.area CSEG    (CODE)
                                    328 ;--------------------------------------------------------
                                    329 ; interrupt vector
                                    330 ;--------------------------------------------------------
                                    331 	.area HOME    (CODE)
      000000                        332 __interrupt_vect:
      000000 02 00 06         [24]  333 	ljmp	__sdcc_gsinit_startup
                                    334 ;--------------------------------------------------------
                                    335 ; global & static initialisations
                                    336 ;--------------------------------------------------------
                                    337 	.area HOME    (CODE)
                                    338 	.area GSINIT  (CODE)
                                    339 	.area GSFINAL (CODE)
                                    340 	.area GSINIT  (CODE)
                                    341 	.globl __sdcc_gsinit_startup
                                    342 	.globl __sdcc_program_startup
                                    343 	.globl __start__stack
                                    344 	.globl __mcs51_genXINIT
                                    345 	.globl __mcs51_genXRAMCLEAR
                                    346 	.globl __mcs51_genRAMCLEAR
                                    347 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  348 	ljmp	__sdcc_program_startup
                                    349 ;--------------------------------------------------------
                                    350 ; Home
                                    351 ;--------------------------------------------------------
                                    352 	.area HOME    (CODE)
                                    353 	.area HOME    (CODE)
      000003                        354 __sdcc_program_startup:
      000003 02 00 62         [24]  355 	ljmp	_main
                                    356 ;	return from main will return to caller
                                    357 ;--------------------------------------------------------
                                    358 ; code
                                    359 ;--------------------------------------------------------
                                    360 	.area CSEG    (CODE)
                                    361 ;------------------------------------------------------------
                                    362 ;Allocation info for local variables in function 'main'
                                    363 ;------------------------------------------------------------
                                    364 ;	main.c:3: void main(){
                                    365 ;	-----------------------------------------
                                    366 ;	 function main
                                    367 ;	-----------------------------------------
      000062                        368 _main:
                           000007   369 	ar7 = 0x07
                           000006   370 	ar6 = 0x06
                           000005   371 	ar5 = 0x05
                           000004   372 	ar4 = 0x04
                           000003   373 	ar3 = 0x03
                           000002   374 	ar2 = 0x02
                           000001   375 	ar1 = 0x01
                           000000   376 	ar0 = 0x00
                                    377 ;	main.c:4: while(1){
      000062                        378 00102$:
                                    379 ;	main.c:6: P2 = 0xFF;   
      000062 75 A0 FF         [24]  380 	mov	_P2,#0xff
                                    381 ;	main.c:7: Delay(500);
      000065 90 01 F4         [24]  382 	mov	dptr,#0x01f4
      000068 12 00 76         [24]  383 	lcall	_Delay
                                    384 ;	main.c:8: P2 = 0xFE;
      00006B 75 A0 FE         [24]  385 	mov	_P2,#0xfe
                                    386 ;	main.c:10: Delay(500); 
      00006E 90 01 F4         [24]  387 	mov	dptr,#0x01f4
      000071 12 00 76         [24]  388 	lcall	_Delay
                                    389 ;	main.c:12: }
      000074 80 EC            [24]  390 	sjmp	00102$
                                    391 ;------------------------------------------------------------
                                    392 ;Allocation info for local variables in function 'Delay'
                                    393 ;------------------------------------------------------------
                                    394 ;ms                        Allocated to registers 
                                    395 ;a                         Allocated to registers r6 r7 
                                    396 ;b                         Allocated to registers r4 r5 
                                    397 ;------------------------------------------------------------
                                    398 ;	main.c:14: void Delay(unsigned int ms){
                                    399 ;	-----------------------------------------
                                    400 ;	 function Delay
                                    401 ;	-----------------------------------------
      000076                        402 _Delay:
      000076 AE 82            [24]  403 	mov	r6,dpl
      000078 AF 83            [24]  404 	mov	r7,dph
                                    405 ;	main.c:16: for(a = ms; a > 0; a--){
      00007A                        406 00106$:
      00007A EE               [12]  407 	mov	a,r6
      00007B 4F               [12]  408 	orl	a,r7
      00007C 60 14            [24]  409 	jz	00108$
                                    410 ;	main.c:17: for(b = 100; b > 0; b--);
      00007E 7C 64            [12]  411 	mov	r4,#0x64
      000080 7D 00            [12]  412 	mov	r5,#0x00
      000082                        413 00104$:
      000082 1C               [12]  414 	dec	r4
      000083 BC FF 01         [24]  415 	cjne	r4,#0xff,00133$
      000086 1D               [12]  416 	dec	r5
      000087                        417 00133$:
      000087 EC               [12]  418 	mov	a,r4
      000088 4D               [12]  419 	orl	a,r5
      000089 70 F7            [24]  420 	jnz	00104$
                                    421 ;	main.c:16: for(a = ms; a > 0; a--){
      00008B 1E               [12]  422 	dec	r6
      00008C BE FF 01         [24]  423 	cjne	r6,#0xff,00135$
      00008F 1F               [12]  424 	dec	r7
      000090                        425 00135$:
      000090 80 E8            [24]  426 	sjmp	00106$
      000092                        427 00108$:
                                    428 ;	main.c:19: }
      000092 22               [24]  429 	ret
                                    430 	.area CSEG    (CODE)
                                    431 	.area CONST   (CODE)
                                    432 	.area XINIT   (CODE)
                                    433 	.area CABS    (ABS,CODE)
