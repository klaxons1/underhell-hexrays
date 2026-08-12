char __thiscall sub_101D4550(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char *Src)
{
  _DWORD *v6; // ebx
  unsigned int v7; // ecx
  unsigned int i; // edi
  _DWORD *v9; // ecx
  unsigned int j; // edx
  char *v11; // eax
  int v12; // ebx
  int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx

  v6 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v7 = a5;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v6[2] )
      break;
    v9 = (_DWORD *)(v6[5] + 16 * a2 + (i + a3) * v6[3]);
    for ( j = 0; j < a4; v6 = this )
    {
      if ( j + a2 >= v6[1] )
        break;
      v11 = &Src[16 * j + 16 * i * a4];
      *(_DWORD *)v11 = *v9;
      *((_DWORD *)v11 + 1) = v9[1];
      *((_DWORD *)v11 + 2) = v9[2];
      v12 = v9[3];
      ++j;
      v9 += 4;
      *((_DWORD *)v11 + 3) = v12;
    }
    if ( j < a4 )
    {
      v13 = i * a4;
      v14 = a4 - j;
      if ( v14 > j )
        sub_101D5E90(j, a4 >> 1, &Src[4 * v13]);
      else
        memcpy_0(&Src[4 * v13 + 4 * j], &Src[4 * v13], 4 * v14);
    }
    v7 = a5;
  }
  if ( i < v7 )
  {
    v15 = v7 - i;
    if ( v15 <= i )
    {
      memcpy_0(&Src[4 * i * a4], Src, 4 * v15 * a4);
      return 1;
    }
    sub_101D5ED0(i, a4, a5 >> 1, Src);
  }
  return 1;
}
