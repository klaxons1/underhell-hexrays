void __cdecl sub_10176A90(float *a1, int a2, float a3, int a4, _BYTE *a5)
{
  double v5; // st7
  float *v6; // esi
  float *v7; // ebx
  double v8; // st7
  double v9; // rt1
  double v10; // rt2
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  float *v14; // esi
  double v15; // st7
  char v16; // al
  int v17; // eax
  int v18; // eax
  float v19; // [esp+24h] [ebp-44h]
  float v20; // [esp+28h] [ebp-40h]
  float v21[6]; // [esp+38h] [ebp-30h] BYREF
  int v22; // [esp+50h] [ebp-18h]
  int v23; // [esp+54h] [ebp-14h]
  int v24; // [esp+58h] [ebp-10h]
  float v25; // [esp+5Ch] [ebp-Ch]
  float *v26; // [esp+60h] [ebp-8h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_MuzzleEffect", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v26, (int)"MuzzleFlash");
  sub_100F3060((int)v26, a1);
  sub_101EDFB0(a2);
  v20 = a3 + 0.25;
  v19 = a3 - 0.25;
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
         dword_10413198,
         LODWORD(v19),
         LODWORD(v20));
  v25 = v5;
  if ( v5 >= 0.5 )
  {
    if ( v5 > 8.0 )
      v25 = 8.0;
  }
  else
  {
    v25 = 0.5;
  }
  v24 = 1;
  v23 = 11;
  do
  {
    v6 = v26;
    v7 = v26;
    v8 = ((double)v24 + (double)v24) * a3;
    v9 = v21[4] * v8 + a1[1];
    v10 = v8 * v21[5] + a1[2];
    v21[0] = v21[3] * v8 + *a1;
    v21[1] = v9;
    v21[2] = v10;
    v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 4);
    v12 = sub_10076640("effects/muzzleflash%d", v11);
    v13 = sub_100F29B0((int)v6, (int)a1, (int)v6, v12);
    v14 = sub_100F2B60((int)v7, (int)v6, 60, v13, v21);
    if ( !v14 )
      break;
    v14[11] = 0.0;
    v14[10] = 0.1;
    v14[6] = 0.0;
    v14[7] = 0.0;
    v14[8] = 0.0;
    if ( a5 )
    {
      *((_BYTE *)v14 + 48) = *a5;
      *((_BYTE *)v14 + 49) = a5[1];
      *((_BYTE *)v14 + 50) = a5[2];
    }
    else
    {
      *((_WORD *)v14 + 24) = -1;
      *((_BYTE *)v14 + 50) = -1;
    }
    *(_WORD *)((char *)v14 + 51) = -32513;
    v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            6.0,
            9.0);
    v22 = (int)(v15 * (double)v23 * 0.11111111 * v25);
    v16 = v22;
    *((_BYTE *)v14 + 53) = v22;
    *((_BYTE *)v14 + 54) = v16;
    v17 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    ++v24;
    v22 = v17;
    v18 = --v23;
    v14[9] = (float)v22;
    v14[14] = 0.0;
  }
  while ( v18 > 3 );
  if ( v26 )
    sub_100F2FF0((int)v26);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
