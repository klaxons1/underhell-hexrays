void __usercall sub_101AA5F0(int a1@<edi>, int a2@<esi>, int a3, int a4)
{
  int v4; // eax
  double v5; // st7
  int v6; // edi
  int *v7; // esi
  double v8; // st5
  int v9; // eax
  float *v10; // eax
  float *v11; // esi
  double v12; // st7
  char v13; // al
  int v14; // eax
  int *v15; // esi
  int v16; // eax
  float *v17; // eax
  float *v18; // esi
  double v19; // st7
  _BYTE v20[12]; // [esp+48h] [ebp-64h] BYREF
  float v21; // [esp+54h] [ebp-58h]
  float v22; // [esp+64h] [ebp-48h]
  float v23; // [esp+74h] [ebp-38h]
  float v24[3]; // [esp+78h] [ebp-34h] BYREF
  float v25; // [esp+84h] [ebp-28h] BYREF
  float v26; // [esp+88h] [ebp-24h]
  float v27; // [esp+8Ch] [ebp-20h]
  _DWORD v28[2]; // [esp+90h] [ebp-1Ch]
  int v29; // [esp+98h] [ebp-14h]
  float v30; // [esp+9Ch] [ebp-10h]
  int v31; // [esp+A0h] [ebp-Ch]
  int *v32; // [esp+A4h] [ebp-8h] BYREF
  int v33; // [esp+A8h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Airboat", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F15C0(&v32, (int)"MuzzleFlash", a3, a4, 0);
  v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.75,
          2.5);
  v28[0] = sub_100F29B0((int)v32, a1, a2, "effects/combinemuzzle1");
  v4 = sub_100F29B0((int)v32, a1, a2, "effects/combinemuzzle2");
  v5 = 0.0;
  v6 = 8;
  v28[1] = v4;
  v31 = 1;
  v33 = 8;
  while ( 1 )
  {
    v7 = v32;
    v8 = (double)v31 * 6.0 * v30;
    v25 = v8;
    v26 = v5 * v8;
    v27 = v26;
    v9 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
    v10 = sub_100F2B60((int)v7, (int)v7, 60, v28[v9], &v25);
    v11 = v10;
    if ( !v10 )
      break;
    v10[11] = 0.0;
    v10[10] = 0.0099999998;
    v10[6] = 0.0;
    v10[7] = 0.0;
    v10[8] = 0.0;
    *((_BYTE *)v10 + 48) = -1;
    *((_BYTE *)v10 + 49) = -1;
    *((_BYTE *)v10 + 50) = -1;
    *((_BYTE *)v10 + 51) = -1;
    *((_BYTE *)v10 + 52) = 0x80;
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            6.0,
            8.0);
    v29 = (int)(v12 * (double)v33 * 0.14285715 * v30);
    v13 = v29;
    *((_BYTE *)v11 + 53) = v29;
    *((_BYTE *)v11 + 54) = v13;
    v14 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    ++v31;
    v29 = v14;
    v33 = --v6;
    v11[9] = (float)v14;
    v5 = 0.0;
    v11[14] = 0.0;
    if ( v6 <= 2 )
    {
      v15 = v32;
      v16 = sub_100F29B0((int)v32, v6, (int)v32, "sprites/ar2_muzzle1");
      v17 = sub_100F2B60((int)v15, (int)v15, 60, v16, &flt_10459240);
      v18 = v17;
      if ( v17 )
      {
        v17[11] = 0.0;
        v17[10] = 0.050000001;
        v17[6] = 0.0;
        v17[7] = 0.0;
        v17[8] = 0.0;
        *((_BYTE *)v17 + 48) = -1;
        *((_BYTE *)v17 + 49) = -1;
        *((_BYTE *)v17 + 50) = -1;
        *((_BYTE *)v17 + 51) = -1;
        *((_BYTE *)v17 + 52) = 0x80;
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                16.0,
                24.0);
        v29 = (int)v19;
        *((_BYTE *)v18 + 53) = (int)v19;
        *((_BYTE *)v18 + 54) = (int)v19;
        v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 5);
        v18[9] = (double)v29 * 60.0;
        v18[14] = 0.0;
        if ( *(_DWORD *)(dword_104451A4 + 48) )
        {
          if ( sub_10175F70(a3, a4, v20) )
          {
            v24[0] = v21;
            v24[1] = v22;
            v24[2] = v23;
            sub_101AA1E0(v24, 5, 64, 128, a3);
          }
        }
      }
      break;
    }
  }
  if ( v32 )
    sub_100F2FF0((int)v32);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
