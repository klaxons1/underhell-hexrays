_DWORD *__cdecl sub_1020ED10(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1580);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_1020C250(v2);
    *v3 = &COrnamentProp::`vftable';
    v3[280] = &COrnamentProp::`vftable';
    v3[281] = &COrnamentProp::`vftable';
    v3[361] = &COrnamentProp::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
