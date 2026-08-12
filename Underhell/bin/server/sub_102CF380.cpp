int __thiscall sub_102CF380(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax

  v2 = this[349];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[349] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        this[349] = -1;
      }
    }
  }
  v6 = this[230];
  if ( v6 != -1 && off_1061BE18[4 * (this[230] & 0xFFF) + 2] == v6 >> 12 && off_1061BE18[4 * (this[230] & 0xFFF) + 1] )
    sub_102CDC40(this);
  return sub_100E20F0(this);
}
