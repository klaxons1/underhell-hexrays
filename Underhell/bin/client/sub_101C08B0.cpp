_BYTE *__cdecl sub_101C08B0(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v4; // esi

  result = a1;
  v4 = (unsigned int)&a1[4 * a3];
  if ( (unsigned int)a1 < v4 )
  {
    do
    {
      *a2 = *result;
      a2[1] = result[1];
      result += 4;
      a2 += 2;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
