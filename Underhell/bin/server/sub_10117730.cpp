BOOL __thiscall sub_10117730(_DWORD *this)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  int *v3; // ecx
  BOOL result; // eax

  v1 = this[285];
  result = 1;
  if ( v1 == -1 || off_1061BE18[4 * (this[285] & 0xFFF) + 2] != v1 >> 12 || !off_1061BE18[4 * (this[285] & 0xFFF) + 1] )
  {
    v2 = this[288];
    if ( v2 == -1 )
      return 0;
    v3 = &off_1061BE18[4 * (this[288] & 0xFFF) + 1];
    if ( v3[1] != v2 >> 12 || !*v3 )
      return 0;
  }
  return result;
}
