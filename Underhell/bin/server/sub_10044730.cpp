char __usercall sub_10044730@<al>(int a1@<eax>, int a2, int a3)
{
  char v5; // al
  int v6; // esi

  if ( *(_BYTE *)(a1 + 3549) )
    return 1;
  if ( sub_10023500() )
  {
    if ( *(_DWORD *)(a1 + 2324) == 4 || (v5 = sub_100697A0(62, 0)) != 0 )
      v5 = 1;
    if ( (*(_BYTE *)(a1 + 2716) & 8) != 0 && !v5 )
      return 1;
  }
  if ( a2 > a3
    && (*(_DWORD *)(dword_106907FC + 48) && *(_DWORD *)(dword_10690604 + 48)
     || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 296))(a1)
     || (v6 = *(_DWORD *)(a1 + 2380), v6 != 11) && v6 != 6) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
