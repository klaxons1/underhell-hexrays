_DWORD *__cdecl sub_102F0E30(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1200);
  v3 = v2;
  if ( v2 )
  {
    sub_100C2130(v2);
    *v3 = &CNewWallHealth::`vftable';
    v3[290] = -1;
    v3[287] = 0;
    v3[291] = 5;
    v3[296] = -1;
    v3[293] = 0;
    v3[297] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
