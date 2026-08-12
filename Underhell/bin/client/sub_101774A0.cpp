void __usercall sub_101774A0(int a1@<edi>, float *a2, int a3)
{
  float *v3; // esi
  int v4; // eax
  float *v5; // eax
  float *v6; // esi
  double v7; // st7
  int v8; // eax
  float v9[4]; // [esp+2Ch] [ebp-14h] BYREF
  float *v10; // [esp+3Ch] [ebp-4h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GunshipMuzzleEffect", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v10, (int)"MuzzleFlash");
  sub_100F3060((int)v10, a2);
  sub_101EDFB0(a3);
  v9[0] = *a2;
  v9[1] = a2[1];
  v9[2] = a2[2];
  v3 = v10;
  v4 = sub_100F29B0((int)v10, a1, (int)v10, "effects/gunshipmuzzle");
  v5 = sub_100F2B60((int)v3, (int)v3, 60, v4, v9);
  v6 = v5;
  if ( v5 )
  {
    v5[11] = 0.0;
    v5[10] = 0.15000001;
    v5[6] = 0.0;
    v5[7] = 0.0;
    v5[8] = 0.0;
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           40.0,
           50.0);
    LODWORD(v9[3]) = (int)v7;
    *((_BYTE *)v6 + 53) = (int)v7;
    *((_BYTE *)v6 + 54) = (int)v7;
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v6[12] = NAN;
    *((_BYTE *)v6 + 52) = -1;
    v6[9] = (float)v8;
    v6[14] = 0.15000001;
  }
  if ( v10 )
    sub_100F2FF0((int)v10);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
