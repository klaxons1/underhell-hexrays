int __thiscall sub_10031930(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // ecx
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
  int v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // eax
  int v32; // [esp+8h] [ebp-4h]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_101C4BF0(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 20 * (a2 + a3)), (const void *)(v9 + 20 * a2), 20 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 20 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
          *v14 = -1;
        v12 += 20;
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
      v17 = 20 * a2;
      v18 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v19 = a4 + 36;
      v32 = 4 * v18;
      do
      {
        v20 = *this;
        *(_DWORD *)(v20 + v17) = *(_DWORD *)(v19 - 36);
        *(float *)(v20 + v17 + 4) = *(float *)(v19 - 32);
        v21 = (float *)(v17 + v20);
        v22 = *(float *)(v19 - 28);
        v19 += 80;
        v21[2] = v22;
        v21[3] = *(float *)(v19 - 104);
        v21[4] = *(float *)(v19 - 100);
        v23 = *this;
        *(_DWORD *)(v17 + v23 + 20) = *(_DWORD *)(v19 - 96);
        *(float *)(v17 + v23 + 24) = *(float *)(v19 - 92);
        v24 = (float *)(v17 + v23 + 20);
        v24[2] = *(float *)(v19 - 88);
        v24[3] = *(float *)(v19 - 84);
        v24[4] = *(float *)(v19 - 80);
        v25 = *this;
        *(_DWORD *)(v17 + v25 + 40) = *(_DWORD *)(v19 - 76);
        *(float *)(v17 + v25 + 44) = *(float *)(v19 - 72);
        v26 = (float *)(v17 + v25 + 40);
        v26[2] = *(float *)(v19 - 68);
        v26[3] = *(float *)(v19 - 64);
        v26[4] = *(float *)(v19 - 60);
        v27 = v17 + *this + 60;
        *(_DWORD *)v27 = *(_DWORD *)(v19 - 56);
        *(float *)(v27 + 4) = *(float *)(v19 - 52);
        v17 += 80;
        --v18;
        *(float *)(v27 + 8) = *(float *)(v19 - 48);
        *(float *)(v27 + 12) = *(float *)(v19 - 44);
        *(float *)(v27 + 16) = *(float *)(v19 - 40);
      }
      while ( v18 );
      v16 = v32;
      v10 = a2;
      v4 = a3;
      v15 = a4;
    }
    if ( v16 < v4 )
    {
      v28 = 20 * (v16 + v10);
      v29 = v15 + 20 * v16 + 16;
      v30 = v4 - v16;
      do
      {
        v31 = v28 + *this;
        *(_DWORD *)v31 = *(_DWORD *)(v29 - 16);
        *(float *)(v31 + 4) = *(float *)(v29 - 12);
        v29 += 20;
        v28 += 20;
        --v30;
        *(float *)(v31 + 8) = *(float *)(v29 - 28);
        *(float *)(v31 + 12) = *(float *)(v29 - 24);
        *(float *)(v31 + 16) = *(float *)(v29 - 20);
      }
      while ( v30 );
      return a2;
    }
  }
  return v10;
}
