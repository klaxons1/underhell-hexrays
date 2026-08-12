int __thiscall sub_102B4030(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  double v24; // st7
  int v25; // ecx
  float *v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // [esp+8h] [ebp-4h]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_101924C0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 12 * (a2 + a3)), (const void *)(v9 + 12 * a2), 12 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 12 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
        {
          *v14 = &washentity_t::`vftable';
          v14[1] = -1;
        }
        v12 += 12;
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
      v17 = 12 * a2;
      v18 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v19 = a4 + 20;
      v29 = 4 * v18;
      do
      {
        v20 = *this;
        *(_DWORD *)(v20 + v17 + 4) = *(_DWORD *)(v19 - 16);
        *(float *)(v20 + v17 + 8) = *(float *)(v19 - 12);
        v21 = *this;
        *(_DWORD *)(v17 + v21 + 16) = *(_DWORD *)(v19 - 4);
        *(float *)(v17 + v21 + 20) = *(float *)v19;
        v22 = *this;
        *(_DWORD *)(v17 + v22 + 28) = *(_DWORD *)(v19 + 8);
        *(float *)(v17 + v22 + 32) = *(float *)(v19 + 12);
        v23 = v17 + *this + 36;
        *(_DWORD *)(v23 + 4) = *(_DWORD *)(v19 + 20);
        v24 = *(float *)(v19 + 24);
        v19 += 48;
        *(float *)(v23 + 8) = v24;
        v17 += 48;
        --v18;
      }
      while ( v18 );
      v16 = v29;
      v10 = a2;
      v4 = a3;
      v15 = a4;
    }
    if ( v16 < v4 )
    {
      v25 = 12 * (v16 + v10);
      v26 = (float *)(v15 + 12 * v16 + 8);
      v27 = v4 - v16;
      do
      {
        v28 = *this;
        *(float *)(v28 + v25 + 4) = *(v26 - 1);
        *(float *)(v28 + v25 + 8) = *v26;
        v26 += 3;
        v25 += 12;
        --v27;
      }
      while ( v27 );
      return a2;
    }
  }
  return v10;
}
