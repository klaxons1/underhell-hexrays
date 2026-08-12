void __thiscall sub_1016CC00(int *this, int a2, int a3)
{
  int v4; // edi
  float *v5; // esi
  double v6; // st7
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  double v10; // st7
  char v11; // al
  int v12; // eax
  _BYTE v13[12]; // [esp+40h] [ebp-5Ch] BYREF
  float v14[3]; // [esp+4Ch] [ebp-50h] BYREF
  float v15[3]; // [esp+58h] [ebp-44h] BYREF
  float v16[3]; // [esp+64h] [ebp-38h] BYREF
  float v17[3]; // [esp+70h] [ebp-2Ch] BYREF
  float v18; // [esp+7Ch] [ebp-20h] BYREF
  float v19; // [esp+80h] [ebp-1Ch]
  float v20; // [esp+84h] [ebp-18h]
  int v21; // [esp+88h] [ebp-14h]
  int *v22; // [esp+8Ch] [ebp-10h]
  float v23; // [esp+90h] [ebp-Ch]
  int v24; // [esp+94h] [ebp-8h]
  float *v25; // [esp+98h] [ebp-4h] BYREF
  int v26; // [esp+A8h] [ebp+Ch]

  v22 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Shotgun_Player", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v25, (int)"MuzzleFlash_Shotgun_Player");
  sub_100F2A30(v25, 1u);
  sub_1016B9E0(this);
  sub_10175EC0(a2, a3, &v18, v13);
  v17[0] = v18 + 4.0;
  v17[1] = v19 + 4.0;
  v17[2] = v20 + 4.0;
  v16[0] = v18 - 4.0;
  v16[1] = v19 - 4.0;
  v16[2] = v20 - 4.0;
  sub_100EC3F0((int)(v25 + 2), v16, v17, 1);
  sub_101EE040(v13, v15, 0, 0);
  v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          1.25,
          1.5);
  v24 = 1;
  v4 = 7;
  v26 = 7;
  do
  {
    v5 = v25;
    v6 = (double)v24 * 8.0 * v23;
    v14[0] = v15[0] * v6 + v18;
    v14[1] = v15[1] * v6 + v19;
    v14[2] = v6 * v15[2] + v20;
    v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
    v8 = sub_100F2B60((int)v5, (int)v5, 60, v22[v7 + 39], v14);
    v9 = v8;
    if ( !v8 )
      break;
    v8[11] = 0.0;
    v8[10] = 0.000099999997;
    v8[6] = 0.0;
    v8[7] = 0.0;
    v8[8] = 0.0;
    *((_BYTE *)v8 + 48) = -1;
    *((_BYTE *)v8 + 49) = -1;
    *((_BYTE *)v8 + 50) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                            dword_10413198,
                            0,
                            55)
                        - 56;
    *((_BYTE *)v9 + 51) = -1;
    *((_BYTE *)v9 + 52) = -1;
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            6.0,
            8.0);
    v21 = (int)(v10 * (double)v26 * 0.16666667 * v23);
    v11 = v21;
    *((_BYTE *)v9 + 53) = v21;
    *((_BYTE *)v9 + 54) = v11;
    v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    ++v24;
    v26 = --v4;
    v9[9] = (float)v12;
    v9[14] = 0.0;
  }
  while ( v4 > 2 );
  if ( v25 )
    sub_100F2FF0((int)v25);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
