void __cdecl sub_101A8C80(float *a1, float *a2, float a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  float *v13; // eax
  double v14; // st7
  char v15; // al
  int i; // ebx
  float *v17; // eax
  double v18; // st7
  char v19; // al
  float v20; // [esp+7Ch] [ebp-4Ch]
  float v21; // [esp+7Ch] [ebp-4Ch]
  float v22; // [esp+7Ch] [ebp-4Ch]
  float v23; // [esp+80h] [ebp-48h]
  float v24; // [esp+80h] [ebp-48h]
  float v25; // [esp+80h] [ebp-48h]
  float v26; // [esp+88h] [ebp-40h]
  float v27; // [esp+88h] [ebp-40h]
  float v28; // [esp+88h] [ebp-40h]
  float v29; // [esp+8Ch] [ebp-3Ch]
  float v30; // [esp+8Ch] [ebp-3Ch]
  float v31; // [esp+8Ch] [ebp-3Ch]
  int v32; // [esp+94h] [ebp-34h]
  int v33; // [esp+94h] [ebp-34h]
  int v34; // [esp+94h] [ebp-34h]
  int v35; // [esp+98h] [ebp-30h]
  int v36; // [esp+98h] [ebp-30h]
  int v37; // [esp+98h] [ebp-30h]
  int v38; // [esp+9Ch] [ebp-2Ch]
  int v39; // [esp+9Ch] [ebp-2Ch]
  int v40; // [esp+9Ch] [ebp-2Ch]
  int v41; // [esp+A0h] [ebp-28h]
  int v42; // [esp+A0h] [ebp-28h]
  int v43; // [esp+A0h] [ebp-28h]
  int v44; // [esp+A4h] [ebp-24h]
  int v45; // [esp+A4h] [ebp-24h]
  int v46; // [esp+A4h] [ebp-24h]
  int v47; // [esp+A8h] [ebp-20h]
  int v48; // [esp+A8h] [ebp-20h]
  int v49; // [esp+A8h] [ebp-20h]
  int v50; // [esp+ACh] [ebp-1Ch]
  int v51; // [esp+ACh] [ebp-1Ch]
  int v52; // [esp+ACh] [ebp-1Ch]
  float v53; // [esp+ACh] [ebp-1Ch]
  int v54; // [esp+B0h] [ebp-18h]
  int v55; // [esp+B0h] [ebp-18h]
  int v56; // [esp+B0h] [ebp-18h]
  float v57; // [esp+B0h] [ebp-18h]
  int v58; // [esp+B4h] [ebp-14h]
  int v59; // [esp+B4h] [ebp-14h]
  int v60; // [esp+B4h] [ebp-14h]
  float v61; // [esp+B4h] [ebp-14h]
  float v62; // [esp+B8h] [ebp-10h]
  int v63; // [esp+B8h] [ebp-10h]
  int v64; // [esp+B8h] [ebp-10h]
  int v65; // [esp+B8h] [ebp-10h]
  int v66; // [esp+BCh] [ebp-Ch]
  float v67; // [esp+BCh] [ebp-Ch]
  float v68; // [esp+BCh] [ebp-Ch]
  int v69; // [esp+C0h] [ebp-8h]
  int v70; // [esp+C0h] [ebp-8h]
  float *v71; // [esp+C4h] [ebp-4h] BYREF

  v3 = (int)a2;
  v4 = 0;
  v69 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 3);
  if ( v69 > 0 )
  {
    v62 = a3 * 150.0;
    do
    {
      v26 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
      v29 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
      v5 = sub_10115FB0();
      *(float *)&v50 = *a1 + v26;
      *(float *)&v54 = v29 + a1[1];
      *(float *)&v58 = (double)v5 * 0.000030518509 * 32.0 - 16.0 + a1[2];
      *(float *)&v41 = (double)sub_10115FB0() * 0.000030518509 * 64.0 - 32.0;
      *(float *)&v44 = (double)sub_10115FB0() * 0.000030518509 * 64.0 - 32.0;
      *(float *)&v47 = (double)sub_10115FB0() * 0.000030518509 * 64.0 - 32.0;
      v20 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
      v23 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
      v66 = sub_10115FB0();
      *(float *)&v32 = (*a2 + v20) * v62;
      *(float *)&v35 = (v23 + a2[1]) * v62;
      *(float *)&v38 = ((double)v66 * 0.000030518509 * 1.6 - 0.80000001 + a2[2]) * v62;
      sub_101A8BD0(*(&off_103ECF50 + v4++), v50, v54, v58, v32, v35, v38, v41, v44, v47, 2.0);
    }
    while ( v4 < v69 );
  }
  v6 = 0;
  v70 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 3);
  if ( v70 > 0 )
  {
    v67 = a3 * 250.0;
    do
    {
      v21 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
      v24 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
      v7 = sub_10115FB0();
      *(float *)&v51 = *a1 + v21;
      *(float *)&v55 = v24 + a1[1];
      *(float *)&v59 = (double)v7 * 0.000030518509 * 32.0 - 16.0 + a1[2];
      *(float *)&v33 = (double)sub_10115FB0() * 0.000030518509 * 400.0 - 200.0;
      *(float *)&v36 = (double)sub_10115FB0() * 0.000030518509 * 400.0 - 200.0;
      *(float *)&v39 = (double)sub_10115FB0() * 0.000030518509 * 400.0 - 200.0;
      v27 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
      v30 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
      v63 = sub_10115FB0();
      *(float *)&v42 = (v27 + *a2) * v67;
      *(float *)&v45 = (v30 + a2[1]) * v67;
      *(float *)&v48 = ((double)v63 * 0.000030518509 * 1.6 - 0.80000001 + a2[2]) * v67;
      sub_101A8BD0(*(&off_103ECF5C + v6++), v51, v55, v59, v42, v45, v48, v33, v36, v39, 1.0);
    }
    while ( v6 < v70 );
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 3);
  v8 = (int *)off_103ECF68;
  v68 = a3 * 400.0;
  do
  {
    v22 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
    v25 = (double)sub_10115FB0() * 0.000030518509 * 32.0 - 16.0;
    v9 = sub_10115FB0();
    *(float *)&v52 = *a1 + v22;
    *(float *)&v56 = v25 + a1[1];
    *(float *)&v60 = (double)v9 * 0.000030518509 * 32.0 - 16.0 + a1[2];
    *(float *)&v34 = (double)sub_10115FB0() * 0.000030518509 * 600.0 - 300.0;
    *(float *)&v37 = (double)sub_10115FB0() * 0.000030518509 * 600.0 - 300.0;
    *(float *)&v40 = (double)sub_10115FB0() * 0.000030518509 * 600.0 - 300.0;
    v28 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
    v31 = (double)sub_10115FB0() * 0.000030518509 * 1.6 - 0.80000001;
    v64 = sub_10115FB0();
    *(float *)&v43 = (v28 + *a2) * v68;
    *(float *)&v46 = (v31 + a2[1]) * v68;
    *(float *)&v49 = ((double)v64 * 0.000030518509 * 1.6 - 0.80000001 + a2[2]) * v68;
    sub_101A8BD0(*v8++, v52, v56, v60, v43, v46, v49, v34, v37, v40, 0.5);
  }
  while ( (int)v8 < (int)&C_AntlionGib `RTTI Type Descriptor' );
  sub_100F32D0(&v71, (int)"FX_AntlionGib");
  sub_100F3060((int)v71, a1);
  v10 = sub_10115FB0();
  v53 = (double)v10 * 0.000030518509 + (double)v10 * 0.000030518509 - 1.0;
  v11 = sub_10115FB0();
  v57 = (double)v11 * 0.000030518509 + (double)v11 * 0.000030518509 - 1.0;
  v65 = sub_10115FB0();
  v12 = 0;
  v61 = (double)v65 * 0.000030518509 + (double)v65 * 0.000030518509 - 1.0;
  while ( 1 )
  {
    v13 = sub_100F2B60((int)v71, v3, 60, dword_1043DF28, a1);
    v3 = (int)v13;
    if ( !v13 )
      break;
    v13[11] = 0.0;
    v13[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.5,
                0.75);
    v14 = -((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             16.0,
             64.0);
    *(float *)(v3 + 24) = v53 * v14;
    *(float *)(v3 + 28) = v57 * v14;
    *(float *)(v3 + 32) = v14 * v61;
    *(float *)(v3 + 32) = *(float *)(v3 + 32) + 16.0;
    *(_DWORD *)(v3 + 48) = -14628609;
    *(_BYTE *)(v3 + 52) = 0;
    v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
    *(_BYTE *)(v3 + 53) = v15;
    *(_BYTE *)(v3 + 54) = 2 * v15;
    *(float *)(v3 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                   dword_10413198,
                                   0,
                                   360);
    *(float *)(v3 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            -1.0,
                            1.0);
    if ( ++v12 >= 4 )
    {
      for ( i = 0; i < 4; ++i )
      {
        v17 = sub_100F2B60((int)v71, v3, 60, dword_1043DF2C, a1);
        v3 = (int)v17;
        if ( !v17 )
          break;
        v17[11] = 0.0;
        v17[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.5,
                    0.75);
        v18 = -((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 16.0,
                 64.0);
        *(float *)(v3 + 24) = v53 * v18;
        *(float *)(v3 + 28) = v57 * v18;
        *(float *)(v3 + 32) = v18 * v61;
        *(float *)(v3 + 32) = *(float *)(v3 + 32) + 16.0;
        *(_WORD *)(v3 + 48) = -14081;
        *(_BYTE *)(v3 + 50) = 32;
        *(_BYTE *)(v3 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                64,
                                128);
        *(_BYTE *)(v3 + 52) = 0;
        v19 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
        *(_BYTE *)(v3 + 53) = v19;
        *(_BYTE *)(v3 + 54) = 2 * v19;
        *(float *)(v3 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                       dword_10413198,
                                       0,
                                       360);
        *(float *)(v3 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                -1.0,
                                1.0);
      }
      break;
    }
  }
  if ( v71 )
    sub_100F2FF0((int)v71);
}
