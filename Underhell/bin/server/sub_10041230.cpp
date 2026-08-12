float *__thiscall sub_10041230(float *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  float **v9; // eax
  int v11; // [esp+Ch] [ebp-4h]

  sub_100CC980();
  *((_DWORD *)this + 526) = &CAI_DefMovementSink::`vftable';
  *(_DWORD *)this = &CAI_BaseNPC::`vftable';
  *((_DWORD *)this + 526) = &CAI_BaseNPC::`vftable';
  if ( this != (float *)-2192 )
  {
    this[548] = 0.0;
    this[549] = 0.0;
    this[550] = 0.0;
    this[551] = 0.0;
    this[552] = 0.0;
    this[553] = 0.0;
    this[554] = 0.0;
    this[555] = 0.0;
  }
  if ( this != (float *)-2224 )
  {
    this[556] = 0.0;
    this[557] = 0.0;
    this[558] = 0.0;
    this[559] = 0.0;
    this[560] = 0.0;
    this[561] = 0.0;
    this[562] = 0.0;
    this[563] = 0.0;
  }
  if ( this != (float *)-2256 )
  {
    this[564] = 0.0;
    this[565] = 0.0;
    this[566] = 0.0;
    this[567] = 0.0;
    this[568] = 0.0;
    this[569] = 0.0;
    this[570] = 0.0;
    this[571] = 0.0;
  }
  if ( this != (float *)-2288 )
  {
    this[572] = 0.0;
    this[573] = 0.0;
    this[574] = 0.0;
    this[575] = 0.0;
    this[576] = 0.0;
    this[577] = 0.0;
    this[578] = 0.0;
    this[579] = 0.0;
  }
  this[603] = NAN;
  this[605] = NAN;
  this[606] = -1.0;
  *((_BYTE *)this + 2428) = 0;
  this[608] = 0.0;
  this[609] = 0.0;
  this[610] = -1.0;
  this[613] = -1.0;
  this[617] = 0.0;
  this[618] = 0.0;
  this[619] = 0.0;
  this[620] = -1.0;
  this[621] = NAN;
  this[626] = NAN;
  this[627] = NAN;
  this[631] = 0.0;
  this[632] = 0.0;
  this[633] = 0.0;
  this[634] = 0.0;
  this[635] = 0.0;
  this[641] = NAN;
  this[642] = 0.0;
  *((_DWORD *)this + 643) = 4;
  this[644] = 0.0;
  v2 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 80);
  *((_DWORD *)this + 642) = v2;
  this[645] = 0.0;
  *((_DWORD *)this + 646) = v2;
  this[652] = NAN;
  this[654] = -1.0;
  this[666] = NAN;
  this[672] = NAN;
  this[680] = NAN;
  sub_100B8BB0(this + 690);
  sub_1007C7F0(this + 708);
  this[722] = NAN;
  this[727] = NAN;
  this[733] = NAN;
  this[739] = NAN;
  this[736] = 0.0;
  *((_DWORD *)this + 740) = 5;
  this[745] = NAN;
  this[742] = 0.0;
  *((_DWORD *)this + 746) = 5;
  this[751] = NAN;
  this[748] = 0.0;
  *((_DWORD *)this + 752) = 5;
  this[757] = NAN;
  this[754] = 0.0;
  *((_DWORD *)this + 758) = 5;
  this[763] = NAN;
  this[760] = 0.0;
  *((_DWORD *)this + 764) = 5;
  this[769] = NAN;
  this[766] = 0.0;
  *((_DWORD *)this + 770) = 5;
  this[775] = NAN;
  this[772] = 0.0;
  *((_DWORD *)this + 776) = 5;
  this[781] = NAN;
  this[778] = 0.0;
  *((_DWORD *)this + 782) = 5;
  this[787] = NAN;
  this[784] = 0.0;
  *((_DWORD *)this + 788) = 5;
  this[793] = NAN;
  this[790] = 0.0;
  *((_DWORD *)this + 794) = 5;
  this[799] = NAN;
  this[796] = 0.0;
  *((_DWORD *)this + 800) = 5;
  this[805] = NAN;
  this[802] = 0.0;
  *((_DWORD *)this + 806) = 5;
  this[811] = NAN;
  this[808] = 0.0;
  *((_DWORD *)this + 812) = 5;
  this[817] = NAN;
  this[814] = 0.0;
  *((_DWORD *)this + 818) = 5;
  this[823] = NAN;
  this[820] = 0.0;
  *((_DWORD *)this + 824) = 5;
  this[829] = NAN;
  this[826] = 0.0;
  *((_DWORD *)this + 830) = 5;
  this[835] = NAN;
  this[832] = 0.0;
  *((_DWORD *)this + 836) = 5;
  this[841] = NAN;
  this[838] = 0.0;
  *((_DWORD *)this + 842) = 5;
  this[847] = NAN;
  this[844] = 0.0;
  *((_DWORD *)this + 848) = 5;
  this[853] = NAN;
  this[850] = 0.0;
  *((_DWORD *)this + 854) = 5;
  this[859] = NAN;
  this[856] = 0.0;
  *((_DWORD *)this + 860) = 5;
  this[865] = NAN;
  this[862] = 0.0;
  *((_DWORD *)this + 866) = 5;
  this[871] = NAN;
  this[868] = 0.0;
  *((_DWORD *)this + 872) = 5;
  this[877] = NAN;
  this[874] = 0.0;
  *((_DWORD *)this + 878) = 5;
  this[883] = NAN;
  this[880] = 0.0;
  *((_DWORD *)this + 884) = 5;
  this[677] = -60.0;
  this[529] = 0.0;
  *((_BYTE *)this + 3549) = 0;
  this[530] = 0.0;
  this[527] = 0.0;
  *((_BYTE *)this + 2112) = 0;
  this[583] = -1.0;
  this[651] = 0.0;
  this[639] = -1.0;
  this[650] = 0.0;
  this[647] = 0.0;
  this[601] = 0.0;
  this[681] = 0.0;
  this[649] = 0.0;
  this[682] = 0.0;
  this[648] = 0.0;
  this[685] = 0.0;
  this[531] = 0.0;
  this[896] = 0.0;
  this[532] = 0.0;
  this[658] = 0.0;
  *((_BYTE *)this + 2940) = 0;
  this[667] = 0.0;
  this[637] = 0.0;
  this[668] = 0.0;
  this[419] = 0.0;
  this[701] = NAN;
  this[725] = 0.0;
  v3 = sub_10184390(60);
  if ( v3 )
    v4 = sub_10077A30(v3);
  else
    v4 = 0;
  *((_DWORD *)this + 678) = v4;
  this[659] = 0.94999999;
  *((_BYTE *)this + 2756) = 0;
  this[605] = NAN;
  this[640] = 0.0;
  this[699] = 0.0;
  *((_BYTE *)this + 3544) = 1;
  *((_BYTE *)this + 2812) = 0;
  *((_BYTE *)this + 2904) = 0;
  *((_BYTE *)this + 2680) = 0;
  v5 = (_DWORD *)sub_10184390(52);
  if ( v5 )
  {
    *v5 = -1;
    v5[1] = -1;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 602) = v5;
  v5[4] = 0;
  this[889] = 0.0;
  this[888] = 0.0;
  this[890] = 0.0;
  this[891] = 0.0;
  v6 = dword_10690E04;
  dword_105FE110 = 0;
  v11 = dword_10690E04;
  if ( dword_10690E04 + 1 > dword_10690DFC )
  {
    sub_102ABFC0(dword_10690E04 - dword_10690DFC + 1);
    v6 = dword_10690E04;
  }
  v7 = v6 + 1;
  dword_10690E08 = dword_10690DF8;
  v8 = v7 - v11 - 1;
  dword_10690E04 = v7;
  if ( v8 > 0 )
  {
    memcpy((void *)(dword_10690DF8 + 4 * v11 + 4), (const void *)(dword_10690DF8 + 4 * v11), 4 * v8);
    v7 = dword_10690E04;
  }
  v9 = (float **)(dword_10690DF8 + 4 * v11);
  if ( v9 )
  {
    *v9 = this;
    v7 = dword_10690E04;
  }
  if ( v7 == 1 )
  {
    dword_1069041C = 0;
    flt_105FE1B4 = -1.0;
    dword_10690424 = 0;
    flt_10690420 = -1.0;
  }
  this[543] = NAN;
  *((_BYTE *)this + 2176) = 1;
  sub_100EBE30(9);
  return this;
}
