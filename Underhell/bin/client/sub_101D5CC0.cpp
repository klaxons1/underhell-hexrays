char __thiscall sub_101D5CC0(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char *Src)
{
  _DWORD *v6; // edi
  unsigned int v7; // ecx
  unsigned int i; // ebx
  _DWORD *v9; // ecx
  unsigned int j; // esi
  char *v11; // edx
  __int16 v12; // ax
  __int16 v13; // di
  unsigned int v14; // ebp
  char *v15; // eax
  unsigned int v16; // ecx

  v6 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v7 = a5;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= v6[2] )
      break;
    v9 = (_DWORD *)(v6[5] + (i + a3) * v6[3] + 4 * a2);
    for ( j = 0; j < a4; v6 = this )
    {
      if ( j + a2 >= v6[1] )
        break;
      v11 = &Src[8 * j + 8 * i * a4];
      *(_WORD *)v11 = (*v9 >> 20 << 6) | (unsigned __int8)(*v9 >> 22);
      *((_WORD *)v11 + 1) = ((unsigned __int16)(*v9 >> 10) << 6) | (unsigned __int8)(*v9 >> 12);
      *((_WORD *)v11 + 2) = (*(_WORD *)v9 << 6) | (unsigned __int8)(*(_WORD *)v9 >> 2);
      v12 = (unsigned __int8)HIBYTE(*v9) >> 6;
      v13 = v12 | (4 * (v12 | (4 * (v12 | (4 * (v12 | (4 * (v12 | (4 * (v12 | (4 * (v12 | (4 * (*v9 >> 30))))))))))))));
      ++j;
      ++v9;
      *((_WORD *)v11 + 3) = v13;
    }
    if ( j < a4 )
    {
      v14 = a4 - j;
      v15 = &Src[2 * i * a4];
      if ( v14 > j )
        sub_101D4D70(j, a4 >> 1, v15);
      else
        memcpy_0(&v15[2 * j], v15, 2 * v14);
    }
    v7 = a5;
  }
  if ( i < v7 )
  {
    v16 = v7 - i;
    if ( v16 <= i )
    {
      memcpy_0(&Src[2 * i * a4], Src, 2 * v16 * a4);
      return 1;
    }
    sub_101D5480(i, a4, a5 >> 1, Src);
  }
  return 1;
}
