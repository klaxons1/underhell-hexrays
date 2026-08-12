_DWORD *__cdecl sub_1025BCD0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1184);
  v3 = v2;
  if ( v2 )
  {
    sub_102585C0(v2);
    *v3 = &CChangeLevel::`vftable';
    v3[293] = -1;
    v3[290] = 0;
    v3[294] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
