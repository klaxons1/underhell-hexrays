void __userpurge sub_1015FB60(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  float *v5; // esi
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st7
  int v11; // esi
  double v12; // st3
  double v13; // st7
  double v14; // st6
  int v15; // eax
  float *v16; // eax
  float *v17; // esi
  double v18; // st7
  int v19; // eax
  int v20; // edx
  float *v21; // eax
  int v22; // esi
  double v23; // st6
  double v24; // st7
  int v25; // eax
  float *v26; // eax
  float *v27; // esi
  double v28; // st7
  unsigned __int8 v29; // al
  double v30; // st7
  float *v31; // eax
  float *v32; // ecx
  float v34; // [esp+5Ch] [ebp-38h]
  float v35; // [esp+5Ch] [ebp-38h]
  float v36; // [esp+60h] [ebp-34h]
  float v37; // [esp+60h] [ebp-34h]
  float v38; // [esp+64h] [ebp-30h]
  float v39; // [esp+68h] [ebp-2Ch]
  float v40; // [esp+6Ch] [ebp-28h]
  float v41; // [esp+70h] [ebp-24h]
  float v42; // [esp+74h] [ebp-20h] BYREF
  float v43; // [esp+78h] [ebp-1Ch]
  float v44; // [esp+7Ch] [ebp-18h]
  int v45; // [esp+80h] [ebp-14h]
  float i; // [esp+84h] [ebp-10h]
  int v47; // [esp+88h] [ebp-Ch]
  float *v48; // [esp+8Ch] [ebp-8h] BYREF
  int v49; // [esp+90h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 264)
    || 0.0 != *(float *)(a1 + 240) && *((float *)off_103DC81C + 3) >= (double)*(float *)(a1 + 240) )
  {
    return;
  }
  sub_100F32D0(&v48, (int)"FireTrail");
  v5 = v48;
  v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192, a3, a2);
  sub_100F3060((int)v5, v6);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192);
  v39 = *v7 - *(float *)(a1 + 300);
  v40 = v7[1] - *(float *)(a1 + 304);
  v41 = v7[2] - *(float *)(a1 + 308);
  v8 = off_103EDFEC();
  v9 = (int)(0.25 * v8);
  v49 = v9;
  if ( v9 > 32 )
  {
    v9 = 32;
LABEL_8:
    v49 = v9;
    goto LABEL_9;
  }
  if ( v9 < 1 )
  {
    v9 = 1;
    goto LABEL_8;
  }
LABEL_9:
  v10 = v8 / (double)v49;
  v49 = 1;
  v45 = v9 + 1;
  for ( i = v10; v49 < v45; ++v49 )
  {
    v47 = sub_10115FB0();
    v34 = (double)v47 * 0.000030518509 * 8.0 - 4.0;
    v47 = sub_10115FB0();
    v36 = (double)v47 * 0.000030518509 * 8.0 - 4.0;
    v47 = sub_10115FB0();
    v11 = *(_DWORD *)(a1 + 268);
    v12 = (double)v49;
    v13 = (double)v47 * 0.000030518509 * 8.0 - 4.0 + i * v41 * v12 + *(float *)(a1 + 308);
    v14 = v40 * i * v12 + *(float *)(a1 + 304) + v36;
    v42 = v39 * i * v12 + *(float *)(a1 + 300) + v34;
    v43 = v14;
    v44 = v13;
    v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 6);
    v16 = sub_100F2B60(v11, v11, 60, *(_DWORD *)(a1 + 4 * v15 + 272), &v42);
    v17 = v16;
    if ( v16 )
    {
      v16[11] = 0.0;
      v16[10] = 0.5;
      v47 = sub_10115FB0();
      v17[6] = (double)v47 * 0.000030518509;
      v47 = sub_10115FB0();
      v17[7] = (double)v47 * 0.000030518509;
      v47 = sub_10115FB0();
      v17[8] = (double)v47 * 0.000030518509;
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              32.0,
              64.0);
      v17[6] = v18 * v17[6];
      v17[7] = v18 * v17[7];
      v17[8] = v18 * v17[8];
      v17[8] = v17[8] + 50.0;
      *(_WORD *)((char *)v17 + 53) = 1040;
      v17[12] = NAN;
      v17[9] = 0.0;
      *((_BYTE *)v17 + 52) = 0;
      v17[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -16.0,
                  16.0);
    }
  }
  v45 = sub_10115FB0();
  v35 = (double)v45 * 0.000030518509 * 8.0 - 4.0;
  v45 = sub_10115FB0();
  v37 = (double)v45 * 0.000030518509 * 8.0 - 4.0;
  v19 = sub_10115FB0();
  v20 = *(_DWORD *)(a1 - 1192);
  v45 = v19;
  v38 = (double)v19 * 0.000030518509 * 8.0 - 4.0;
  v21 = (float *)(*(int (__thiscall **)(int))(v20 + 36))(a1 - 1192);
  v22 = *(_DWORD *)(a1 + 268);
  v23 = v21[1] + v37;
  v24 = v21[2] + v38;
  v42 = v35 + *v21;
  v43 = v23;
  v44 = v24;
  v25 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  v26 = sub_100F2B60(v22, v22, 60, *(_DWORD *)(a1 + 4 * v25 + 272), 0);
  v27 = v26;
  if ( v26 )
  {
    v26[11] = 0.0;
    v26[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.056250002,
                0.09375)
            + 0.75;
    v45 = sub_10115FB0();
    v27[6] = (double)v45 * 0.000030518509;
    v45 = sub_10115FB0();
    v27[7] = (double)v45 * 0.000030518509;
    v45 = sub_10115FB0();
    v27[8] = (double)v45 * 0.000030518509;
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            32.0,
            64.0);
    v27[6] = v28 * v27[6];
    v27[7] = v28 * v27[7];
    v27[8] = v28 * v27[8];
    v27[8] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               50.0,
               100.0)
           + v27[8];
    *((_WORD *)v27 + 24) = 31359;
    *((_BYTE *)v27 + 50) = 102;
    v29 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.75,
                  1.25)
              * 16.0);
    v45 = v29;
    *((_BYTE *)v27 + 53) = v29;
    v30 = (double)v45 * 2.5;
    *(_WORD *)((char *)v27 + 51) = 64;
    v45 = (int)v30;
    *((_BYTE *)v27 + 54) = (int)v30;
    v45 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v27[9] = (float)v45;
    v27[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -16.0,
                16.0);
  }
  v31 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192);
  v32 = v48;
  *(float *)(a1 + 300) = *v31;
  *(float *)(a1 + 304) = v31[1];
  *(float *)(a1 + 308) = v31[2];
  if ( v32 )
    sub_100F2FF0((int)v32);
}
