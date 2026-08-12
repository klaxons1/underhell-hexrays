_DWORD *__cdecl sub_10136F80(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1056);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_100FA890(v2);
    *v3 = &CEnvBeam::`vftable';
    v3[256] = -1;
    v3[261] = -1;
    v3[258] = 0;
    v3[262] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
