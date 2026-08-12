void __cdecl sub_101767D0(float *a1, float *a2, int a3)
{
  double v4; // st7
  double (__thiscall *v5)(int); // edx
  float v6; // [esp+30h] [ebp-20h]
  int v7[3]; // [esp+40h] [ebp-10h] BYREF
  float v8; // [esp+4Ch] [ebp-4h]
  float v9; // [esp+58h] [ebp+8h]
  float v10; // [esp+5Ch] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GaussTracer", 0, "Particle/Effect_Rendering", 0, 4);
  *(float *)v7 = *a2 - *a1;
  *(float *)&v7[1] = a2[1] - a1[1];
  *(float *)&v7[2] = a2[2] - a1[2];
  v4 = off_103EDFEC();
  v10 = v4;
  if ( v4 > 256.0 )
  {
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           250.0,
           500.0);
    v5 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
    v7[0] = (int)"effects/spark";
    v8 = (float)a3;
    v6 = v5(dword_10413198);
    sub_1008DBD0((int)a1, (int)v7, v8, v9, v10, v6, 5.0, COERCE_INT(8.0));
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
