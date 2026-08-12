unsigned int __thiscall sub_10337490(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax
  int v4; // edx

  result = this[1492];
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (this[1492] & 0xFFF) + 2] != result) )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[1492] & 0xFFF) + 1];
  if ( v4 == a3 )
    this[1492] = -1;
  return result;
}
