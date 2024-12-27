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
                                    135 	.globl _delay
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
                                    281 ;--------------------------------------------------------
                                    282 ; Stack segment in internal ram
                                    283 ;--------------------------------------------------------
                                    284 	.area	SSEG
      00000A                        285 __start__stack:
      00000A                        286 	.ds	1
                                    287 
                                    288 ;--------------------------------------------------------
                                    289 ; indirectly addressable internal ram data
                                    290 ;--------------------------------------------------------
                                    291 	.area ISEG    (DATA)
                                    292 ;--------------------------------------------------------
                                    293 ; absolute internal ram data
                                    294 ;--------------------------------------------------------
                                    295 	.area IABS    (ABS,DATA)
                                    296 	.area IABS    (ABS,DATA)
                                    297 ;--------------------------------------------------------
                                    298 ; bit data
                                    299 ;--------------------------------------------------------
                                    300 	.area BSEG    (BIT)
                                    301 ;--------------------------------------------------------
                                    302 ; paged external ram data
                                    303 ;--------------------------------------------------------
                                    304 	.area PSEG    (PAG,XDATA)
                                    305 ;--------------------------------------------------------
                                    306 ; external ram data
                                    307 ;--------------------------------------------------------
                                    308 	.area XSEG    (XDATA)
                                    309 ;--------------------------------------------------------
                                    310 ; absolute external ram data
                                    311 ;--------------------------------------------------------
                                    312 	.area XABS    (ABS,XDATA)
                                    313 ;--------------------------------------------------------
                                    314 ; external initialized ram data
                                    315 ;--------------------------------------------------------
                                    316 	.area XISEG   (XDATA)
                                    317 	.area HOME    (CODE)
                                    318 	.area GSINIT0 (CODE)
                                    319 	.area GSINIT1 (CODE)
                                    320 	.area GSINIT2 (CODE)
                                    321 	.area GSINIT3 (CODE)
                                    322 	.area GSINIT4 (CODE)
                                    323 	.area GSINIT5 (CODE)
                                    324 	.area GSINIT  (CODE)
                                    325 	.area GSFINAL (CODE)
                                    326 	.area CSEG    (CODE)
                                    327 ;--------------------------------------------------------
                                    328 ; interrupt vector
                                    329 ;--------------------------------------------------------
                                    330 	.area HOME    (CODE)
      000000                        331 __interrupt_vect:
      000000 02 00 06         [24]  332 	ljmp	__sdcc_gsinit_startup
                                    333 ;--------------------------------------------------------
                                    334 ; global & static initialisations
                                    335 ;--------------------------------------------------------
                                    336 	.area HOME    (CODE)
                                    337 	.area GSINIT  (CODE)
                                    338 	.area GSFINAL (CODE)
                                    339 	.area GSINIT  (CODE)
                                    340 	.globl __sdcc_gsinit_startup
                                    341 	.globl __sdcc_program_startup
                                    342 	.globl __start__stack
                                    343 	.globl __mcs51_genXINIT
                                    344 	.globl __mcs51_genXRAMCLEAR
                                    345 	.globl __mcs51_genRAMCLEAR
                                    346 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  347 	ljmp	__sdcc_program_startup
                                    348 ;--------------------------------------------------------
                                    349 ; Home
                                    350 ;--------------------------------------------------------
                                    351 	.area HOME    (CODE)
                                    352 	.area HOME    (CODE)
      000003                        353 __sdcc_program_startup:
      000003 02 00 80         [24]  354 	ljmp	_main
                                    355 ;	return from main will return to caller
                                    356 ;--------------------------------------------------------
                                    357 ; code
                                    358 ;--------------------------------------------------------
                                    359 	.area CSEG    (CODE)
                                    360 ;------------------------------------------------------------
                                    361 ;Allocation info for local variables in function 'delay'
                                    362 ;------------------------------------------------------------
                                    363 ;i                         Allocated to registers 
                                    364 ;------------------------------------------------------------
                                    365 ;	main.c:3: void delay(int i){
                                    366 ;	-----------------------------------------
                                    367 ;	 function delay
                                    368 ;	-----------------------------------------
      000062                        369 _delay:
                           000007   370 	ar7 = 0x07
                           000006   371 	ar6 = 0x06
                           000005   372 	ar5 = 0x05
                           000004   373 	ar4 = 0x04
                           000003   374 	ar3 = 0x03
                           000002   375 	ar2 = 0x02
                           000001   376 	ar1 = 0x01
                           000000   377 	ar0 = 0x00
      000062 85 82 08         [24]  378 	mov	__mulint_PARM_2,dpl
      000065 85 83 09         [24]  379 	mov	(__mulint_PARM_2 + 1),dph
                                    380 ;	main.c:4: i = i*50000;
      000068 90 C3 50         [24]  381 	mov	dptr,#0xc350
      00006B 12 00 AD         [24]  382 	lcall	__mulint
      00006E AE 82            [24]  383 	mov	r6,dpl
      000070 AF 83            [24]  384 	mov	r7,dph
                                    385 ;	main.c:5: while(i--);
      000072                        386 00101$:
      000072 8E 04            [24]  387 	mov	ar4,r6
      000074 8F 05            [24]  388 	mov	ar5,r7
      000076 1E               [12]  389 	dec	r6
      000077 BE FF 01         [24]  390 	cjne	r6,#0xff,00117$
      00007A 1F               [12]  391 	dec	r7
      00007B                        392 00117$:
      00007B EC               [12]  393 	mov	a,r4
      00007C 4D               [12]  394 	orl	a,r5
      00007D 70 F3            [24]  395 	jnz	00101$
                                    396 ;	main.c:6: return;
                                    397 ;	main.c:7: }
      00007F 22               [24]  398 	ret
                                    399 ;------------------------------------------------------------
                                    400 ;Allocation info for local variables in function 'main'
                                    401 ;------------------------------------------------------------
                                    402 ;x                         Allocated to registers r6 r7 
                                    403 ;------------------------------------------------------------
                                    404 ;	main.c:8: int main(){
                                    405 ;	-----------------------------------------
                                    406 ;	 function main
                                    407 ;	-----------------------------------------
      000080                        408 _main:
                                    409 ;	main.c:9: P2 = 0xFE;
      000080 75 A0 FE         [24]  410 	mov	_P2,#0xfe
                                    411 ;	main.c:10: int x = 0x01;
      000083 7E 01            [12]  412 	mov	r6,#0x01
      000085 7F 00            [12]  413 	mov	r7,#0x00
                                    414 ;	main.c:11: while(1){
      000087                        415 00104$:
                                    416 ;	main.c:12: if( (x&0xff )==0)x=0x01;
      000087 EE               [12]  417 	mov	a,r6
      000088 60 02            [24]  418 	jz	00117$
      00008A 80 04            [24]  419 	sjmp	00102$
      00008C                        420 00117$:
      00008C 7E 01            [12]  421 	mov	r6,#0x01
      00008E 7F 00            [12]  422 	mov	r7,#0x00
      000090                        423 00102$:
                                    424 ;	main.c:13: delay(1);
      000090 90 00 01         [24]  425 	mov	dptr,#0x0001
      000093 C0 07            [24]  426 	push	ar7
      000095 C0 06            [24]  427 	push	ar6
      000097 12 00 62         [24]  428 	lcall	_delay
      00009A D0 06            [24]  429 	pop	ar6
      00009C D0 07            [24]  430 	pop	ar7
                                    431 ;	main.c:14: P2 = x^0xff;
      00009E 8E 05            [24]  432 	mov	ar5,r6
      0000A0 74 FF            [12]  433 	mov	a,#0xff
      0000A2 6D               [12]  434 	xrl	a,r5
      0000A3 F5 A0            [12]  435 	mov	_P2,a
                                    436 ;	main.c:15: x = x<<1;
      0000A5 EE               [12]  437 	mov	a,r6
      0000A6 2E               [12]  438 	add	a,r6
      0000A7 FE               [12]  439 	mov	r6,a
      0000A8 EF               [12]  440 	mov	a,r7
      0000A9 33               [12]  441 	rlc	a
      0000AA FF               [12]  442 	mov	r7,a
                                    443 ;	main.c:17: return 0;
                                    444 ;	main.c:18: }
      0000AB 80 DA            [24]  445 	sjmp	00104$
                                    446 	.area CSEG    (CODE)
                                    447 	.area CONST   (CODE)
                                    448 	.area XINIT   (CODE)
                                    449 	.area CABS    (ABS,CODE)
