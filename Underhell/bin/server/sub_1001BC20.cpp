int __thiscall sub_1001BC20(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // edi
  int v19; // eax
  int v20; // ecx
  float *v21; // ecx
  double v22; // st7
  int v23; // ecx
  float *v24; // ecx
  int v25; // ecx
  float *v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // [esp+8h] [ebp-4h]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_101B6450(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 36 * (a2 + a3)), (const void *)(v9 + 36 * a2), 36 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 36 * a2;
      v13 = a3;
      do
      {
        v14 = v12 + *this;
        if ( v14 )
          *(_DWORD *)(v14 + 4) = -1;
        v12 += 36;
        --v13;
      }
      while ( v13 );
    }
  }
  v15 = a4;
  if ( a4 )
  {
    v16 = 0;
    if ( a3 >= 4 )
    {
      v17 = 36 * a2;
      v18 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v19 = a4 + 52;
      v33 = 4 * v18;
      do
      {
        v20 = *this;
        *(_DWORD *)(v20 + v17) = *(_DWORD *)(v19 - 52);
        *(_DWORD *)(v20 + v17 + 4) = *(_DWORD *)(v19 - 48);
        *(float *)(v20 + v17 + 8) = *(float *)(v19 - 44);
        v21 = (float *)(v17 + v20);
        v22 = *(float *)(v19 - 40);
        v19 += 144;
        v21[3] = v22;
        v21[4] = *(float *)(v19 - 180);
        v21[5] = *(float *)(v19 - 176);
        v21[6] = *(float *)(v19 - 172);
        v21[7] = *(float *)(v19 - 168);
        v21[8] = *(float *)(v19 - 164);
        v23 = *this;
        *(_DWORD *)(v17 + v23 + 36) = *(_DWORD *)(v19 - 160);
        *(_DWORD *)(v17 + v23 + 40) = *(_DWORD *)(v19 - 156);
        *(float *)(v17 + v23 + 44) = *(float *)(v19 - 152);
        v24 = (float *)(v17 + v23 + 36);
        v24[3] = *(float *)(v19 - 148);
        v24[4] = *(float *)(v19 - 144);
        v24[5] = *(float *)(v19 - 140);
        v24[6] = *(float *)(v19 - 136);
        v24[7] = *(float *)(v19 - 132);
        v24[8] = *(float *)(v19 - 128);
        v25 = *this;
        *(_DWORD *)(v17 + v25 + 72) = *(_DWORD *)(v19 - 124);
        *(_DWORD *)(v17 + v25 + 76) = *(_DWORD *)(v19 - 120);
        *(float *)(v17 + v25 + 80) = *(float *)(v19 - 116);
        v26 = (float *)(v17 + v25 + 72);
        v26[3] = *(float *)(v19 - 112);
        v26[4] = *(float *)(v19 - 108);
        v26[5] = *(float *)(v19 - 104);
        v26[6] = *(float *)(v19 - 100);
        v26[7] = *(float *)(v19 - 96);
        v26[8] = *(float *)(v19 - 92);
        v27 = *this;
        *(_DWORD *)(v17 + v27 + 108) = *(_DWORD *)(v19 - 88);
        v28 = v17 + v27 + 108;
        *(_DWORD *)(v28 + 4) = *(_DWORD *)(v19 - 84);
        *(float *)(v28 + 8) = *(float *)(v19 - 80);
        *(float *)(v28 + 12) = *(float *)(v19 - 76);
        *(float *)(v28 + 16) = *(float *)(v19 - 72);
        *(float *)(v28 + 20) = *(float *)(v19 - 68);
        *(float *)(v28 + 24) = *(float *)(v19 - 64);
        *(float *)(v28 + 28) = *(float *)(v19 - 60);
        *(float *)(v28 + 32) = *(float *)(v19 - 56);
        v17 += 144;
        --v18;
      }
      while ( v18 );
      v16 = v33;
      v10 = a2;
      v4 = a3;
      v15 = a4;
    }
    if ( v16 < v4 )
    {
      v29 = 36 * (v16 + v10);
      v30 = v15 + 36 * v16 + 16;
      v31 = v4 - v16;
      do
      {
        v32 = v29 + *this;
        *(_DWORD *)v32 = *(_DWORD *)(v30 - 16);
        *(_DWORD *)(v32 + 4) = *(_DWORD *)(v30 - 12);
        *(float *)(v32 + 8) = *(float *)(v30 - 8);
        v30 += 36;
        v29 += 36;
        --v31;
        *(float *)(v32 + 12) = *(float *)(v30 - 40);
        *(float *)(v32 + 16) = *(float *)(v30 - 36);
        *(float *)(v32 + 20) = *(float *)(v30 - 32);
        *(float *)(v32 + 24) = *(float *)(v30 - 28);
        *(float *)(v32 + 28) = *(float *)(v30 - 24);
        *(float *)(v32 + 32) = *(float *)(v30 - 20);
      }
      while ( v31 );
      return a2;
    }
  }
  return v10;
}
