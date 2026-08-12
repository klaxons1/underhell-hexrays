unsigned int __thiscall sub_103E5C30(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax
  int v4; // ecx
  int *v5; // ecx

  result = this[111];
  if ( result == -1 || off_1061BE18[4 * (this[111] & 0xFFF) + 2] != this[111] >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[111] & 0xFFF) + 1];
  if ( a2 == v4 && result != -1 )
  {
    v5 = &off_1061BE18[4 * (result & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      if ( *v5 )
      {
        if ( v5[1] == result )
          return sub_101E3110((void *)*v5, 0xEu, 0, 1u);
        else
          return sub_101E3110(0, 0xEu, 0, 1u);
      }
    }
  }
  return result;
}
