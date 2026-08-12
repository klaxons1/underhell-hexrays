_BYTE *__cdecl sub_101C0770(_BYTE *a1, _WORD *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v5; // esi

  result = a1;
  v5 = (unsigned int)&a1[4 * a3];
  if ( (unsigned int)a1 < v5 )
  {
    do
    {
      *a2 = (result[2] >> 3) | (4 * (result[1] & 0xF8 | (32 * (*result & 0xF8))));
      result += 4;
      ++a2;
    }
    while ( (unsigned int)result < v5 );
  }
  return result;
}
