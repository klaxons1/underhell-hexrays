char __thiscall sub_1026AAB0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // edx
  _DWORD *i; // edi
  int v6; // ecx
  int v8; // [esp+4h] [ebp-4h]

  if ( !a2 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return 0;
  v3 = this[4];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  v8 = this[1];
  for ( i = (_DWORD *)(v8 + 16); ; i += 5 )
  {
    v6 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v6 == a2 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  *(_DWORD *)(v8 + 20 * v4 + 16) = -1;
  return 1;
}
