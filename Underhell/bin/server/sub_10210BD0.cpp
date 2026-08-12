_DWORD *__cdecl sub_10210BD0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1688);
  v3 = v2;
  if ( v2 )
  {
    sub_1020CE30(v2);
    *v3 = &CPhysSphere::`vftable';
    v3[280] = &CPhysSphere::`vftable';
    v3[281] = &CPhysSphere::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
