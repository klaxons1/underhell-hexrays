void __cdecl sub_101A9F10(float *a1, float *a2, int a3, char a4)
{
  double v6; // st7
  double (__thiscall *v7)(int); // edx
  float v8; // [esp+30h] [ebp-24h]
  int v9[3]; // [esp+44h] [ebp-10h] BYREF
  float v10; // [esp+50h] [ebp-4h]
  int savedregs; // [esp+54h] [ebp+0h] BYREF
  float v12; // [esp+5Ch] [ebp+8h]
  float v13; // [esp+60h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_AR2Tracer", 0, "Particle/Effect_Rendering", 0, 4);
  *(float *)v9 = *a2 - *a1;
  *(float *)&v9[1] = a2[1] - a1[1];
  *(float *)&v9[2] = a2[2] - a1[2];
  v6 = off_103EDFEC();
  v13 = v6;
  if ( v6 >= 128.0 )
  {
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            128.0,
            256.0);
    v7 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
    v10 = (float)a3;
    v8 = v7(dword_10413198);
    sub_1008DBD0((int)a1, (int)v9, v10, v12, v13, v8, 0.5, COERCE_INT(1.5));
    if ( a4 )
      sub_1008DF90((int)&savedregs, a1, a2, 2);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
