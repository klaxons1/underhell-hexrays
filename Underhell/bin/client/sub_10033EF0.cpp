int __cdecl sub_10033EF0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_10034900(0x4B0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000(v2);
  *(float *)(v3 + 1192) = 0.0;
  *(_DWORD *)v3 = &C_BaseDoor::`vftable';
  *(_DWORD *)(v3 + 4) = &C_BaseDoor::`vftable';
  *(_DWORD *)(v3 + 8) = &C_BaseDoor::`vftable';
  *(_DWORD *)(v3 + 12) = &C_BaseDoor::`vftable';
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
