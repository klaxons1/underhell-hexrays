int __thiscall sub_101B8BA0(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  float *v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // eax

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_102ABFC0(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 4 * (a2 + a3)), (const void *)(v9 + 4 * a2), 4 * v11);
  v12 = a4;
  if ( a4 )
  {
    v13 = 0;
    if ( a3 >= 4 )
    {
      v14 = (float *)(a4 + 8);
      v15 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v16 = 4 * a2;
      v13 = 4 * v15;
      do
      {
        *(float *)(v16 + *this) = *(v14 - 2);
        v16 += 16;
        *(float *)(v16 + *this - 12) = *(v14 - 1);
        v17 = *v14;
        v14 += 4;
        --v15;
        *(float *)(v16 + *this - 8) = v17;
        *(float *)(v16 + *this - 4) = *(v14 - 3);
      }
      while ( v15 );
      v12 = a4;
      v4 = a3;
      v10 = a2;
    }
    if ( v13 < v4 )
    {
      v18 = 4 * (v13 + v10);
      do
      {
        *(float *)(v18 + *this) = *(float *)(v12 + 4 * v13++);
        v18 += 4;
      }
      while ( v13 < v4 );
      return a2;
    }
  }
  return v10;
}
