int __thiscall sub_10338B60(_DWORD *this, int a2)
{
  int v2; // edi
  int result; // eax
  _DWORD *i; // esi
  int v5; // edx

  v2 = this[18];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = this + 2; ; ++i )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
