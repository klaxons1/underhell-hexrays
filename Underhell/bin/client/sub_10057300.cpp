int __thiscall sub_10057300(int *this, int a2, int a3, int a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ecx
  float *v18; // ecx
  double v19; // st7
  float *v20; // ecx
  float *v21; // ecx
  float *v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edi
  int v26; // eax
  float *v27; // eax
  double v28; // st7
  int v29; // [esp+14h] [ebp+Ch]

  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_10056920(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 36 * (a2 + a3)), (const void *)(v9 + 36 * a2), 36 * v11);
  v12 = a4;
  if ( a4 )
  {
    v13 = 0;
    if ( a3 >= 4 )
    {
      v14 = 36 * a2;
      v15 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v16 = a4 + 56;
      v29 = 4 * v15;
      do
      {
        v17 = *this;
        *(float *)(v17 + v14) = *(float *)(v16 - 56);
        v18 = (float *)(v14 + v17);
        v19 = *(float *)(v16 - 52);
        v16 += 144;
        v18[1] = v19;
        v18[2] = *(float *)(v16 - 192);
        v18[3] = *(float *)(v16 - 188);
        v18[4] = *(float *)(v16 - 184);
        v18[5] = *(float *)(v16 - 180);
        v18[6] = *(float *)(v16 - 176);
        v18[7] = *(float *)(v16 - 172);
        v18[8] = *(float *)(v16 - 168);
        v20 = (float *)(v14 + *this + 36);
        *v20 = *(float *)(v16 - 164);
        v20[1] = *(float *)(v16 - 160);
        v20[2] = *(float *)(v16 - 156);
        v20[3] = *(float *)(v16 - 152);
        v20[4] = *(float *)(v16 - 148);
        v20[5] = *(float *)(v16 - 144);
        v20[6] = *(float *)(v16 - 140);
        v20[7] = *(float *)(v16 - 136);
        v20[8] = *(float *)(v16 - 132);
        v21 = (float *)(v14 + *this + 72);
        *v21 = *(float *)(v16 - 128);
        v21[1] = *(float *)(v16 - 124);
        v21[2] = *(float *)(v16 - 120);
        v21[3] = *(float *)(v16 - 116);
        v21[4] = *(float *)(v16 - 112);
        v21[5] = *(float *)(v16 - 108);
        v21[6] = *(float *)(v16 - 104);
        v21[7] = *(float *)(v16 - 100);
        v21[8] = *(float *)(v16 - 96);
        v22 = (float *)(v14 + *this + 108);
        *v22 = *(float *)(v16 - 92);
        v22[1] = *(float *)(v16 - 88);
        v22[2] = *(float *)(v16 - 84);
        v22[3] = *(float *)(v16 - 80);
        v22[4] = *(float *)(v16 - 76);
        v22[5] = *(float *)(v16 - 72);
        v22[6] = *(float *)(v16 - 68);
        v22[7] = *(float *)(v16 - 64);
        v22[8] = *(float *)(v16 - 60);
        v14 += 144;
        --v15;
      }
      while ( v15 );
      v13 = v29;
      v10 = a2;
      v12 = a4;
    }
    if ( v13 < a3 )
    {
      v23 = 36 * (v13 + v10);
      v24 = v12 + 36 * v13 + 20;
      v25 = a3 - v13;
      do
      {
        v26 = *this;
        *(float *)(v26 + v23) = *(float *)(v24 - 20);
        v27 = (float *)(v23 + v26);
        v28 = *(float *)(v24 - 16);
        v24 += 36;
        v27[1] = v28;
        v23 += 36;
        --v25;
        v27[2] = *(float *)(v24 - 48);
        v27[3] = *(float *)(v24 - 44);
        v27[4] = *(float *)(v24 - 40);
        v27[5] = *(float *)(v24 - 36);
        v27[6] = *(float *)(v24 - 32);
        v27[7] = *(float *)(v24 - 28);
        v27[8] = *(float *)(v24 - 24);
      }
      while ( v25 );
      return a2;
    }
  }
  return v10;
}
