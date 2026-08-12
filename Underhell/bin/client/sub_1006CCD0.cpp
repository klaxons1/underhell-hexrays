int __userpurge sub_1006CCD0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // al
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st5
  unsigned __int8 v13; // al
  double v14; // rt0
  double v15; // st5
  double v16; // st7
  double v17; // rt0
  int v18; // eax
  double v19; // st7
  int v20; // eax
  const char *v21; // eax
  int v22; // eax
  int v23; // eax
  double v24; // st7
  int v25; // eax
  const char *v26; // eax
  int v27; // eax
  bool v28; // zf
  int v29; // ecx
  float v32; // [esp+4h] [ebp-Ch]
  float v33; // [esp+8h] [ebp-8h]
  float v34; // [esp+Ch] [ebp-4h]

  sub_1003CD40((_DWORD *)a1, a3);
  v4 = *(_BYTE *)(a1 + 81);
  v5 = *(_BYTE *)(a1 + 82);
  v6 = v4;
  if ( v4 <= v5 )
    v6 = *(_BYTE *)(a1 + 82);
  v7 = *(_BYTE *)(a1 + 80);
  if ( v7 <= v6 )
  {
    v8 = *(_BYTE *)(a1 + 81);
    if ( v4 <= v5 )
      v8 = *(_BYTE *)(a1 + 82);
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 80);
  }
  v9 = (double)v8;
  if ( v9 > 0.0 )
  {
    v11 = (double)v7 / v9;
    v12 = (double)v4 / v9;
    v10 = (double)v5 / v9;
  }
  else
  {
    v10 = 1.0;
    v11 = 1.0;
    v12 = 1.0;
  }
  v13 = *(_BYTE *)(a1 + 1520);
  if ( v13 || *(_BYTE *)(a1 + 1521) || *(_BYTE *)(a1 + 1522) )
  {
    v32 = (double)v13 * 0.0039215689;
    v33 = (double)*(unsigned __int8 *)(a1 + 1521) * 0.0039215689;
    v34 = 0.0039215689 * (double)*(unsigned __int8 *)(a1 + 1522);
    v17 = v12;
    v15 = v10;
    v16 = v17;
  }
  else
  {
    v14 = v12;
    v32 = v11;
    v33 = v12;
    v15 = v10;
    v16 = v14;
    v34 = v15;
  }
  *(float *)(a1 + 1204) = *(float *)(a1 + 1532);
  *(float *)(a1 + 1208) = *(float *)(a1 + 1536);
  *(float *)(a1 + 1212) = *(float *)(a1 + 1540);
  *(_DWORD *)(a1 + 1320) = 1;
  *(float *)(a1 + 1224) = v11;
  *(float *)(a1 + 1228) = v16;
  *(float *)(a1 + 1232) = v15;
  v18 = *(_DWORD *)(a1 + 1548);
  v19 = (double)*(int *)(a1 + 1524);
  *(float *)(a1 + 1236) = v19;
  *(float *)(a1 + 1240) = v19;
  if ( v18 && (v20 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v18)) != 0 )
    v21 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v20);
  else
    v21 = Locale;
  v22 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD, int))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          v21,
          "Other textures",
          1,
          0,
          a2);
  *(float *)(a1 + 1324) = 0.050000001;
  *(_DWORD *)(a1 + 1244) = v22;
  *(float *)(a1 + 1372) = *(float *)(a1 + 1532);
  *(float *)(a1 + 1376) = *(float *)(a1 + 1536);
  *(float *)(a1 + 1380) = *(float *)(a1 + 1540);
  *(_DWORD *)(a1 + 1488) = 1;
  *(float *)(a1 + 1392) = v32;
  *(float *)(a1 + 1396) = v33;
  *(float *)(a1 + 1400) = v34;
  v23 = *(_DWORD *)(a1 + 1552);
  v24 = (double)*(int *)(a1 + 1528);
  *(float *)(a1 + 1404) = v24;
  *(float *)(a1 + 1408) = v24;
  if ( v23 && (v25 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v23)) != 0 )
    v26 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v25);
  else
    v26 = Locale;
  v27 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          v26,
          "Other textures",
          1);
  v28 = *(_BYTE *)(a1 + 1544) == 0;
  *(float *)(a1 + 1492) = 0.050000001;
  *(_BYTE *)(a1 + 1516) = 1;
  *(_DWORD *)(a1 + 1412) = v27;
  v29 = a1 + 1184;
  if ( v28 )
  {
    sub_100AF950(v29);
    return sub_100AF950(a1 + 1352);
  }
  else
  {
    sub_100B0E30(v29);
    return sub_100B0E30(a1 + 1352);
  }
}
