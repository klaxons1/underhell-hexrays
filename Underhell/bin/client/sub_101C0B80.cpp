_BYTE *__cdecl sub_101C0B80(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v4; // esi

  result = a1;
  v4 = (unsigned int)&a1[4 * a3];
  if ( (unsigned int)a1 < v4 )
  {
    do
    {
      *a2 = result[2];
      a2[1] = result[1];
      a2[2] = *result;
      a2[3] = result[3];
      result += 4;
      a2 += 4;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
