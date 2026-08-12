void __cdecl sub_101AA8E0(int a1, int a2)
{
  double v2; // st7
  int v3; // edi
  int *v4; // esi
  double v5; // st5
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // esi
  double v11; // st7
  char v12; // al
  int v13; // eax
  _BYTE v14[12]; // [esp+40h] [ebp-58h] BYREF
  float v15; // [esp+4Ch] [ebp-4Ch]
  float v16; // [esp+5Ch] [ebp-3Ch]
  float v17; // [esp+6Ch] [ebp-2Ch]
  float v18[3]; // [esp+70h] [ebp-28h] BYREF
  float v19; // [esp+7Ch] [ebp-1Ch] BYREF
  float v20; // [esp+80h] [ebp-18h]
  float v21; // [esp+84h] [ebp-14h]
  int v22; // [esp+88h] [ebp-10h]
  float v23; // [esp+8Ch] [ebp-Ch]
  int *v24; // [esp+90h] [ebp-8h] BYREF
  int v25; // [esp+94h] [ebp-4h]
  int v26; // [esp+A4h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Chopper", 0, "Particle/Effect_Rendering", 0, 4);
  if ( sub_10175F70(a1, a2, v14) )
  {
    sub_100F15C0(&v24, (int)"MuzzleFlash", a1, a2, 0);
    v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            2.5,
            4.5);
    v2 = 0.0;
    v3 = 9;
    v25 = 1;
    v26 = 9;
    while ( 1 )
    {
      v4 = v24;
      v5 = ((double)v25 + (double)v25) * v23;
      v19 = v5;
      v20 = v2 * v5;
      v21 = v20;
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
      v7 = sub_10076640("effects/combinemuzzle%d", v6);
      v8 = sub_100F29B0((int)v4, v3, (int)v4, v7);
      v9 = sub_100F2B60((int)v4, (int)v4, 60, v8, &v19);
      v10 = v9;
      if ( !v9 )
        break;
      v9[11] = 0.0;
      v9[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 0.050000001,
                 0.1);
      v10[6] = 0.0;
      v10[7] = 0.0;
      v10[8] = 0.0;
      *((_BYTE *)v10 + 48) = -1;
      *((_BYTE *)v10 + 49) = -1;
      *((_BYTE *)v10 + 50) = -1;
      *((_BYTE *)v10 + 51) = -1;
      *((_BYTE *)v10 + 52) = 0x80;
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              6.0,
              8.0);
      v22 = (int)(v11 * (double)v26 * 0.14285715 * v23);
      v12 = v22;
      *((_BYTE *)v10 + 53) = v22;
      *((_BYTE *)v10 + 54) = v12;
      v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      ++v25;
      v26 = --v3;
      v10[9] = (float)v13;
      v2 = 0.0;
      v10[14] = 0.0;
      if ( v3 <= 3 )
      {
        v18[0] = v15;
        v18[1] = v16;
        v18[2] = v17;
        sub_101AA1E0(v18, 6, 128, 256, a1);
        break;
      }
    }
    if ( v24 )
      sub_100F2FF0((int)v24);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
