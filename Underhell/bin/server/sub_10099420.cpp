_DWORD *__cdecl sub_10099420(int a1, int a2)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)sub_100D6340(836);
  if ( v2 )
  {
    sub_100E33C0(0);
    v2[200] = &IEntityListener::`vftable';
    *v2 = &CAI_Relationship::`vftable';
    v2[200] = &CAI_Relationship::`vftable';
    v2[205] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a2);
    return v2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
