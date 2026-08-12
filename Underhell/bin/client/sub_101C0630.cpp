_BYTE *__cdecl sub_101C0630(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // ecx
  _BYTE *result; // eax
  unsigned int v5; // esi

  v3 = a1;
  result = a3;
  v5 = (unsigned int)&a1[4 * (_DWORD)a3];
  if ( (unsigned int)a1 < v5 )
  {
    result = a2;
    do
    {
      if ( v3[3] )
      {
        result[2] = *v3;
        result[1] = v3[1];
        *result = v3[2];
      }
      else
      {
        result[2] = 0;
        result[1] = 0;
        *result = -1;
      }
      v3 += 4;
      result += 3;
    }
    while ( (unsigned int)v3 < v5 );
  }
  return result;
}
