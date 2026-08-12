int __cdecl sub_100F7560(int a1, int a2)
{
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 && *(_DWORD *)a2 && a1 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 488))(a1, *(_DWORD *)a2);
  *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8) = *(_DWORD *)(a2 + 8);
  if ( a2 == dword_10435F04 )
    dword_10435F04 = *(_DWORD *)(a2 + 8);
  --dword_10435EF8;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  return sub_1022FD10(a2);
}
