_DWORD *__thiscall sub_10272280(_DWORD *this, int a2)
{
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // edx

  v3 = this[1];
  result = (_DWORD *)(*this + 4 * (v3 >> 5));
  v5 = 1 << (v3 & 0x1F);
  if ( a2 )
    *result |= v5;
  else
    *result &= ~v5;
  return result;
}
