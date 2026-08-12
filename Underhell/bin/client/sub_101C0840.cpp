_BYTE *__cdecl sub_101C0840(_BYTE *a1, _WORD *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v5; // edi

  result = a1;
  v5 = (unsigned int)&a1[4 * a3];
  if ( (unsigned int)a1 < v5 )
  {
    do
    {
      *a2 = (result[2] >> 4) | *((_WORD *)result + 1) & 0xF000 | result[1] & 0xF0 | (16 * (*result & 0xF0));
      result += 4;
      ++a2;
    }
    while ( (unsigned int)result < v5 );
  }
  return result;
}
