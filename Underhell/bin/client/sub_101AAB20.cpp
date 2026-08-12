void __usercall sub_101AAB20(int a1@<edi>, int a2, int a3)
{
  double v3; // st7
  int *v4; // esi
  int v5; // eax
  float *v6; // eax
  float *v7; // esi
  char v8; // al
  _BYTE v9[12]; // [esp+30h] [ebp-50h] BYREF
  float v10; // [esp+3Ch] [ebp-44h]
  float v11; // [esp+4Ch] [ebp-34h]
  float v12; // [esp+5Ch] [ebp-24h]
  float v13[3]; // [esp+60h] [ebp-20h] BYREF
  float v14; // [esp+6Ch] [ebp-14h] BYREF
  float v15; // [esp+70h] [ebp-10h]
  float v16; // [esp+74h] [ebp-Ch]
  int v17; // [esp+78h] [ebp-8h]
  int *v18; // [esp+7Ch] [ebp-4h] BYREF
  int v19; // [esp+8Ch] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Gunship", 0, "Particle/Effect_Rendering", 0, 4);
  if ( sub_10175F70(a2, a3, v9) )
  {
    sub_100F15C0(&v18, (int)"MuzzleFlash", a2, a3, 0);
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           2.5,
           4.5);
    *(float *)&v19 = v3;
    v4 = v18;
    v14 = v3 + v3;
    v15 = (v3 + v3) * 0.0;
    v16 = v15;
    v5 = sub_100F29B0((int)v18, a1, (int)v18, "effects/gunshipmuzzle");
    v6 = sub_100F2B60((int)v4, (int)v4, 60, v5, &v14);
    v7 = v6;
    if ( v6 )
    {
      v6[11] = 0.0;
      v6[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 0.050000001,
                 0.1);
      v7[6] = 0.0;
      v7[7] = 0.0;
      v7[8] = 0.0;
      v7[12] = NAN;
      *((_BYTE *)v7 + 52) = 0x80;
      v17 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    6.0,
                    8.0)
                * 10.0
                * 0.1428571428571428
                * *(float *)&v19);
      v8 = v17;
      *((_BYTE *)v7 + 53) = v17;
      *((_BYTE *)v7 + 54) = v8;
      v7[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      v7[14] = 0.0;
      v13[0] = v10;
      v13[1] = v11;
      v13[2] = v12;
      sub_101AA1E0(v13, 6, 128, 256, a2);
    }
    if ( v18 )
      sub_100F2FF0((int)v18);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
