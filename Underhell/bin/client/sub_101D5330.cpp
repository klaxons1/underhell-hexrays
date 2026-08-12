char __thiscall sub_101D5330(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        _DWORD *Src)
{
  _DWORD *v6; // ebp
  unsigned int v7; // ecx
  unsigned int i; // edi
  _DWORD *v9; // esi
  unsigned int j; // ecx
  unsigned int v11; // eax
  int v12; // ebp
  unsigned int v13; // edx
  char *v14; // eax
  unsigned int v15; // ecx

  v6 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v7 = a5;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v6[2] )
      break;
    v9 = (_DWORD *)(v6[5] + (i + a3) * v6[3] + 8 * a2);
    for ( j = 0; j < a4; v6 = this )
    {
      if ( j + a2 >= v6[1] )
        break;
      v11 = j + i * a4;
      Src[2 * v11] = *v9;
      v12 = v9[1];
      ++j;
      v9 += 2;
      Src[2 * v11 + 1] = v12;
    }
    if ( j < a4 )
    {
      v13 = a4 - j;
      v14 = (char *)Src + 2 * i * a4;
      if ( v13 > j )
        sub_101D4D70(j, a4 >> 1, v14);
      else
        memcpy_0(&v14[2 * j], v14, 2 * v13);
    }
    v7 = a5;
  }
  if ( i < v7 )
  {
    v15 = v7 - i;
    if ( v15 <= i )
    {
      memcpy_0((char *)Src + 2 * i * a4, Src, 2 * v15 * a4);
      return 1;
    }
    sub_101D5480(i, a4, a5 >> 1, Src);
  }
  return 1;
}
