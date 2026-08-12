char __thiscall sub_101D6380(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        _BYTE *Src,
        char a7)
{
  _DWORD *v7; // ebx
  unsigned int v8; // ecx
  unsigned int i; // ebp
  _DWORD *v10; // edi
  unsigned int j; // eax
  int v12; // edx
  unsigned int v13; // ecx
  char *v14; // ecx
  size_t v15; // esi
  unsigned int v16; // ecx

  v7 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v8 = a5;
  for ( i = 0; i < a5; ++i )
  {
    if ( a3 + i >= v7[2] )
      break;
    v10 = (_DWORD *)(v7[5] + (a3 + i) * v7[3] + 4 * a2);
    for ( j = 0; j < a4; v7 = this )
    {
      if ( j + a2 >= v7[1] )
        break;
      v12 = *v10 >> a7;
      v13 = j + i * a4;
      ++j;
      ++v10;
      Src[v13] = v12;
    }
    if ( j < a4 )
    {
      v14 = &Src[i * a4];
      v15 = a4 - j;
      if ( v15 > j )
        sub_101D6610(j, a4 >> 1, v14);
      else
        memcpy_0(&v14[j], v14, v15);
    }
    v8 = a5;
  }
  if ( i < v8 )
  {
    v16 = v8 - i;
    if ( v16 <= i )
    {
      memcpy_0(&Src[i * a4], Src, v16 * a4);
      return 1;
    }
    sub_101D6650(i, a4, a5 >> 1, Src);
  }
  return 1;
}
