int __thiscall sub_100E0910(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  unsigned int *v4; // ecx
  int v5; // edx
  int result; // eax

  v3 = this[103];
  v4 = this + 103;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
  result = a2;
  if ( v5 != a2 )
  {
    sub_100DB4E0(v4, a2);
    return sub_100E8D20(this);
  }
  return result;
}
