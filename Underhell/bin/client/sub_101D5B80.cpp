char __thiscall sub_101D5B80(_DWORD *this, unsigned int a2, unsigned int a3, char a4, unsigned __int8 a5, _DWORD *Src)
{
  _DWORD *v6; // edi
  unsigned int v7; // ecx
  unsigned __int8 v8; // bl
  unsigned int i; // esi
  int *v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // edi
  int v15; // edx
  unsigned int v16; // ecx
  char *v17; // edx
  unsigned int v18; // ecx

  v6 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v7 = a5;
  v8 = a4;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v6[2] )
      break;
    v10 = (int *)(v6[5] + (i + a3) * v6[3] + 4 * a2);
    v11 = v8;
    v12 = 0;
    if ( v8 )
    {
      do
      {
        if ( v12 + a2 >= v6[1] )
          break;
        v13 = *v10;
        v14 = v12 + i * v11;
        ++v12;
        ++v10;
        Src[v14] = v13;
        v6 = this;
      }
      while ( v12 < v11 );
      v8 = a4;
    }
    if ( v12 < v11 )
    {
      v15 = i * v11;
      v16 = v11 - v12;
      v17 = (char *)&Src[v15];
      if ( v16 > v12 )
        sub_101D5E90(v12, v8 >> 1, v17);
      else
        memcpy_0(&v17[4 * v12], v17, 4 * v16);
    }
    v7 = a5;
  }
  if ( i < v7 )
  {
    v18 = v7 - i;
    if ( v18 <= i )
    {
      memcpy_0(&Src[i * v8], Src, 4 * v18 * v8);
      return 1;
    }
    sub_101D5ED0(i, v8, a5 >> 1, Src);
  }
  return 1;
}
