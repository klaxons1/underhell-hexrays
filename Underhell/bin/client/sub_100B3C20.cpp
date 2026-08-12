bool __stdcall sub_100B3C20(int a1)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C) )
    return 1;
  v2 = sub_100422D0();
  if ( !v2 )
    return 1;
  v3 = *(_DWORD *)(v2 + 3520);
  if ( *(_DWORD *)(dword_1042FB4C + 48) )
    v3 = *(_DWORD *)(dword_1042FB4C + 48);
  if ( (v3 & 4) != 0 )
    return 1;
  v4 = a1;
  if ( (a1 & 0x10) != 0 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 416))(v2) <= 0 )
      return 1;
    v4 = a1;
  }
  if ( (v4 & 0x20) != 0 && !*(_BYTE *)(v2 + 3681) )
    return 1;
  return (v4 & v3) != 0;
}
