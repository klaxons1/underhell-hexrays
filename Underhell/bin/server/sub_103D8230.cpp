_DWORD *__cdecl sub_103D8230(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1168);
  v3 = v2;
  if ( v2 )
  {
    sub_100C2130(v2);
    *v3 = &CPropThumper::`vftable';
    v3[283] = -1;
    v3[288] = -1;
    v3[285] = 0;
    v3[289] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
