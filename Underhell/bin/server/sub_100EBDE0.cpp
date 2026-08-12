int __thiscall sub_100EBDE0(unsigned int *this, int a2)
{
  unsigned int v2; // eax
  unsigned int *v3; // ecx
  int v4; // edx
  int result; // eax

  v2 = this[104];
  v3 = this + 104;
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (v2 & 0xFFF) + 1];
  result = a2;
  if ( v4 != a2 )
    return sub_100EA720(v3, a2);
  return result;
}
