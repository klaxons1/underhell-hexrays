int __thiscall sub_103E6020(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // edx
  unsigned int v3; // eax
  unsigned int v5; // eax
  int *v6; // ecx

  v1 = this[113];
  if ( v1 != -1
    && (v2 = &off_1061BE18[4 * (this[113] & 0xFFF) + 1], v3 = v1 >> 12, off_1061BE18[4 * (this[113] & 0xFFF) + 2] == v3)
    && *v2 )
  {
    if ( off_1061BE18[4 * (this[113] & 0xFFF) + 2] == v3 )
      return *v2;
  }
  else
  {
    v5 = this[111];
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (this[111] & 0xFFF) + 1];
      if ( v6[1] == v5 >> 12 )
        return *v6;
    }
  }
  return 0;
}
