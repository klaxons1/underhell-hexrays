char __thiscall sub_101D4AF0(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 a5,
        _WORD *Src,
        int a7)
{
  _DWORD *v7; // edi
  unsigned int v8; // ecx
  unsigned __int8 v9; // bl
  unsigned int i; // esi
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int16 v14; // bx
  unsigned int v15; // edi
  int v16; // edx
  unsigned int v17; // ecx
  char *v18; // edx
  unsigned int v19; // ecx

  v7 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v8 = a5;
  v9 = a4;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v7[2] )
      break;
    v11 = v7[5] + (i + a3) * v7[3] + 8 * a2;
    v12 = v9;
    v13 = 0;
    if ( v9 )
    {
      do
      {
        if ( v13 + a2 >= v7[1] )
          break;
        v14 = *(_WORD *)(v11 + 2 * a7);
        v15 = v13 + i * v12;
        ++v13;
        v11 += 8;
        Src[v15] = v14;
        v7 = this;
      }
      while ( v13 < v12 );
      v9 = a4;
    }
    if ( v13 < v12 )
    {
      v16 = i * v12;
      v17 = v12 - v13;
      v18 = (char *)&Src[v16];
      if ( v17 > v13 )
        sub_101D4D70(v13, v9 >> 1, v18);
      else
        memcpy_0(&v18[2 * v13], v18, 2 * v17);
    }
    v8 = a5;
  }
  if ( i < v8 )
  {
    v19 = v8 - i;
    if ( v19 <= i )
    {
      memcpy_0(&Src[i * v9], Src, 2 * v19 * v9);
      return 1;
    }
    sub_101D5480(i, v9, a5 >> 1, Src);
  }
  return 1;
}
