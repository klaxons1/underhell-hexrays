float *__cdecl sub_10165090(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100DDA40(76);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_101506B0(v2);
  v3[8] = 0.0;
  v3[9] = 0.0;
  v3[10] = 0.0;
  *(_DWORD *)v3 = &C_TEBaseBeam::`vftable';
  v3[12] = 0.0;
  *((_DWORD *)v3 + 1) = &C_TEBaseBeam::`vftable';
  v3[4] = 0.0;
  v3[5] = 0.0;
  v3[6] = 0.0;
  v3[7] = 0.0;
  v3[11] = 0.0;
  v3[16] = 0.0;
  v3[15] = 0.0;
  v3[14] = 0.0;
  v3[13] = 0.0;
  v3[17] = 0.0;
  v3[18] = 0.0;
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 44))(v3, a1, a2);
  return v3 + 1;
}
