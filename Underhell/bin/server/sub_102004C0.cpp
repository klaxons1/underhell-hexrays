unsigned int __thiscall sub_102004C0(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [esp-8h] [ebp-10h]

  result = this[211];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[211] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        HIDWORD(v7) = this;
        LODWORD(v7) = this;
        sub_1010DD80(this + 224, v7, 0.0);
        v4 = this[211];
        if ( v4 == -1 || off_1061BE18[4 * (this[211] & 0xFFF) + 2] != v4 >> 12 )
          v5 = 0;
        else
          v5 = off_1061BE18[4 * (this[211] & 0xFFF) + 1];
        sub_1025FAC0(v5);
        v6 = this[212];
        if ( v6 == -1 || off_1061BE18[4 * (this[212] & 0xFFF) + 2] != v6 >> 12 )
          return sub_1025FAC0(0);
        else
          return sub_1025FAC0(off_1061BE18[4 * (this[212] & 0xFFF) + 1]);
      }
    }
  }
  return result;
}
