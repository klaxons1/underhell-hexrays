float *__cdecl sub_101922F0(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi
  int v4; // eax

  v2 = (float *)sub_10034900(0x4D0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *(_DWORD *)v3 = &C_MortarShell::`vftable';
  *((_DWORD *)v3 + 1) = &C_MortarShell::`vftable';
  *((_DWORD *)v3 + 2) = &C_MortarShell::`vftable';
  *((_DWORD *)v3 + 3) = &C_MortarShell::`vftable';
  v3[299] = -1.0;
  v3[298] = 0.0;
  v4 = *(_DWORD *)v3;
  v3[300] = 0.0;
  (*(void (__thiscall **)(float *, int, int))(v4 + 160))(v3, a1, a2);
  return v3 + 2;
}
