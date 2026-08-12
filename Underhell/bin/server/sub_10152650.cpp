void __thiscall sub_10152650(_DWORD *this)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  int *v3; // ecx
  float *v4; // eax
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // ebx
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  _DWORD *v14; // ecx
  bool v15; // zf
  double v16; // st5
  double v17; // st6
  int v18; // eax
  double v19; // st7
  double v20; // st5
  double v21; // rt2
  double v22; // rt1
  double v23; // st5
  double v24; // st6
  double v25; // st7
  float v26; // [esp+0h] [ebp-38h]
  float v27; // [esp+0h] [ebp-38h]
  float v28; // [esp+0h] [ebp-38h]
  float v29; // [esp+0h] [ebp-38h]
  float v30; // [esp+4h] [ebp-34h]
  float v31; // [esp+4h] [ebp-34h]
  float v32; // [esp+4h] [ebp-34h]
  float v33; // [esp+4h] [ebp-34h]
  float v34; // [esp+8h] [ebp-30h]
  float v35[3]; // [esp+14h] [ebp-24h] BYREF
  float v36; // [esp+20h] [ebp-18h]
  float v37; // [esp+24h] [ebp-14h]
  float v38; // [esp+28h] [ebp-10h]
  float v39; // [esp+2Ch] [ebp-Ch]
  float v40; // [esp+30h] [ebp-8h]
  float v41; // [esp+34h] [ebp-4h]

  HIDWORD(v1) = this;
  v2 = this[312];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (this[312] & 0xFFF) + 1], v3[1] == v2 >> 12) && (LODWORD(v1) = *v3) != 0 )
  {
    if ( *(_BYTE *)(HIDWORD(v1) + 1240) )
      *(_DWORD *)(HIDWORD(v1) + 1244) = *(_DWORD *)(v1 + 3292);
    if ( *(float *)(HIDWORD(v1) + 800) > -1.0 )
    {
      sub_100F5A30((_DWORD *)v1, (int)v35, 0, 0);
      if ( (*(_DWORD *)(HIDWORD(v1) + 252) & 0x800) != 0 )
        sub_100DAE60(SHIDWORD(v1));
      v4 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 576))(v1);
      v36 = *(float *)(HIDWORD(v1) + 580) - *v4;
      v37 = *(float *)(HIDWORD(v1) + 584) - v4[1];
      v38 = *(float *)(HIDWORD(v1) + 588) - v4[2];
      off_10689714();
      if ( v35[1] * v37 + v36 * v35[0] + v35[2] * v38 < *(float *)(HIDWORD(v1) + 800) )
        goto LABEL_11;
    }
    if ( (sub_100EA940((int *)v1, 8),
          sub_100EC4A0((int *)HIDWORD(v1), *(float *)(dword_106B31C8 + 12), 0),
          v5 = *(_DWORD *)(v1 + 3296),
          (v5 & 0x20) != 0)
      && *(char *)(HIDWORD(v1) + 248) < 0
      || (v5 & 2) != 0 && (*(_DWORD *)(HIDWORD(v1) + 248) & 0x100) != 0 )
    {
LABEL_11:
      sub_10151FF0(HIDWORD(v1), v1);
    }
    else
    {
      v6 = *(_DWORD *)(HIDWORD(v1) + 1244);
      v7 = 0.0;
      v8 = v6 ^ *(_DWORD *)(v1 + 3292);
      if ( (v8 & 0x400) != 0 )
      {
        v9 = (_DWORD *)(HIDWORD(v1) + 1024);
        if ( (v6 & 0x400) == 0 )
          v9 = (_DWORD *)(HIDWORD(v1) + 880);
        sub_1010DD80(v9, v1, 0.0);
        v7 = 0.0;
      }
      if ( (v8 & 0x200) != 0 )
      {
        v10 = (_DWORD *)(HIDWORD(v1) + 1000);
        if ( (*(_DWORD *)(HIDWORD(v1) + 1244) & 0x200) == 0 )
          v10 = (_DWORD *)(HIDWORD(v1) + 856);
        v30 = v7;
        sub_1010DD80(v10, v1, v30);
        v7 = 0.0;
      }
      if ( (v8 & 8) != 0 )
      {
        v11 = (_DWORD *)(HIDWORD(v1) + 1048);
        if ( (*(_BYTE *)(HIDWORD(v1) + 1244) & 8) == 0 )
          v11 = (_DWORD *)(HIDWORD(v1) + 904);
        v31 = v7;
        sub_1010DD80(v11, v1, v31);
        v7 = 0.0;
      }
      if ( (v8 & 0x10) != 0 )
      {
        v12 = (_DWORD *)(HIDWORD(v1) + 1072);
        if ( (*(_BYTE *)(HIDWORD(v1) + 1244) & 0x10) == 0 )
          v12 = (_DWORD *)(HIDWORD(v1) + 928);
        v32 = v7;
        sub_1010DD80(v12, v1, v32);
        v7 = 0.0;
      }
      if ( (v8 & 1) != 0 )
      {
        v13 = (_DWORD *)(HIDWORD(v1) + 1096);
        if ( (*(_BYTE *)(HIDWORD(v1) + 1244) & 1) == 0 )
          v13 = (_DWORD *)(HIDWORD(v1) + 952);
        v33 = v7;
        sub_1010DD80(v13, v1, v33);
        v7 = 0.0;
      }
      if ( (v8 & 0x800) != 0 )
      {
        v14 = (_DWORD *)(HIDWORD(v1) + 1120);
        if ( (*(_DWORD *)(HIDWORD(v1) + 1244) & 0x800) == 0 )
          v14 = (_DWORD *)(HIDWORD(v1) + 976);
        v34 = v7;
        sub_1010DD80(v14, v1, v34);
        v7 = 0.0;
      }
      *(_DWORD *)(HIDWORD(v1) + 1244) = *(_DWORD *)(v1 + 3292);
      v15 = (*(_DWORD *)(v1 + 3292) & 0x400) == 0;
      v41 = v7;
      v40 = v7;
      v39 = v40;
      v16 = 1.0;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v1 + 3292) & 0x200) != 0 )
        {
          v17 = 1.0;
          v16 = -1.0;
        }
        else
        {
          v16 = v7;
          v17 = 1.0;
        }
      }
      else
      {
        v17 = 1.0;
      }
      v18 = *(_DWORD *)(v1 + 3292);
      if ( (v18 & 8) != 0 )
      {
        v19 = v16;
        v20 = v17;
        v41 = v17;
      }
      else if ( (v18 & 0x10) != 0 )
      {
        v19 = v16;
        v20 = -1.0;
        v41 = -1.0;
      }
      else
      {
        v21 = v16;
        v20 = v7;
        v19 = v21;
      }
      if ( (v18 & 1) != 0 )
        v40 = v17;
      if ( (v18 & 0x800) != 0 )
      {
        v22 = v20;
        v23 = v17;
        v24 = v22;
        v39 = v23;
      }
      else
      {
        v24 = v20;
      }
      if ( !*(_BYTE *)(HIDWORD(v1) + 1240) && v19 == *(float *)(HIDWORD(v1) + 1144) )
      {
        v25 = v24;
      }
      else
      {
        v26 = v19;
        sub_10108AE0((int *)(HIDWORD(v1) + 1144), SLOBYTE(v26), v1, SHIDWORD(v1));
        v25 = v41;
      }
      if ( *(_BYTE *)(HIDWORD(v1) + 1240) || v25 != *(float *)(HIDWORD(v1) + 1168) )
      {
        v27 = v25;
        sub_10108AE0((int *)(HIDWORD(v1) + 1168), SLOBYTE(v27), v1, SHIDWORD(v1));
      }
      if ( *(_BYTE *)(HIDWORD(v1) + 1240) || v40 != *(float *)(HIDWORD(v1) + 1192) )
      {
        v28 = v40;
        sub_10108AE0((int *)(HIDWORD(v1) + 1192), SLOBYTE(v28), v1, SHIDWORD(v1));
      }
      if ( *(_BYTE *)(HIDWORD(v1) + 1240) || v39 != *(float *)(HIDWORD(v1) + 1216) )
      {
        v29 = v39;
        sub_10108AE0((int *)(HIDWORD(v1) + 1216), SLOBYTE(v29), v1, SHIDWORD(v1));
      }
      *(_BYTE *)(HIDWORD(v1) + 1240) = 0;
    }
  }
  else
  {
    sub_100EC4A0((int *)HIDWORD(v1), -1.0, 0);
  }
}
