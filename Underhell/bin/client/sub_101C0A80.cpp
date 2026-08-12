_BYTE *__cdecl sub_101C0A80(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v4; // esi

  result = a1;
  v4 = (unsigned int)&a1[2 * a3 + a3];
  if ( (unsigned int)a1 < v4 )
  {
    do
    {
      if ( *result || result[1] || result[2] != 0xFF )
      {
        *a2 = *result;
        a2[1] = result[1];
        a2[2] = result[2];
        a2[3] = -1;
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        a2[2] = 0;
        a2[3] = 0;
      }
      result += 3;
      a2 += 4;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
