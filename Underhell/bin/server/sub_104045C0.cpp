int __cdecl sub_104045C0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(904);
  v3 = v2;
  if ( v2 )
  {
    sub_102425D0(v2);
    *(_DWORD *)v3 = &CLaserDot::`vftable';
    *(_DWORD *)(v3 + 892) = -1;
    *(_BYTE *)(v3 + 897) = 1;
    *(_DWORD *)(v3 + 900) = dword_106F04AC;
    dword_106F04AC = v3;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
