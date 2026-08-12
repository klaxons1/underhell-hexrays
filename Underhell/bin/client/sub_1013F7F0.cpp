int __userpurge sub_1013F7F0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // esi
  double v5; // st7
  int v6; // edi
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st4
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  _BYTE v21[12]; // [esp+ECh] [ebp-40h] BYREF
  float v22; // [esp+F8h] [ebp-34h]
  float v23; // [esp+FCh] [ebp-30h]
  int v24; // [esp+100h] [ebp-2Ch]
  int v25; // [esp+104h] [ebp-28h] BYREF
  int v26; // [esp+108h] [ebp-24h] BYREF
  int v27; // [esp+10Ch] [ebp-20h] BYREF
  int v28; // [esp+110h] [ebp-1Ch] BYREF
  float v29; // [esp+114h] [ebp-18h]
  int v30; // [esp+118h] [ebp-14h]
  int v31; // [esp+11Ch] [ebp-10h]
  int v32; // [esp+120h] [ebp-Ch]
  int v33; // [esp+124h] [ebp-8h]
  int v34; // [esp+128h] [ebp-4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  if ( !*(_DWORD *)(a1 + 4) )
    *(_DWORD *)(a1 + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 312))(v4);
  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)v4 + 156))(v4, &v26, &v25, &v27, &v28);
  v24 = *(int *)(a1 + 20);
  if ( 1.0 == *(float *)(a1 + 24) )
    v5 = 10000.0;
  else
    v5 = *(float *)(a1 + 24);
  v29 = v5;
  v6 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD, int))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "dev/lumcompare",
         "Other textures",
         1,
         0,
         a2);
  v7 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v6 + 44))(v6, "$C0_X", 0, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v24);
  v8 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v6 + 44))(v6, "$C0_Y", 0, 1);
  (*(void (__thiscall **)(int, float))(*(_DWORD *)v8 + 12))(v8, COERCE_FLOAT(LODWORD(v29)));
  v9 = (double)v26;
  v24 = v26 + v27 - 1;
  v33 = (int)(v9 + ((double)v24 - v9) * *(float *)(a1 + 28));
  v10 = (int)(v9 + ((double)v24 - v9) * *(float *)(a1 + 36));
  v11 = (double)v25;
  v29 = *(float *)&v10;
  v24 = v25 + v28 - 1;
  v34 = (int)(v11 + ((double)v24 - v11) * *(float *)(a1 + 32));
  v30 = (int)(v11 + ((double)v24 - v11) * *(float *)(a1 + 40));
  if ( byte_1043A87B )
  {
    v12 = (1.0 - *(float *)(dword_1043B004 + 44)) * 0.5;
    v13 = 1.0 - *(float *)(dword_1043B04C + 44);
  }
  else
  {
    v12 = (1.0 - *(float *)(dword_1043AF74 + 44)) * 0.5;
    v13 = 1.0 - *(float *)(dword_1043AFBC + 44);
  }
  v31 = LODWORD(v29) - v33 + 1;
  LODWORD(v23) = (int)(v12 * (double)v31);
  v32 = v30 - v34 + 1;
  *(float *)&v24 = 1.0;
  v14 = *(_DWORD *)dword_1047C97C;
  LODWORD(v22) = (int)(0.5 * v13 * (double)v32);
  if ( (*(int (__thiscall **)(int))(v14 + 200))(dword_1047C97C) == 2 )
    v24 = *(int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 612))(v4, v21);
  v15 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v6 + 44))(v6, "$C0_Z", 0, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 12))(v15, v24);
  *(_DWORD *)(a1 + 12) = v31 * v32;
  v16 = *(_DWORD *)v4;
  if ( *(_DWORD *)(dword_1043AB3C + 48) )
  {
    (*(void (__thiscall **)(int, int))(v16 + 492))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 464))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 476))(v4, 3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 480))(v4, 8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 468))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 472))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 484))(v4, 1);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(v16 + 320))(v4, *(_DWORD *)(a1 + 4));
  }
  v33 += LODWORD(v23);
  v34 += LODWORD(v22);
  v30 -= LODWORD(v22);
  LODWORD(v29) -= LODWORD(v23);
  v22 = (float)v30;
  v23 = (float)SLODWORD(v29);
  v32 = v30 - v34 + 1;
  *(float *)&v24 = (float)v34;
  v17 = LODWORD(v29) - v33 + 1;
  v29 = (float)v33;
  v31 = v17;
  (*(void (__thiscall **)(int, int, int, int, int, int, float, int, float, float, int, int, _DWORD, int))(*(_DWORD *)v4 + 412))(
    v4,
    v6,
    v33,
    v34,
    v17,
    v32,
    COERCE_FLOAT(LODWORD(v29)),
    v24,
    COERCE_FLOAT(LODWORD(v23)),
    COERCE_FLOAT(LODWORD(v22)),
    v27,
    v28,
    0,
    1);
  if ( *(_DWORD *)(dword_1043AB3C + 48) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 320))(v4, *(_DWORD *)(a1 + 4));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 464))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 488))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 476))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 480))(v4, 3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 468))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 472))(v4, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 484))(v4, 1);
    v18 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "dev/no_pixel_write",
            "Other textures",
            1,
            0);
    (*(void (__thiscall **)(int, int, int, int, int, int, float, int, float, float, int, int, _DWORD, int, int))(*(_DWORD *)v4 + 412))(
      v4,
      v18,
      v33,
      v34,
      v31,
      v32,
      COERCE_FLOAT(LODWORD(v29)),
      v24,
      COERCE_FLOAT(LODWORD(v23)),
      COERCE_FLOAT(LODWORD(v22)),
      v27,
      v28,
      0,
      1,
      1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 464))(v4, 0);
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 324))(v4, *(_DWORD *)(a1 + 4));
  v19 = *(_DWORD *)a1 == 0;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)a1 = !v19 + 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
}
