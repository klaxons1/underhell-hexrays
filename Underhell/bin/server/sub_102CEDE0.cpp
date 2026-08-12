int __thiscall sub_102CEDE0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = this[230];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[230] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
        sub_102CDC40(this);
    }
  }
  return sub_100E20F0(this);
}
