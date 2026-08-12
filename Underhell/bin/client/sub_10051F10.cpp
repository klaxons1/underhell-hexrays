float *__cdecl sub_10051F10(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_10034900(0x4B0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  v3[298] = 0.0;
  *(_DWORD *)v3 = &C_FuncConveyor::`vftable';
  *((_DWORD *)v3 + 1) = &C_FuncConveyor::`vftable';
  *((_DWORD *)v3 + 2) = &C_FuncConveyor::`vftable';
  *((_DWORD *)v3 + 3) = &C_FuncConveyor::`vftable';
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
