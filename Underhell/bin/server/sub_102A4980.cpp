int __thiscall sub_102A4980(int *this, int a2, int a3, int a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // ecx
  float *v18; // ecx
  double v19; // st7
  float *v20; // ecx
  float *v21; // ecx
  float *v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // ebx
  float *v26; // eax
  int v27; // [esp+14h] [ebp+Ch]

  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100C86E0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 16 * (a2 + a3)), (const void *)(v9 + 16 * a2), 16 * v11);
  v12 = a4;
  if ( a4 )
  {
    v13 = 0;
    if ( a3 >= 4 )
    {
      v14 = 16 * a2;
      v15 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v16 = a4 + 24;
      v27 = 4 * v15;
      do
      {
        v17 = *this;
        *(float *)(v17 + v14) = *(float *)(v16 - 24);
        v18 = (float *)(v14 + v17);
        v19 = *(float *)(v16 - 20);
        v16 += 64;
        v18[1] = v19;
        v18[2] = *(float *)(v16 - 80);
        v18[3] = *(float *)(v16 - 76);
        v20 = (float *)(v14 + *this + 16);
        *v20 = *(float *)(v16 - 72);
        v20[1] = *(float *)(v16 - 68);
        v20[2] = *(float *)(v16 - 64);
        v20[3] = *(float *)(v16 - 60);
        v21 = (float *)(v14 + *this + 32);
        *v21 = *(float *)(v16 - 56);
        v21[1] = *(float *)(v16 - 52);
        v21[2] = *(float *)(v16 - 48);
        v21[3] = *(float *)(v16 - 44);
        v22 = (float *)(v14 + *this + 48);
        *v22 = *(float *)(v16 - 40);
        v14 += 64;
        --v15;
        v22[1] = *(float *)(v16 - 36);
        v22[2] = *(float *)(v16 - 32);
        v22[3] = *(float *)(v16 - 28);
      }
      while ( v15 );
      v12 = a4;
      v10 = a2;
      v13 = v27;
    }
    if ( v13 < a3 )
    {
      v23 = 16 * (v13 + v10);
      v24 = 16 * v13 + v12 + 8;
      v25 = a3 - v13;
      do
      {
        v26 = (float *)(v23 + *this);
        *v26 = *(float *)(v24 - 8);
        v24 += 16;
        v23 += 16;
        --v25;
        v26[1] = *(float *)(v24 - 20);
        v26[2] = *(float *)(v24 - 16);
        v26[3] = *(float *)(v24 - 12);
      }
      while ( v25 );
      return a2;
    }
  }
  return v10;
}
