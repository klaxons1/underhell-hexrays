_DWORD *__cdecl sub_10150BE0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1004);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_10246870(v2);
    *v3 = &CFuncMoveLinear::`vftable';
    v3[242] = -1;
    v3[239] = 0;
    v3[243] = 5;
    v3[248] = -1;
    v3[245] = 0;
    v3[249] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
