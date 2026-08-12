void __cdecl sub_10155850(int a1, float *a2, char a3, int a4, char a5)
{
  double v5; // st7
  int v6; // esi
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st7
  double (__stdcall *v11)(_DWORD, _DWORD); // eax
  double v12; // st7
  double (__stdcall *v13)(_DWORD, _DWORD); // eax
  double v14; // st7
  int (__thiscall *v15)(int, int, int); // eax
  char v16; // al
  double v17; // st7
  double v18; // st4
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st4
  double v24; // st7
  int v25; // esi
  double v26; // st7
  double (__stdcall *v27)(_DWORD, _DWORD); // edx
  double v28; // st7
  double (__stdcall *v29)(_DWORD, _DWORD); // edx
  double v30; // st7
  int (__thiscall *v31)(int, int, int); // edx
  double v32; // st7
  double v33; // st7
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st4
  double v38; // st7
  double v39; // st7
  double (__stdcall *v40)(_DWORD, _DWORD); // eax
  double v41; // st7
  double (__stdcall *v42)(_DWORD, _DWORD); // eax
  double v43; // st7
  int (__thiscall *v44)(int, int, int); // eax
  double v45; // st7
  double v46; // st7
  double v47; // st6
  double v48; // st5
  double v49; // st4
  double v50; // st7
  _BYTE v51[12]; // [esp+118h] [ebp-6Ch] BYREF
  float v52; // [esp+124h] [ebp-60h]
  float v53; // [esp+128h] [ebp-5Ch]
  float v54; // [esp+12Ch] [ebp-58h]
  float v55; // [esp+130h] [ebp-54h]
  float v56; // [esp+134h] [ebp-50h]
  float v57; // [esp+138h] [ebp-4Ch]
  float v58; // [esp+13Ch] [ebp-48h]
  float v59; // [esp+140h] [ebp-44h]
  float v60; // [esp+144h] [ebp-40h]
  char v61; // [esp+148h] [ebp-3Ch]
  char v62; // [esp+149h] [ebp-3Bh]
  char v63; // [esp+14Ah] [ebp-3Ah]
  char v64; // [esp+14Bh] [ebp-39h]
  char v65; // [esp+14Ch] [ebp-38h]
  unsigned __int8 v66; // [esp+14Dh] [ebp-37h]
  char v67; // [esp+14Eh] [ebp-36h]
  char v68; // [esp+14Fh] [ebp-35h]
  float v69; // [esp+150h] [ebp-34h]
  float v70; // [esp+154h] [ebp-30h]
  float v71; // [esp+158h] [ebp-2Ch]
  float v72; // [esp+15Ch] [ebp-28h]
  float v73; // [esp+160h] [ebp-24h] BYREF
  float v74; // [esp+164h] [ebp-20h]
  float v75; // [esp+168h] [ebp-1Ch]
  float v76; // [esp+16Ch] [ebp-18h]
  float v77; // [esp+170h] [ebp-14h]
  float v78; // [esp+174h] [ebp-10h]
  int v79; // [esp+178h] [ebp-Ch]
  int v80; // [esp+17Ch] [ebp-8h]
  float v81; // [esp+180h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_DebrisFlecks", 0, "Particle/Effect_Rendering", 0, 4);
  if ( *(_DWORD *)(dword_1043DF74 + 48) )
  {
    sub_10155350((int)a2, &v73);
    if ( !a5 )
      sub_10155500(a2, &v73, a3, a4);
    v5 = a2[6];
    v68 = 0;
    v80 = 1;
    v6 = 2;
    v7 = 2.0 * a2[8];
    v8 = v5 * 2.0 + a2[3];
    v9 = a2[7] * 2.0;
    v76 = v8;
    v77 = v9 + a2[4];
    v78 = v7 + a2[5];
    do
    {
      v52 = v76;
      v53 = v77;
      v54 = v78;
      v60 = 0.0;
      v59 = 1.0;
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -0.80000001,
              0.80000001);
      v11 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v70 = v10 + a2[6];
      v12 = v11(-0.80000001, 0.80000001);
      v13 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v71 = v12 + a2[7];
      v14 = v13(-0.80000001, 0.80000001);
      v15 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
      v72 = v14 + a2[8];
      v16 = v15(dword_10413198, 2, 4);
      v66 = a4 * v16;
      v67 = 8 * a4 * v16 * a4;
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              2.0,
              24.0);
      v18 = (double)v80;
      v81 = v18;
      v55 = v70 * v17 * v18;
      v56 = v71 * v17 * v18;
      v57 = v17 * v72 * v18;
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              32.0);
      v57 = v57 - v19 * v81;
      v64 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 100, 200);
      v65 = 0;
      v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.0,
              360.0);
      v69 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -1.0,
              1.0);
      v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.5,
              1.25);
      v21 = v73 * v20;
      v22 = 1.0;
      if ( v21 <= 1.0 )
        v22 = v21;
      v79 = (int)(v22 * 255.0);
      v61 = v79;
      v23 = v74 * v20;
      if ( v23 > 1.0 )
        v23 = 1.0;
      v79 = (int)(v23 * 255.0);
      v62 = v79;
      v24 = v20 * v75;
      if ( v24 > 1.0 )
        v24 = 1.0;
      v79 = (int)(v24 * 255.0);
      v63 = v79;
      sub_100F12D0((int)v51, dword_1043DF20[0], 0);
      ++v80;
      --v6;
    }
    while ( v6 );
    v25 = 4;
    do
    {
      v52 = v76;
      v53 = v77;
      v54 = v78;
      v60 = 0.0;
      v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.25,
              0.5);
      v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -0.80000001,
              0.80000001);
      v27 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v70 = v26 + a2[6];
      v28 = v27(-0.80000001, 0.80000001);
      v29 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v71 = v28 + a2[7];
      v30 = v29(-0.80000001, 0.80000001);
      v31 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
      v72 = v30 + a2[8];
      v66 = v31(dword_10413198, 1, 4);
      v67 = 4 * v66;
      v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              32.0);
      v55 = v70 * v32;
      v56 = v71 * v32;
      v57 = v32 * v72;
      v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              64.0);
      v64 = -1;
      v57 = v57 - v33;
      v65 = 0;
      v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.0,
              360.0);
      v69 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -2.0,
              2.0);
      v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.5,
              1.25);
      v35 = v73 * v34;
      v36 = 1.0;
      if ( v35 <= 1.0 )
        v36 = v35;
      v79 = (int)(v36 * 255.0);
      v61 = v79;
      v37 = v74 * v34;
      if ( v37 > 1.0 )
        v37 = 1.0;
      v79 = (int)(v37 * 255.0);
      v62 = v79;
      v38 = v34 * v75;
      if ( v38 > 1.0 )
        v38 = 1.0;
      v79 = (int)(v38 * 255.0);
      v63 = v79;
      sub_100F12D0((int)v51, dword_1043DF28, 0);
      --v25;
    }
    while ( v25 );
    v52 = v76;
    v53 = v77;
    v54 = v78;
    v60 = 0.0;
    v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            1.0,
            1.5);
    v39 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -0.80000001,
            0.80000001);
    v40 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v70 = v39 + a2[6];
    v41 = v40(-0.80000001, 0.80000001);
    v42 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v71 = v41 + a2[7];
    v43 = v42(-0.80000001, 0.80000001);
    v44 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
    v72 = v43 + a2[8];
    v66 = v44(dword_10413198, 4, 8);
    v79 = (int)((double)v66 * 4.0);
    v67 = v79;
    v45 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            2.0,
            24.0);
    v55 = v70 * v45;
    v56 = v71 * v45;
    v57 = v45 * v72;
    v57 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -2.0,
            2.0);
    v64 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 100, 200);
    v65 = 0;
    v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.0,
            360.0);
    v69 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -2.0,
            2.0);
    v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.5,
            1.25);
    v47 = v73 * v46;
    v48 = 1.0;
    if ( v47 <= 1.0 )
      v48 = v47;
    v79 = (int)(v48 * 255.0);
    v61 = v79;
    v49 = v74 * v46;
    if ( v49 > 1.0 )
      v49 = 1.0;
    v79 = (int)(v49 * 255.0);
    v62 = v79;
    v50 = v46 * v75;
    if ( v50 > 1.0 )
      v50 = 1.0;
    v79 = (int)(v50 * 255.0);
    v63 = v79;
    sub_100F12D0((int)v51, dword_1043DF20[0], 0);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
