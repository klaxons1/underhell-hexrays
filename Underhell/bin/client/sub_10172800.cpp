float *__cdecl sub_10172800(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi
  float v4; // eax
  void (__thiscall *v5)(float *, int, int); // eax

  v2 = (float *)sub_100DDA40(28);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_101506B0(v2);
  *(_DWORD *)v3 = &C_TEParticleSystem::`vftable';
  *((_DWORD *)v3 + 1) = &C_TEParticleSystem::`vftable';
  v3[4] = 0.0;
  v4 = *v3;
  v3[5] = 0.0;
  v5 = *(void (__thiscall **)(float *, int, int))(LODWORD(v4) + 44);
  v3[6] = 0.0;
  v5(v3, a1, a2);
  return v3 + 1;
}
