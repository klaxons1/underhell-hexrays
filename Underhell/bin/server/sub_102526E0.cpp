void __usercall sub_102526E0(int a1@<ecx>, __int64 a2@<esi:edi>)
{
  const char *v2; // eax
  const char *v3; // eax
  double v4; // st7
  float v5; // edx
  int v6; // eax
  float v7; // ecx
  double v8; // st6
  int v9; // eax
  int v10; // edx
  float *v11; // ecx
  int v12; // ebx
  int v13; // ecx
  int v14; // ebx
  double v15; // st7
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  double v20; // st7
  float v21; // [esp+0h] [ebp-44h]
  float v22; // [esp+8h] [ebp-3Ch]
  float v23; // [esp+8h] [ebp-3Ch]
  int v24; // [esp+14h] [ebp-30h] BYREF
  float v25; // [esp+18h] [ebp-2Ch]
  float v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h] BYREF
  float v28; // [esp+24h] [ebp-20h]
  float v29; // [esp+28h] [ebp-1Ch]
  int v30; // [esp+2Ch] [ebp-18h] BYREF
  float v31; // [esp+30h] [ebp-14h]
  float v32; // [esp+34h] [ebp-10h]
  float v33; // [esp+38h] [ebp-Ch]
  float v34; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h] BYREF

  HIDWORD(a2) = a1;
  if ( 0.0 == *(float *)(a1 + 108) )
  {
    v2 = sub_100D6390((_DWORD *)a1);
    DevMsg(2, "TRAIN(%s): Speed is 0\n", v2);
    sub_102521D0(SHIDWORD(a2));
    return;
  }
  if ( !*(_DWORD *)(a1 + 800) )
  {
    v3 = sub_100D6390((_DWORD *)a1);
    DevMsg(2, "TRAIN(%s): Lost path\n", v3);
    sub_102521D0(SHIDWORD(a2));
    *(float *)(HIDWORD(a2) + 108) = 0.0;
    return;
  }
  sub_102522B0((float *)a1, a2);
  v4 = *(float *)(HIDWORD(a2) + 108);
  v5 = *(float *)(HIDWORD(a2) + 724);
  v34 = *(float *)(HIDWORD(a2) + 108);
  v6 = *(int *)(HIDWORD(a2) + 716);
  v7 = *(float *)(HIDWORD(a2) + 720);
  v32 = v5;
  v8 = v5 - *(float *)(HIDWORD(a2) + 864);
  v30 = v6;
  v32 = v8;
  v31 = v7;
  v35 = 0;
  v21 = v4 * 0.1;
  LODWORD(a2) = sub_101ACF40(*(float **)(HIDWORD(a2) + 800), (float *)&v30, v21, 1, &v35);
  if ( *(_BYTE *)(HIDWORD(a2) + 972) && v34 < 0.0 != *(float *)(HIDWORD(a2) + 976) < 0.0 && !(_DWORD)a2 )
    LODWORD(a2) = *(_DWORD *)(HIDWORD(a2) + 800);
  if ( (*(_BYTE *)(HIDWORD(a2) + 236) & 4) != 0 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      if ( (*(_DWORD *)(HIDWORD(a2) + 252) & 0x800) != 0 )
        sub_100DAE60(SHIDWORD(a2));
      sub_1011BC50((float *)(HIDWORD(a2) + 580), (float *)(a2 + 580), 255, 0, 0, 1, 0.1);
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v9 = *(_DWORD *)(a2 + 252);
      v27 = *(int *)(a2 + 580);
      v28 = *(float *)(a2 + 584);
      v29 = *(float *)(a2 + 588) + 32.0;
      if ( (v9 & 0x800) != 0 )
        sub_100DAE60(a2);
      sub_1011BC50((float *)(a2 + 580), (float *)&v27, 255, 0, 0, 1, 0.1);
      v10 = *(_DWORD *)(a2 + 252);
      *(float *)&v27 = 8.0;
      v28 = 8.0;
      v29 = 8.0;
      *(float *)&v24 = -8.0;
      v25 = -8.0;
      v26 = -8.0;
      if ( (v10 & 0x800) != 0 )
        sub_100DAE60(a2);
      sub_1011BB20(a2 + 580, (int)&v24, (int)&v27, 255, 0, 0, 0, 0.1);
    }
    v11 = (float *)v35;
    if ( !v35 )
      goto LABEL_35;
    v12 = v35;
    if ( (*(_DWORD *)(v35 + 252) & 0x800) != 0 )
      sub_100DAE60(v35);
    if ( (*(_DWORD *)(HIDWORD(a2) + 252) & 0x800) != 0 )
      sub_100DAE60(SHIDWORD(a2));
    sub_1011BC50((float *)(HIDWORD(a2) + 580), (float *)(v12 + 580), 0, 255, 0, 1, 0.1);
    v13 = v35;
    v14 = v35;
    if ( (*(_DWORD *)(v35 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v35);
      v13 = v35;
    }
    v24 = *(int *)(v14 + 580);
    v25 = *(float *)(v14 + 584);
    v15 = *(float *)(v14 + 588);
    v16 = v13;
    v26 = v15 + 32.0;
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(v13);
    sub_1011BC50((float *)(v16 + 580), (float *)&v24, 0, 255, 0, 1, 0.1);
    *(float *)&v24 = 8.0;
    v25 = 8.0;
    v26 = 8.0;
    v17 = v35;
    *(float *)&v27 = -8.0;
    v28 = -8.0;
    v29 = -8.0;
    if ( (*(_DWORD *)(v35 + 252) & 0x800) != 0 )
      sub_100DAE60(v35);
    sub_1011BB20(v17 + 580, (int)&v27, (int)&v24, 0, 255, 0, 0, 0.1);
  }
  v11 = (float *)v35;
LABEL_35:
  v32 = *(float *)(HIDWORD(a2) + 864) + v32;
  if ( (_DWORD)a2 )
  {
    sub_1024EEF0(SHIDWORD(a2), (float *)a2, v11, (float *)&v30, COERCE_INT(*(float *)(dword_106B31C8 + 16)));
    sub_10250380((_DWORD *)HIDWORD(a2), (float *)a2, (float *)v35, (int)&v30, *(float *)(dword_106B31C8 + 16));
    if ( (_DWORD)a2 != *(_DWORD *)(HIDWORD(a2) + 800) )
    {
      *(_DWORD *)(HIDWORD(a2) + 800) = a2;
      sub_10250B10(SHIDWORD(a2), a2);
      v18 = sub_101ACC90((_DWORD *)a2);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 248) & 0x10) != 0 )
          sub_1024F5A0((float *)HIDWORD(a2), v18);
      }
    }
    sub_1010DD80((_DWORD *)(HIDWORD(a2) + 948), a2, 0.0);
    sub_100EC3F0((_DWORD *)HIDWORD(a2), (int)sub_102526E0, 0.0, 0);
    sub_100D8290((float *)HIDWORD(a2), 0.5);
    sub_100EC4A0((int *)HIDWORD(a2), *(float *)(dword_106B31C8 + 12), 0);
    *(_DWORD *)(HIDWORD(a2) + 4) = 0;
  }
  else
  {
    sub_102521D0(SHIDWORD(a2));
    *(float *)&v24 = *(float *)&v30 - *(float *)(HIDWORD(a2) + 716);
    v25 = v31 - *(float *)(HIDWORD(a2) + 720);
    v26 = v32 - *(float *)(HIDWORD(a2) + 724);
    sub_100DD790((float *)HIDWORD(a2), (float *)&v24);
    sub_100D7260((float *)HIDWORD(a2), &flt_106F1CB4);
    v22 = *(float *)(HIDWORD(a2) + 596) * *(float *)(HIDWORD(a2) + 596)
        + *(float *)(HIDWORD(a2) + 592) * *(float *)(HIDWORD(a2) + 592)
        + *(float *)(HIDWORD(a2) + 600) * *(float *)(HIDWORD(a2) + 600);
    v19 = off_10689708(v22);
    v33 = v19;
    *(float *)(HIDWORD(a2) + 856) = *(float *)(HIDWORD(a2) + 108);
    *(float *)(HIDWORD(a2) + 108) = 0.0;
    if ( v19 <= 0.0 )
    {
      sub_1024F6D0(SHIDWORD(a2));
    }
    else
    {
      v34 = *(float *)(HIDWORD(a2) + 856);
      v20 = *(float *)(HIDWORD(a2) + 856) / v19;
      *(float *)&v24 = v20 * *(float *)(HIDWORD(a2) + 592);
      v25 = *(float *)(HIDWORD(a2) + 596) * v20;
      v26 = v20 * *(float *)(HIDWORD(a2) + 600);
      sub_100DD790((float *)HIDWORD(a2), (float *)&v24);
      *(_DWORD *)(HIDWORD(a2) + 4) = sub_1024F6D0;
      sub_100EC4A0((int *)HIDWORD(a2), -1.0, 0);
      v23 = v33 / fabs(v34);
      sub_100D8290((float *)HIDWORD(a2), v23);
    }
  }
}
