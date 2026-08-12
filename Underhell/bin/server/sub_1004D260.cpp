int __cdecl sub_1004D260(int a1, int a2)
{
  int v2; // esi

  v2 = sub_100D6340(852);
  if ( v2 )
  {
    sub_100E33C0(0);
    *(_DWORD *)v2 = &CRallyPoint::`vftable';
    *(_DWORD *)(v2 + 836) = -1;
    *(_DWORD *)(v2 + 824) = 0;
    *(_DWORD *)(v2 + 840) = 5;
    *(_DWORD *)(v2 + 848) = -1;
    *(_WORD *)(v2 + 822) = -1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a2);
    return v2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
