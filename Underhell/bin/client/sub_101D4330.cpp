char __thiscall sub_101D4330(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float *Src,
        int a7)
{
  _DWORD *v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // edx
  double v14; // st7
  unsigned int v15; // edx
  unsigned int v16; // esi
  float *v17; // ecx
  unsigned int v18; // ecx
  unsigned int i; // [esp+4h] [ebp-Ch]
  float *v22; // [esp+28h] [ebp+18h]
  unsigned int v23; // [esp+28h] [ebp+18h]

  v7 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v8 = a5;
  v9 = 0;
  for ( i = 0; v9 < a5; i = ++v9 )
  {
    if ( a3 + v9 >= v7[2] )
      break;
    v11 = v7[5] + 16 * a2 + (a3 + v9) * v7[3];
    v12 = 0;
    if ( a4 >= 4u )
    {
      while ( 1 )
      {
        if ( v12 + a2 >= v7[1] )
          goto LABEL_20;
        v13 = v9 * a4;
        v22 = &Src[v13 + v12];
        *v22 = *(float *)(v11 + 4 * a7);
        v7 = this;
        if ( v12 + a2 + 1 >= this[1] )
          break;
        v22[1] = *(float *)(v11 + 4 * a7 + 16);
        if ( v12 + a2 + 2 >= this[1] )
        {
          v12 += 2;
          goto LABEL_19;
        }
        Src[v13 + 2 + v12] = *(float *)(v11 + 4 * a7 + 32);
        v7 = this;
        if ( v12 + a2 + 3 >= this[1] )
        {
          v12 += 3;
          goto LABEL_19;
        }
        Src[v12 + 3 + v13] = *(float *)(v11 + 4 * a7 + 48);
        v9 = i;
        v12 += 4;
        v11 += 64;
        if ( v12 >= (unsigned int)a4 - 3 )
          goto LABEL_11;
      }
      ++v12;
LABEL_19:
      v9 = i;
      goto LABEL_20;
    }
LABEL_11:
    if ( v12 < a4 )
    {
      v23 = v12 + a2;
      do
      {
        if ( v23 >= v7[1] )
          break;
        v14 = *(float *)(v11 + 4 * a7);
        ++v23;
        v15 = v12 + v9 * a4;
        ++v12;
        v11 += 16;
        Src[v15] = v14;
        v7 = this;
      }
      while ( v12 < a4 );
LABEL_20:
      if ( v12 < a4 )
      {
        v16 = a4 - v12;
        v17 = &Src[v9 * a4];
        if ( v16 > v12 )
          sub_101D5E90(v12, a4 >> 1, v17);
        else
          memcpy_0(&v17[v12], v17, 4 * v16);
      }
    }
    v8 = a5;
  }
  if ( v9 < v8 )
  {
    v18 = v8 - v9;
    if ( v18 <= v9 )
    {
      memcpy_0(&Src[v9 * a4], Src, 4 * v18 * a4);
      return 1;
    }
    sub_101D5ED0(v9, a4, a5 >> 1, Src);
  }
  return 1;
}
