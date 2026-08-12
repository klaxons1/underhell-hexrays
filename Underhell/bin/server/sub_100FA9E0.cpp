unsigned int __thiscall sub_100FA9E0(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  _DWORD *v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  result = this[103];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( v3[1] == result )
          v4 = (_DWORD *)*v3;
        else
          v4 = 0;
        result = sub_100FA570(this, v4);
      }
    }
  }
  v5 = this[240];
  if ( v5 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (this[240] & 0xFFF) + 1];
    v6 = v5 >> 12;
    if ( off_1061BE18[4 * (this[240] & 0xFFF) + 2] == v6 )
    {
      if ( *(_DWORD *)result )
      {
        if ( off_1061BE18[4 * (this[240] & 0xFFF) + 2] == v6 )
          return sub_100FA5F0(this, *(_DWORD **)result);
        else
          return sub_100FA5F0(this, 0);
      }
    }
  }
  return result;
}
