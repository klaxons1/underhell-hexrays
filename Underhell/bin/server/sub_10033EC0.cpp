int __thiscall sub_10033EC0(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int result; // eax

  if ( this[581] == 4 )
  {
    v3 = this[672];
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v5 )
            v6 = *v4;
          else
            v6 = 0;
          sub_10231CC0(v6, 1);
        }
      }
    }
  }
  result = sub_100697A0(62, 0);
  if ( (_BYTE)result )
    return sub_10227360(this, 0, 0, 0);
  return result;
}
