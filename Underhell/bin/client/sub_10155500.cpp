void __usercall sub_10155500(float *a1@<edi>, float *a2, char a3, int a4)
{
  double v4; // st6
  double v5; // st5
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // esi
  int v12; // eax
  float *v13; // eax
  float *v14; // esi
  double (__thiscall *v15)(int, int, _DWORD); // edx
  double v16; // st7
  double (__stdcall *v17)(int, _DWORD); // edx
  double v18; // st7
  double (__stdcall *v19)(int, _DWORD); // edx
  double v20; // st7
  int (__thiscall *v21)(int, int, int); // edx
  char v22; // al
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st4
  double v33; // st7
  int v34; // eax
  float v35; // [esp+5Ch] [ebp-50h]
  float v36; // [esp+64h] [ebp-48h]
  float v37; // [esp+68h] [ebp-44h]
  int v38; // [esp+74h] [ebp-38h] BYREF
  float v39; // [esp+78h] [ebp-34h]
  float v40; // [esp+7Ch] [ebp-30h]
  int v41[3]; // [esp+80h] [ebp-2Ch] BYREF
  int v42; // [esp+8Ch] [ebp-20h]
  int v43; // [esp+90h] [ebp-1Ch]
  float v44; // [esp+94h] [ebp-18h]
  int v45; // [esp+98h] [ebp-14h]
  int *v46; // [esp+9Ch] [ebp-10h]
  int v47; // [esp+A0h] [ebp-Ch] BYREF
  float v48; // [esp+A4h] [ebp-8h]
  int v49; // [esp+A8h] [ebp-4h]

  v4 = a1[7];
  v5 = a1[8];
  *(float *)v41 = a1[6] + a1[3];
  *(float *)&v41[1] = v4 + a1[4];
  *(float *)&v41[2] = v5 + a1[5];
  *(float *)&v38 = 5.0;
  v39 = 5.0;
  v40 = 5.0;
  sub_100A42D0(&v47, "FX_DebrisFlecks", (float *)v41, (float *)&v38);
  if ( v47 )
  {
    v6 = (double)a4;
    v44 = 128.0 * v6;
    v7 = v6;
    v8 = 128.0 * v6;
    v9 = 0.60000002 - v7 * 0.2;
    if ( v9 < 0.2 )
      v9 = 0.2;
    v10 = *(_DWORD *)(v47 + 260);
    v48 = v9;
    v36 = v8;
    v35 = v9;
    (*(void (__thiscall **)(int, int *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v10 + 16))(
      v47 + 260,
      v41,
      a1 + 6,
      LODWORD(v35),
      64.0,
      LODWORD(v36),
      800.0,
      0.30000001);
    v46 = dword_1043DF00;
    if ( a3 == 87 )
      v46 = &dword_1043DEF8;
    v42 = a4 * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 4, 16);
    v45 = 0;
    if ( v42 > 0 )
    {
      do
      {
        v11 = v47;
        v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
        v13 = sub_100F2B60(v11, v11, 56, v46[v12], (float *)v41);
        v14 = v13;
        if ( !v13 )
          break;
        v13[12] = 0.0;
        v13[11] = 3.0;
        v15 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        *(float *)&v49 = -v48;
        v16 = v15(dword_10413198, v49, LODWORD(v48));
        v17 = *(double (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        *(float *)&v38 = v16 + a1[6];
        v18 = v17(v49, LODWORD(v48));
        v19 = *(double (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v39 = v18 + a1[7];
        v20 = v19(v49, LODWORD(v48));
        v21 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
        v40 = v20 + a1[8];
        v22 = v21(dword_10413198, 1, 2);
        v23 = v44;
        *((_BYTE *)v14 + 55) = v22;
        v37 = v23;
        v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                64.0,
                LODWORD(v37));
        v49 = 3 - *((unsigned __int8 *)v14 + 55);
        v25 = v24 * (double)v49;
        v26 = *(float *)&v38 * v25;
        v27 = v39 * v25;
        v28 = v25 * v40;
        v14[6] = v26;
        v14[7] = v27;
        v14[8] = v28;
        v14[9] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   0.0,
                   360.0);
        v14[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.0,
                    360.0);
        v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.75,
                1.25);
        v30 = *a2 * v29;
        v31 = 1.0;
        if ( v30 <= 1.0 )
          v31 = v30;
        v43 = (int)(v31 * 255.0);
        *((_BYTE *)v14 + 52) = v43;
        v32 = a2[1] * v29;
        if ( v32 > 1.0 )
          v32 = 1.0;
        v43 = (int)(v32 * 255.0);
        *((_BYTE *)v14 + 53) = v43;
        v33 = v29 * a2[2];
        if ( v33 > 1.0 )
          v33 = 1.0;
        v34 = ++v45;
        v43 = (int)(v33 * 255.0);
        *((_BYTE *)v14 + 54) = v43;
      }
      while ( v34 < v42 );
    }
    if ( v47 )
      sub_100F2FF0(v47);
  }
}
