char __thiscall sub_101D5A30(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        _WORD *Src,
        __int16 a7,
        char a8)
{
  _DWORD *v8; // ebx
  unsigned int v9; // ecx
  unsigned int i; // edi
  _DWORD *v11; // esi
  unsigned int j; // eax
  __int16 v13; // bx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  char *v16; // ecx
  unsigned int v17; // ecx

  v8 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v9 = a5;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v8[2] )
      break;
    v11 = (_DWORD *)(v8[5] + (i + a3) * v8[3] + 4 * a2);
    for ( j = 0; j < a4; v8 = this )
    {
      if ( j + a2 >= v8[1] )
        break;
      v13 = a7 & (*v11 >> a8);
      v14 = j + i * a4;
      ++j;
      ++v11;
      Src[v14] = v13;
    }
    if ( j < a4 )
    {
      v15 = a4 - j;
      v16 = (char *)&Src[i * a4];
      if ( v15 > j )
        sub_101D4D70(j, a4 >> 1, v16);
      else
        memcpy_0(&v16[2 * j], v16, 2 * v15);
    }
    v9 = a5;
  }
  if ( i < v9 )
  {
    v17 = v9 - i;
    if ( v17 <= i )
    {
      memcpy_0(&Src[i * a4], Src, 2 * v17 * a4);
      return 1;
    }
    sub_101D5480(i, a4, a5 >> 1, (char *)Src);
  }
  return 1;
}
