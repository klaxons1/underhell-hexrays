_BYTE *__cdecl sub_101C0E60(unsigned int a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v4; // edi
  unsigned __int16 *v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  result = (_BYTE *)(a1 + 8 * a3);
  if ( a1 < (unsigned int)result )
  {
    v4 = ((unsigned int)(8 * a3 - 1) >> 3) + 1;
    result = a2;
    v5 = (unsigned __int16 *)(a1 + 4);
    do
    {
      if ( (*(v5 - 2) & 0xFFF0u) <= 0xFF0 )
        v6 = *(v5 - 2) >> 4;
      else
        LOBYTE(v6) = -1;
      *result = v6;
      if ( (*(v5 - 1) & 0xFFF0u) <= 0xFF0 )
        v7 = *(v5 - 1) >> 4;
      else
        LOBYTE(v7) = -1;
      result[1] = v7;
      if ( (*v5 & 0xFFF0u) <= 0xFF0 )
        v8 = *v5 >> 4;
      else
        LOBYTE(v8) = -1;
      result[2] = v8;
      if ( (v5[1] & 0xFF00u) <= 0xFF00 )
        v9 = HIBYTE(v5[1]);
      else
        LOBYTE(v9) = -1;
      result[3] = v9;
      v5 += 4;
      result += 4;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
