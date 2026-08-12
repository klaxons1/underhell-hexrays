int __thiscall sub_1026AB50(_DWORD *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  _DWORD *i; // edi
  int v5; // edx

  v2 = this[4];
  v3 = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = (_DWORD *)(this[1] + 16); ; i += 5 )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( ++v3 >= v2 )
      return -1;
  }
  return *(_DWORD *)(*(_DWORD *)(this[6] + 24 * *(_DWORD *)(this[1] + 20 * v3) + 4)
                   + 48 * *(_DWORD *)(this[1] + 20 * v3 + 4)
                   + 4);
}
