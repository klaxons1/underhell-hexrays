int __cdecl sub_102D6650(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(2156);
  v3 = v2;
  if ( v2 )
  {
    sub_100F4EC0(v2);
    *(_DWORD *)v3 = &CGrenadeSpit::`vftable';
    *(_DWORD *)(v3 + 2104) = &CGrenadeSpit::`vftable';
    *(_DWORD *)(v3 + 2144) = -1;
    *(_DWORD *)(v3 + 2148) = 0;
    *(_BYTE *)(v3 + 2152) = 1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
