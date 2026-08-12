double __usercall sub_101D9E30@<st0>(
        char a1@<al>,
        int a2@<edi>,
        void *a3,
        int a4,
        float *a5,
        int Size,
        char a7,
        char a8,
        char a9)
{
  int v12; // eax
  double v13; // st7
  double v14; // st5
  double v15; // st6
  signed int i; // edx
  unsigned __int8 v18; // cl
  double v19; // st6
  int v20; // eax
  float v21[3]; // [esp+0h] [ebp-50h]
  float v22; // [esp+Ch] [ebp-44h]
  float v23[16]; // [esp+10h] [ebp-40h] BYREF
  float v24; // [esp+5Ch] [ebp+Ch]
  int v25; // [esp+5Ch] [ebp+Ch]
  float Sizeb; // [esp+60h] [ebp+10h]
  float Sizea; // [esp+60h] [ebp+10h]

  v22 = 0.0;
  if ( Size > 0 )
    memset(a3, 0, Size);
  if ( a5[1] == *a5 )
    return 0.0;
  if ( !a9 )
  {
    a8 = 8;
    a1 = 0;
  }
  sub_101D9D20(a5, a1, v23, a2, a7, a8, a9);
  v12 = 0;
  v24 = 1.0 / ((double)(1 << a8) - 1.0);
  v13 = v24;
  if ( a2 >= 4 )
  {
    do
    {
      v14 = v23[v12];
      v12 += 4;
      v21[v12] = v14 * v13;
      v21[v12 + 1] = v21[v12 + 1] * v13;
      v21[v12 + 2] = v21[v12 + 2] * v13;
      v23[v12 - 1] = v23[v12 - 1] * v13;
    }
    while ( v12 < a2 - 3 );
  }
  for ( ; v12 < a2; v23[v12 - 1] = v15 * v13 )
    v15 = v23[v12++];
  for ( i = 0; i < Size; v22 = *(float *)&v25 + v22 )
  {
    *(float *)&v25 = 10000000.0;
    v18 = 0;
    if ( a2 > 0 )
    {
      v19 = *(float *)(a4 + 4 * i);
      v20 = 0;
      do
      {
        Sizeb = v19 - v23[v20];
        Sizea = Sizeb * Sizeb;
        if ( *(float *)&v25 > (double)Sizea )
        {
          *(float *)&v25 = Sizea;
          *((_BYTE *)a3 + i) = v18;
        }
        v20 = ++v18;
      }
      while ( v18 < a2 );
    }
    ++i;
  }
  return v22;
}
