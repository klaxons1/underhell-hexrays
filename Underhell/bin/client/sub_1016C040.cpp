void __thiscall sub_1016C040(int *this, int a2, int a3)
{
  double v4; // st7
  int v5; // edi
  int *v6; // esi
  double v7; // st5
  int v8; // eax
  float *v9; // eax
  float *v10; // esi
  double v11; // st7
  char v12; // al
  int v13; // eax
  int *v14; // esi
  int v15; // eax
  float *v16; // eax
  float *v17; // esi
  double v18; // st7
  float v19; // [esp+60h] [ebp-20h] BYREF
  float v20; // [esp+64h] [ebp-1Ch]
  float v21; // [esp+68h] [ebp-18h]
  int v22; // [esp+6Ch] [ebp-14h]
  int *v23; // [esp+70h] [ebp-10h]
  float v24; // [esp+74h] [ebp-Ch]
  int v25; // [esp+78h] [ebp-8h]
  int *v26; // [esp+7Ch] [ebp-4h] BYREF
  int v27; // [esp+8Ch] [ebp+Ch]

  v23 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Combine_Player", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F15C0(&v26, (int)"MuzzleFlash", a2, a3, 1);
  sub_1016B9E0(this);
  v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          2.0,
          2.25);
  sub_100F2A30(v26, 1u);
  v4 = 0.0;
  v5 = 11;
  v25 = 1;
  v27 = 11;
  while ( 1 )
  {
    v6 = v26;
    v7 = (double)v25 * 8.0 * v24;
    v19 = v7;
    v20 = v4 * v7;
    v21 = v20;
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
    v9 = sub_100F2B60((int)v6, (int)v6, 60, v23[v8 + 47], &v19);
    v10 = v9;
    if ( !v9 )
      break;
    v9[11] = 0.0;
    v9[10] = 0.025;
    v9[6] = 0.0;
    v9[7] = 0.0;
    v9[8] = 0.0;
    *((_BYTE *)v9 + 48) = -1;
    *((_BYTE *)v9 + 49) = -1;
    *((_BYTE *)v9 + 50) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                            dword_10413198,
                            0,
                            55)
                        - 56;
    *((_BYTE *)v10 + 51) = -1;
    *((_BYTE *)v10 + 52) = -1;
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            6.0,
            8.0);
    v22 = (int)(v11 * (double)v27 * 0.083333336 * v24);
    v12 = v22;
    *((_BYTE *)v10 + 53) = v22;
    *((_BYTE *)v10 + 54) = v12;
    v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    ++v25;
    v27 = --v5;
    v10[9] = (float)v13;
    v4 = 0.0;
    v10[14] = 0.0;
    if ( v5 <= 6 )
    {
      v14 = v26;
      v15 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v16 = sub_100F2B60((int)v14, (int)v14, 60, v23[v15 + 47], &flt_10459240);
      v17 = v16;
      if ( v16 )
      {
        v16[11] = 0.0;
        v16[10] = 0.025;
        v16[6] = 0.0;
        v16[7] = 0.0;
        v16[8] = 0.0;
        *((_BYTE *)v16 + 48) = -1;
        *((_BYTE *)v16 + 49) = -1;
        *((_BYTE *)v16 + 50) = -1;
        *((_BYTE *)v16 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                 dword_10413198,
                                 64,
                                 128);
        *((_BYTE *)v17 + 52) = 32;
        v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                10.0,
                16.0);
        v22 = (int)v18;
        *((_BYTE *)v17 + 53) = (int)v18;
        *((_BYTE *)v17 + 54) = (int)v18;
        v17[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          0,
                          360);
        v17[14] = 0.0;
      }
      break;
    }
  }
  if ( v26 )
    sub_100F2FF0((int)v26);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
