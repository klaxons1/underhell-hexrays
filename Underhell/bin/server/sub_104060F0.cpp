int __cdecl sub_104060F0(int a1, int a2)
{
  char *v2; // eax
  int v3; // esi

  v2 = (char *)sub_100D6340(2160);
  v3 = (int)v2;
  if ( v2 )
  {
    sub_100CC980(v2);
    *(_DWORD *)(v3 + 2104) = -1;
    *(_DWORD *)(v3 + 2108) = -1;
    *(_BYTE *)(v3 + 2128) = 0;
    *(_DWORD *)v3 = &CAPCMissile::`vftable';
    *(_DWORD *)(v3 + 2152) = -1;
    *(_DWORD *)(v3 + 2132) = dword_106F04B0;
    dword_106F04B0 = v3;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
