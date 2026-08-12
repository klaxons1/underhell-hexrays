int __thiscall sub_1007AE80(_WORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi

  if ( *this == 0xFFFF )
    return 0;
  while ( 1 )
  {
    v2 = (unsigned __int16)*this;
    v3 = *((_DWORD *)off_103DCD78 + 24591);
    v4 = *(_DWORD *)(v3 + 8 * v2);
    *this = *(_WORD *)(v3 + 8 * v2 + 6);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 32))(v4 + 8) )
      break;
    if ( *this == 0xFFFF )
      return 0;
  }
  return v4;
}
