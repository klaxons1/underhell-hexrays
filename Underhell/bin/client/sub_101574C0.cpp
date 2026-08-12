void __cdecl sub_101574C0(float *a1, float *a2, float a3)
{
  float *v3; // eax
  int v4; // esi
  float *v5; // eax
  double v6; // st7
  double v7; // st4
  double v8; // rt0
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // st7
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  double v19; // st4
  double v20; // rt1
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // st7
  char v28; // al
  char v29; // cl
  char v30; // al
  float *v31; // edi
  double v32; // st7
  double v33; // st7
  double v34; // st6
  double v35; // st5
  double v36; // st4
  double v37; // st7
  char v38; // al
  int v39; // [esp+C8h] [ebp-34h]
  int v40; // [esp+CCh] [ebp-30h]
  int v41; // [esp+D0h] [ebp-2Ch]
  float v42; // [esp+E0h] [ebp-1Ch] BYREF
  float v43; // [esp+E4h] [ebp-18h]
  float v44; // [esp+E8h] [ebp-14h]
  int v45; // [esp+ECh] [ebp-10h]
  int v46; // [esp+F0h] [ebp-Ch]
  int i; // [esp+F4h] [ebp-8h]
  int v48; // [esp+F8h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_DustImpact", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = (float *)sub_100DDA40(260);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_100F2BA0(v3, (int)"dust");
    *(_DWORD *)v4 = &CDustParticle::`vftable';
  }
  else
  {
    v4 = 0;
  }
  v46 = 0;
  if ( v4 )
  {
    sub_100F2950((_DWORD *)v4);
    v46 = v4;
  }
  sub_100F3060(v46, a1);
  sub_10155350((int)a2, &v42);
  for ( i = 0; i < 4; ++i )
  {
    v5 = sub_100F2B60(v46, v4, 60, dword_1043DF20[0], a1);
    v4 = (int)v5;
    if ( v5 )
    {
      v5[11] = 0.0;
      v5[10] = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 0.5,
                 1.0,
                 v39,
                 v40,
                 v41);
      v48 = sub_10115FB0();
      *(float *)(v4 + 24) = (double)v48 * 0.000030518509 * 0.40000001 - 0.2;
      v48 = sub_10115FB0();
      *(float *)(v4 + 28) = (double)v48 * 0.000030518509 * 0.40000001 - 0.2;
      v48 = sub_10115FB0();
      *(float *)(v4 + 32) = (double)v48 * 0.000030518509 * 0.40000001 - 0.2;
      v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             1.0,
             6.0);
      v7 = a2[8];
      v8 = a2[7] * v6;
      *(float *)(v4 + 24) = v6 * a2[6] + *(float *)(v4 + 24);
      *(float *)(v4 + 28) = v8 + *(float *)(v4 + 28);
      *(float *)(v4 + 32) = v6 * v7 + *(float *)(v4 + 32);
      off_103EDFEC();
      v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             250.0,
             500.0);
      v10 = v9 * (double)i * a3;
      *(float *)(v4 + 24) = v10 * *(float *)(v4 + 24);
      *(float *)(v4 + 28) = *(float *)(v4 + 28) * v10;
      *(float *)(v4 + 32) = v10 * *(float *)(v4 + 32);
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.75,
              1.25);
      v12 = v42 * v11;
      v13 = 1.0;
      if ( v12 <= 1.0 )
        v13 = v12;
      v45 = (int)(v13 * 255.0);
      *(_BYTE *)(v4 + 48) = v45;
      v14 = v43 * v11;
      if ( v14 > 1.0 )
        v14 = 1.0;
      v45 = (int)(v14 * 255.0);
      *(_BYTE *)(v4 + 49) = v45;
      v15 = v11 * v44;
      if ( v15 > 1.0 )
        v15 = 1.0;
      v41 = 4;
      v45 = (int)(v15 * 255.0);
      *(_BYTE *)(v4 + 50) = v45;
      v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 3);
      v40 = 255;
      v39 = 32;
      LOBYTE(v16) = (int)((double)v16 * a3 * (double)(i + 1));
      *(_BYTE *)(v4 + 53) = v16;
      v45 = (int)(a3 * (double)(unsigned __int8)v16 * 4.0);
      *(_BYTE *)(v4 + 54) = v45;
      *(_BYTE *)(v4 + 51) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
      *(_BYTE *)(v4 + 52) = 0;
      v45 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      *(float *)(v4 + 36) = (float)v45;
      *(float *)(v4 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              -8.0,
                              8.0);
    }
  }
  for ( i = 0; i < 4; ++i )
  {
    v17 = sub_100F2B60(v46, v4, 60, dword_1043DF28, a1);
    v4 = (int)v17;
    if ( v17 )
    {
      v17[11] = 0.0;
      v17[10] = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.25,
                  0.75,
                  v39,
                  v40,
                  v41);
      v45 = sub_10115FB0();
      *(float *)(v4 + 24) = (double)v45 * 0.000030518509 * 0.40000001 - 0.2;
      v45 = sub_10115FB0();
      *(float *)(v4 + 28) = (double)v45 * 0.000030518509 * 0.40000001 - 0.2;
      v45 = sub_10115FB0();
      *(float *)(v4 + 32) = (double)v45 * 0.000030518509 * 0.40000001 - 0.2;
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              1.0,
              6.0);
      v19 = a2[8];
      v20 = a2[7] * v18;
      *(float *)(v4 + 24) = v18 * a2[6] + *(float *)(v4 + 24);
      *(float *)(v4 + 28) = v20 + *(float *)(v4 + 28);
      *(float *)(v4 + 32) = v18 * v19 + *(float *)(v4 + 32);
      off_103EDFEC();
      v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              250.0,
              500.0);
      v22 = v21 * (double)i;
      *(float *)(v4 + 24) = v22 * *(float *)(v4 + 24);
      *(float *)(v4 + 28) = *(float *)(v4 + 28) * v22;
      *(float *)(v4 + 32) = v22 * *(float *)(v4 + 32);
      v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.75,
              1.25);
      v24 = v42 * v23;
      v25 = 1.0;
      if ( v24 <= 1.0 )
        v25 = v24;
      v45 = (int)(v25 * 255.0);
      *(_BYTE *)(v4 + 48) = v45;
      v26 = v43 * v23;
      if ( v26 > 1.0 )
        v26 = 1.0;
      v45 = (int)(v26 * 255.0);
      *(_BYTE *)(v4 + 49) = v45;
      v27 = v23 * v44;
      if ( v27 > 1.0 )
        v27 = 1.0;
      v41 = 4;
      v45 = (int)(v27 * 255.0);
      *(_BYTE *)(v4 + 50) = v45;
      v28 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2);
      v29 = i + 1;
      *(_WORD *)(v4 + 51) = 255;
      v40 = 360;
      v30 = v29 * v28;
      *(_BYTE *)(v4 + 53) = v30;
      *(_BYTE *)(v4 + 54) = 2 * v30;
      v39 = 0;
      v45 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
      *(float *)(v4 + 36) = (float)v45;
      *(float *)(v4 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              -2.0,
                              2.0);
    }
  }
  i = 4;
  do
  {
    v31 = sub_100F2B60(v46, v4, 60, dword_1043DF20[0], a1);
    if ( v31 )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)dword_10413198 + 4))(
        dword_10413198,
        -8.0,
        8.0,
        v39,
        v40,
        v41);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4))(dword_10413198, -8.0, 8.0);
      v31[11] = 0.0;
      v31[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.5,
                  1.0);
      v45 = sub_10115FB0();
      v31[6] = (double)v45 * 0.000030518509 + (double)v45 * 0.000030518509 - 1.0;
      v45 = sub_10115FB0();
      v31[7] = (double)v45 * 0.000030518509 + (double)v45 * 0.000030518509 - 1.0;
      v45 = sub_10115FB0();
      v31[8] = (double)v45 * 0.000030518509 + (double)v45 * 0.000030518509 - 1.0;
      v31[6] = v31[6] + a2[6];
      v31[7] = a2[7] + v31[7];
      v31[8] = a2[8] + v31[8];
      off_103EDFEC();
      v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.0,
              50.0);
      v31[6] = v32 * v31[6];
      v31[7] = v31[7] * v32;
      v31[8] = v32 * v31[8];
      v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.75,
              1.25);
      v34 = v42 * v33;
      v35 = 1.0;
      if ( v34 <= 1.0 )
        v35 = v34;
      v45 = (int)(v35 * 255.0);
      *((_BYTE *)v31 + 48) = v45;
      v36 = v43 * v33;
      if ( v36 > 1.0 )
        v36 = 1.0;
      v45 = (int)(v36 * 255.0);
      *((_BYTE *)v31 + 49) = v45;
      v37 = v33 * v44;
      if ( v37 > 1.0 )
        v37 = 1.0;
      v41 = 4;
      v45 = (int)(v37 * 255.0);
      *((_BYTE *)v31 + 50) = v45;
      v38 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1);
      *((_BYTE *)v31 + 53) = v38;
      *((_BYTE *)v31 + 54) = 4 * v38;
      v40 = 64;
      v39 = 32;
      *((_BYTE *)v31 + 51) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
      *((_BYTE *)v31 + 52) = 0;
      v45 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      v31[9] = (float)v45;
      v31[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -16.0,
                  16.0);
    }
    --i;
  }
  while ( i );
  if ( v46 )
    sub_100F2FF0(v46);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
