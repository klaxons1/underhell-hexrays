int __thiscall sub_101B8E00(int *this, int a2, int a3, int a4)
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
  int v21; // ecx
  double v22; // st7
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
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
          *v14 = &vehicle_crashsound_t::`vftable';
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
      v19 = a4 + 28;
      v33 = 4 * v18;
      do
      {
        v20 = *this;
        *(float *)(v20 + v17 + 4) = *(float *)(v19 - 24);
        v21 = v17 + v20;
        v22 = *(float *)(v19 - 20);
        v19 += 80;
        *(float *)(v21 + 8) = v22;
        *(_DWORD *)(v21 + 12) = *(_DWORD *)(v19 - 96);
        *(_DWORD *)(v21 + 16) = *(_DWORD *)(v19 - 92);
        v23 = *this;
        *(float *)(v17 + v23 + 24) = *(float *)(v19 - 84);
        v24 = v17 + v23 + 20;
        *(float *)(v24 + 8) = *(float *)(v19 - 80);
        *(_DWORD *)(v24 + 12) = *(_DWORD *)(v19 - 76);
        *(_DWORD *)(v24 + 16) = *(_DWORD *)(v19 - 72);
        v25 = *this;
        *(float *)(v17 + v25 + 44) = *(float *)(v19 - 64);
        v26 = v17 + v25 + 40;
        *(float *)(v26 + 8) = *(float *)(v19 - 60);
        *(_DWORD *)(v26 + 12) = *(_DWORD *)(v19 - 56);
        *(_DWORD *)(v26 + 16) = *(_DWORD *)(v19 - 52);
        v27 = *this;
        *(float *)(v17 + v27 + 64) = *(float *)(v19 - 44);
        v28 = v17 + v27 + 60;
        *(float *)(v28 + 8) = *(float *)(v19 - 40);
        *(_DWORD *)(v28 + 12) = *(_DWORD *)(v19 - 36);
        v17 += 80;
        --v18;
        *(_DWORD *)(v28 + 16) = *(_DWORD *)(v19 - 32);
      }
      while ( v18 );
      v16 = v33;
      v10 = a2;
      v15 = a4;
      v4 = a3;
    }
    if ( v16 < v4 )
    {
      v29 = 20 * (v16 + v10);
      v30 = v15 + 20 * v16 + 8;
      v31 = v4 - v16;
      do
      {
        v32 = v29 + *this;
        *(float *)(v32 + 4) = *(float *)(v30 - 4);
        v30 += 20;
        v29 += 20;
        --v31;
        *(float *)(v32 + 8) = *(float *)(v30 - 20);
        *(_DWORD *)(v32 + 12) = *(_DWORD *)(v30 - 16);
        *(_DWORD *)(v32 + 16) = *(_DWORD *)(v30 - 12);
      }
      while ( v31 );
      return a2;
    }
  }
  return v10;
}
