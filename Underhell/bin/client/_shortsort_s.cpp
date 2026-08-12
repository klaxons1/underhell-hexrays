_BYTE *__usercall shortsort_s@<eax>(
        _BYTE *result@<eax>,
        unsigned int a2,
        int a3,
        int (__cdecl *a4)(int, unsigned int, unsigned int),
        int a5)
{
  unsigned int v5; // edx
  unsigned int v6; // edi
  int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  char v12; // dl

  v5 = a2;
  v6 = (unsigned int)result;
  if ( (unsigned int)result > a2 )
  {
    v7 = a3;
    do
    {
      v8 = a2 + a3;
      v9 = v5;
      if ( a2 + a3 <= v6 )
      {
        do
        {
          if ( a4(a5, v8, v9) > 0 )
            v9 = v8;
          v8 += a3;
        }
        while ( v8 <= v6 );
        v7 = a3;
        v5 = a2;
      }
      v10 = v7;
      result = (_BYTE *)v6;
      if ( v9 != v6 && v7 )
      {
        v11 = v9 - v6;
        do
        {
          v12 = result[v11];
          result[v11] = *result;
          *result++ = v12;
          --v10;
        }
        while ( v10 );
        v7 = a3;
        v5 = a2;
      }
      v6 -= v7;
    }
    while ( v6 > v5 );
  }
  return result;
}
