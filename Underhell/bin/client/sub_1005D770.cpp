int __cdecl sub_1005D770(int a1, int a2)
{
  void *v2; // eax
  int v3; // esi

  v2 = sub_10034900(0x4D0u);
  v3 = (int)v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *(_DWORD *)v3 = &C_PointCamera::`vftable';
  *(_DWORD *)(v3 + 4) = &C_PointCamera::`vftable';
  *(_DWORD *)(v3 + 8) = &C_PointCamera::`vftable';
  *(_DWORD *)(v3 + 12) = &C_PointCamera::`vftable';
  *(_BYTE *)(v3 + 1220) = 0;
  *(_BYTE *)(v3 + 1200) = 0;
  *(_DWORD *)(v3 + 1228) = dword_1040D5B4;
  dword_1040D5B4 = v3;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
