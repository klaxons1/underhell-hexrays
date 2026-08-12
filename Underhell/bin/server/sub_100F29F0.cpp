_DWORD *__cdecl sub_100F29F0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1972);
  v3 = v2;
  if ( v2 )
  {
    sub_100F23C0(v2);
    v3[491] = 0;
    v3[492] = 0;
    *v3 = &CGenericFlexCycler::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
