void __cdecl sub_10156090(float *a1, float *a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  float *v7; // esi
  double v8; // st7
  double v9; // st7
  int v10; // esi
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st7
  double (__stdcall *v15)(_DWORD, _DWORD); // eax
  double v16; // st7
  double (__stdcall *v17)(_DWORD, _DWORD); // eax
  double v18; // st7
  int (__thiscall *v19)(int, int, int); // eax
  double v20; // st7
  double v21; // st4
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st4
  double v26; // st4
  double v27; // st6
  double v28; // st7
  double (__stdcall *v29)(_DWORD, _DWORD); // edx
  double v30; // st7
  double (__stdcall *v31)(_DWORD, _DWORD); // edx
  double v32; // st7
  int (__thiscall *v33)(int, int, int); // edx
  double v34; // st7
  double v35; // st7
  double v36; // st6
  double v37; // st4
  double v38; // st4
  double v39; // st6
  float v40; // [esp+14Ch] [ebp-80h]
  float v41; // [esp+150h] [ebp-7Ch]
  _BYTE v42[12]; // [esp+160h] [ebp-6Ch] BYREF
  float v43; // [esp+16Ch] [ebp-60h]
  float v44; // [esp+170h] [ebp-5Ch]
  float v45; // [esp+174h] [ebp-58h]
  float v46; // [esp+178h] [ebp-54h]
  float v47; // [esp+17Ch] [ebp-50h]
  float v48; // [esp+180h] [ebp-4Ch]
  float v49; // [esp+184h] [ebp-48h]
  float v50; // [esp+188h] [ebp-44h]
  float v51; // [esp+18Ch] [ebp-40h]
  char v52; // [esp+190h] [ebp-3Ch]
  char v53; // [esp+191h] [ebp-3Bh]
  char v54; // [esp+192h] [ebp-3Ah]
  char v55; // [esp+193h] [ebp-39h]
  char v56; // [esp+194h] [ebp-38h]
  unsigned __int8 v57; // [esp+195h] [ebp-37h]
  char v58; // [esp+196h] [ebp-36h]
  char v59; // [esp+197h] [ebp-35h]
  float v60; // [esp+198h] [ebp-34h]
  float v61; // [esp+19Ch] [ebp-30h]
  float v62; // [esp+1A0h] [ebp-2Ch]
  float v63; // [esp+1A4h] [ebp-28h]
  float v64; // [esp+1A8h] [ebp-24h]
  float v65; // [esp+1ACh] [ebp-20h]
  float v66; // [esp+1B0h] [ebp-1Ch]
  float v67; // [esp+1B4h] [ebp-18h] BYREF
  float v68; // [esp+1B8h] [ebp-14h]
  float v69; // [esp+1BCh] [ebp-10h]
  int v70; // [esp+1C0h] [ebp-Ch]
  float v71; // [esp+1C4h] [ebp-8h]
  int v72; // [esp+1C8h] [ebp-4h] BYREF
  float v73; // [esp+1D4h] [ebp+8h]
  float v74; // [esp+1D4h] [ebp+8h]
  float v75; // [esp+1D4h] [ebp+8h]
  float v76; // [esp+1D4h] [ebp+8h]
  float v77; // [esp+1D4h] [ebp+8h]
  float v78; // [esp+1D4h] [ebp+8h]
  int v79; // [esp+1D4h] [ebp+8h]
  float v80; // [esp+1D4h] [ebp+8h]
  float v81; // [esp+1D4h] [ebp+8h]
  float v82; // [esp+1D4h] [ebp+8h]
  float v83; // [esp+1D4h] [ebp+8h]
  float v84; // [esp+1D4h] [ebp+8h]
  float v85; // [esp+1D4h] [ebp+8h]
  float v86; // [esp+1D4h] [ebp+8h]
  int v87; // [esp+1D8h] [ebp+Ch]
  int v88; // [esp+1D8h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GlassImpact", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100EB150(&v72, (int)"FX_GlassImpact");
  sub_100F3060(v72, a1);
  (*(void (__thiscall **)(int, float *, _DWORD, int, float *, _DWORD))(*(_DWORD *)dword_1041315C + 264))(
    dword_1041315C,
    a1,
    0,
    1,
    &v67,
    0);
  v67 = v67 + (1.0 - v67) * 0.30000001;
  v68 = v68 + (1.0 - v68) * 0.30000001;
  v69 = v69 + 0.30000001 * (1.0 - v69);
  v71 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          2.0,
          6.0);
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 4);
  if ( v3 > 0 )
  {
    v87 = v3;
    do
    {
      v5 = v72;
      v6 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v7 = sub_100F2B60(v5, v5, 64, dword_1043DF10[v6], a1);
      if ( v7 )
      {
        v7[13] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   2.5,
                   5.0);
        v73 = *a2;
        v74 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                -0.80000001,
                0.80000001)
            + v73;
        v7[6] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  300.0)
              * v74;
        v75 = a2[1];
        v76 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                -0.80000001,
                0.80000001)
            + v75;
        v7[7] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  300.0)
              * v76;
        v77 = a2[2];
        v78 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                -0.80000001,
                0.80000001)
            + v77;
        v7[8] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  300.0)
              * v78;
        v41 = 0.5 * v71;
        v40 = v71 * -0.5;
        v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               LODWORD(v40),
               LODWORD(v41));
        v70 = (int)(v8 + v71);
        *((_BYTE *)v7 + 59) = v70;
        v61 = (double)sub_10115FB0() * 0.000030518509 * 360.0;
        v62 = (double)sub_10115FB0() * 0.000030518509 * 360.0;
        v79 = sub_10115FB0();
        v7[9] = v61;
        v7[10] = v62;
        v7[11] = (double)v79 * 0.000030518509 * 360.0;
        v7[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   -800.0,
                   800.0);
        *((_BYTE *)v7 + 56) = (int)(v67 * 200.0);
        *((_BYTE *)v7 + 57) = (int)(v68 * 200.0);
        *((_BYTE *)v7 + 58) = (int)(v69 * 210.0);
        v70 = (int)(v67 * 200.0);
        *((_BYTE *)v7 + 60) = v70;
        *((_BYTE *)v7 + 61) = (int)(200.0 * v68);
        v70 = (int)(210.0 * v69);
        *((_BYTE *)v7 + 62) = v70;
      }
      --v87;
    }
    while ( v87 );
  }
  (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v72 + 260) + 16))(
    v72 + 260,
    a1,
    a2,
    0.80000001,
    1.0,
    300.0,
    800.0,
    0.30000001);
  v9 = *a2;
  v59 = 0;
  v88 = 1;
  v10 = 4;
  v11 = a2[2];
  v12 = v9 * 2.0;
  v13 = a2[1] * 2.0;
  v61 = v12 + *a1;
  v62 = v13 + a1[1];
  v63 = 2.0 * v11 + a1[2];
  do
  {
    v43 = v61;
    v44 = v62;
    v45 = v63;
    v51 = 0.0;
    v50 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.1,
            0.25);
    v80 = *a2;
    v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -0.80000001,
            0.80000001);
    v15 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v64 = v14 + v80;
    v81 = a2[1];
    v16 = v15(-0.80000001, 0.80000001);
    v17 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v65 = v16 + v81;
    v82 = a2[2];
    v18 = v17(-0.80000001, 0.80000001);
    v19 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
    v66 = v18 + v82;
    v57 = v19(dword_10413198, 1, 4);
    v58 = 8 * v57;
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            8.0,
            16.0);
    v21 = (double)v88;
    v83 = v21;
    v46 = v64 * v20 * v21;
    v47 = v65 * v20 * v21;
    v48 = v20 * v66 * v21;
    v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            16.0,
            32.0);
    v48 = v48 - v22 * v83;
    v55 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 128, 255);
    v56 = 0;
    v49 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.0,
            360.0);
    v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0);
    v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.5,
            1.25);
    v24 = 64.0 * v23;
    if ( 64.0 * v23 <= 1.0 )
      v25 = v24;
    else
      v25 = 1.0;
    v70 = (int)(v25 * 255.0);
    v52 = v70;
    v26 = 1.0;
    if ( v24 <= 1.0 )
      v26 = v24;
    v27 = 1.0;
    v70 = (int)(v26 * 255.0);
    v53 = v70;
    if ( v23 * 92.0 <= 1.0 )
      v27 = v23 * 92.0;
    v70 = (int)(255.0 * v27);
    v54 = v70;
    sub_100F12D0((int)v42, dword_1043DF28, 0);
    ++v88;
    --v10;
  }
  while ( v10 );
  v43 = v61;
  v44 = v62;
  v45 = v63;
  v51 = 0.0;
  v50 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198, 1.0);
  v84 = *a2;
  v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          -0.80000001,
          0.80000001);
  v29 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
  v64 = v28 + v84;
  v85 = a2[1];
  v30 = v29(-0.80000001, 0.80000001);
  v31 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
  v65 = v30 + v85;
  v86 = a2[2];
  v32 = v31(-0.80000001, 0.80000001);
  v33 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
  v66 = v32 + v86;
  v57 = v33(dword_10413198, 4, 8);
  v58 = (int)((double)v57 * 4.0);
  v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          2.0,
          8.0);
  v46 = v64 * v34;
  v47 = v65 * v34;
  v48 = v34 * v66;
  v48 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          -2.0,
          2.0);
  v55 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
  v56 = 0;
  v49 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.0,
          360.0);
  v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          -2.0,
          2.0);
  v35 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.5,
          1.25);
  v36 = 64.0 * v35;
  if ( 64.0 * v35 <= 1.0 )
    v37 = v36;
  else
    v37 = 1.0;
  v52 = (int)(v37 * 255.0);
  v38 = 1.0;
  if ( v36 <= 1.0 )
    v38 = v36;
  v39 = 1.0;
  v53 = (int)(v38 * 255.0);
  if ( v35 * 92.0 <= 1.0 )
    v39 = v35 * 92.0;
  v54 = (int)(255.0 * v39);
  sub_100F12D0((int)v42, dword_1043DF20[0], 0);
  if ( v72 )
    sub_100F2FF0(v72);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
