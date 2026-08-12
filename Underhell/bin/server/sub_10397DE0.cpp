bool __thiscall sub_10397DE0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  bool result; // al

  result = 1;
  if ( this[629] )
  {
    v1 = this[672];
    if ( v1 != -1 )
    {
      v2 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1];
      if ( v2[1] == v1 >> 12 )
      {
        if ( *v2 )
          return 0;
      }
    }
  }
  return result;
}
