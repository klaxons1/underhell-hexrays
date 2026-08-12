int __thiscall sub_10057540(int *this, int a2, int a3, int a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // edx
  float *v17; // edx
  float *v18; // edx
  float *v19; // edx
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // [esp+14h] [ebp+Ch]

  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100798B0(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 12 * (a2 + a3)), (const void *)(v9 + 12 * a2), 12 * v11);
  if ( a4 )
  {
    v12 = 0;
    if ( a3 >= 4 )
    {
      v13 = 12 * a2;
      v14 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v15 = a4 + 20;
      v24 = 4 * v14;
      do
      {
        v16 = *this;
        *(float *)(v16 + v13) = *(float *)(v15 - 20);
        v15 += 48;
        *(float *)(v16 + v13 + 4) = *(float *)(v15 - 64);
        *(float *)(v16 + v13 + 8) = *(float *)(v15 - 60);
        v17 = (float *)(v13 + *this + 12);
        *v17 = *(float *)(v15 - 56);
        v17[1] = *(float *)(v15 - 52);
        v17[2] = *(float *)(v15 - 48);
        v18 = (float *)(v13 + *this + 24);
        *v18 = *(float *)(v15 - 44);
        v18[1] = *(float *)(v15 - 40);
        v18[2] = *(float *)(v15 - 36);
        v19 = (float *)(v13 + *this + 36);
        *v19 = *(float *)(v15 - 32);
        v13 += 48;
        --v14;
        v19[1] = *(float *)(v15 - 28);
        v19[2] = *(float *)(v15 - 24);
      }
      while ( v14 );
      v12 = v24;
      v10 = a2;
    }
    if ( v12 < a3 )
    {
      v20 = 12 * (v12 + v10);
      v21 = a4 + 12 * v12 + 8;
      v22 = a3 - v12;
      do
      {
        v23 = *this;
        *(float *)(v23 + v20) = *(float *)(v21 - 8);
        v21 += 12;
        v20 += 12;
        --v22;
        *(float *)(v23 + v20 - 8) = *(float *)(v21 - 16);
        *(float *)(v23 + v20 - 4) = *(float *)(v21 - 12);
      }
      while ( v22 );
      return a2;
    }
  }
  return v10;
}
