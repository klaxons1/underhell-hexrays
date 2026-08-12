_DWORD *__cdecl sub_101683B0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(948);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_10246870(v2);
    *v3 = &CGunTarget::`vftable';
    v3[230] = -1;
    v3[234] = -1;
    v3[231] = 0;
    v3[235] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
