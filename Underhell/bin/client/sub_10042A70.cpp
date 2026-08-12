bool __thiscall sub_10042A70(_DWORD *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi

  v1 = this[1066];
  if ( v1 == -1 )
    return 0;
  v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1066] & 0xFFF) + 4);
  if ( v2[1] != v1 >> 12 )
    return 0;
  v3 = *v2;
  if ( !*v2 )
    return 0;
  return (unsigned __int8)sub_100707A0(*v2) && (unsigned __int8)sub_100707B0(v3);
}
