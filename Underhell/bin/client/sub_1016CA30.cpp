void __thiscall sub_1016CA30(int *this, int a2, int a3)
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
  float v14; // [esp+40h] [ebp-20h] BYREF
  float v15; // [esp+44h] [ebp-1Ch]
  float v16; // [esp+48h] [ebp-18h]
  int v17; // [esp+4Ch] [ebp-14h]
  int *v18; // [esp+50h] [ebp-10h]
  float v19; // [esp+54h] [ebp-Ch]
  int v20; // [esp+58h] [ebp-8h]
  int *v21; // [esp+5Ch] [ebp-4h] BYREF
  int v22; // [esp+6Ch] [ebp+Ch]

  v18 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_SMG1_Player", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F15C0(&v21, (int)"MuzzleFlash_SMG1_Player", a2, a3, 1);
  sub_1016B9E0(this);
  v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          1.25,
          1.5);
  sub_100F2A30(v21, 1u);
  v4 = 0.0;
  v5 = 7;
  v20 = 1;
  v22 = 7;
  do
  {
    v6 = v21;
    v7 = (double)v20 * 8.0 * v19;
    v14 = v7;
    v15 = v4 * v7;
    v16 = v15;
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
    v9 = sub_100F2B60((int)v6, (int)v6, 60, v18[v8 + 39], &v14);
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
    v17 = (int)(v11 * (double)v22 * 0.16666667 * v19);
    v12 = v17;
    *((_BYTE *)v10 + 53) = v17;
    *((_BYTE *)v10 + 54) = v12;
    v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    ++v20;
    v22 = --v5;
    v10[9] = (float)v13;
    v4 = 0.0;
    v10[14] = 0.0;
  }
  while ( v5 > 2 );
  if ( v21 )
    sub_100F2FF0((int)v21);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
