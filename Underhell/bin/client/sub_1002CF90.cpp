int __thiscall sub_1002CF90(int *this, int a2, int a3, int a4)
{
  int v4; // edi
  int *v5; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  _DWORD *v18; // edx
  _DWORD *v19; // edx
  int v20; // ecx
  bool v21; // zf
  int v22; // ebx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // [esp+8h] [ebp-Ch]
  unsigned int v27; // [esp+Ch] [ebp-8h]
  int v29; // [esp+20h] [ebp+Ch]

  v4 = a3;
  v5 = this;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_10025B90(v5, a3 + v7 - v8);
  v5[3] += a3;
  v9 = *v5;
  v10 = a2;
  v11 = v5[3] - a2 - a3;
  v5[4] = *v5;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 76 * (a2 + a3)), (const void *)(v9 + 76 * a2), 76 * v11);
  v12 = a4;
  if ( a4 )
  {
    v13 = 0;
    if ( a3 >= 4 )
    {
      v14 = 76 * a2;
      v27 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v15 = a4 + 132;
      v26 = 4 * v27;
      do
      {
        v16 = v14 + *v5;
        qmemcpy((void *)v16, (const void *)(v15 - 132), 0x30u);
        *(float *)(v16 + 48) = *(float *)(v15 - 84);
        *(float *)(v16 + 52) = *(float *)(v15 - 80);
        *(float *)(v16 + 56) = *(float *)(v15 - 76);
        *(float *)(v16 + 60) = *(float *)(v15 - 72);
        *(float *)(v16 + 64) = *(float *)(v15 - 68);
        *(float *)(v16 + 68) = *(float *)(v15 - 64);
        *(_DWORD *)(v16 + 72) ^= (*(_DWORD *)(v15 - 60) ^ *(_DWORD *)(v16 + 72)) & 0x7FFFFFFF;
        *(_DWORD *)(v16 + 72) = *(_DWORD *)(v15 - 60) ^ (*(_DWORD *)(v16 + 72) ^ *(_DWORD *)(v15 - 60)) & 0x7FFFFFFF;
        v17 = v14 + *this + 76;
        qmemcpy((void *)v17, (const void *)(v15 - 56), 0x30u);
        *(float *)(v17 + 48) = *(float *)(v15 - 8);
        *(float *)(v17 + 52) = *(float *)(v15 - 4);
        *(float *)(v17 + 56) = *(float *)v15;
        *(float *)(v17 + 60) = *(float *)(v15 + 4);
        *(float *)(v17 + 64) = *(float *)(v15 + 8);
        *(float *)(v17 + 68) = *(float *)(v15 + 12);
        *(_DWORD *)(v17 + 72) ^= (*(_DWORD *)(v15 + 16) ^ *(_DWORD *)(v17 + 72)) & 0x7FFFFFFF;
        *(_DWORD *)(v17 + 72) = *(_DWORD *)(v15 + 16) ^ (*(_DWORD *)(v17 + 72) ^ *(_DWORD *)(v15 + 16)) & 0x7FFFFFFF;
        v18 = (_DWORD *)(v14 + *this + 152);
        qmemcpy(v18, (const void *)(v15 + 20), 0x48u);
        v18[18] ^= (*(_DWORD *)(v15 + 92) ^ v18[18]) & 0x7FFFFFFF;
        v18[18] = *(_DWORD *)(v15 + 92) ^ (v18[18] ^ *(_DWORD *)(v15 + 92)) & 0x7FFFFFFF;
        v19 = (_DWORD *)(v14 + *this + 228);
        qmemcpy(v19, (const void *)(v15 + 96), 0x48u);
        v20 = *(_DWORD *)(v15 + 168) ^ v19[18];
        v15 += 304;
        v19[18] ^= v20 & 0x7FFFFFFF;
        v14 += 304;
        v21 = v27-- == 1;
        v19[18] = *(_DWORD *)(v15 - 136) ^ (v19[18] ^ *(_DWORD *)(v15 - 136)) & 0x7FFFFFFF;
        v5 = this;
      }
      while ( !v21 );
      v13 = v26;
      v10 = a2;
      v4 = a3;
      v12 = a4;
    }
    if ( v13 < v4 )
    {
      v22 = 76 * (v13 + v10);
      v23 = v12 + 76 * v13 + 56;
      v29 = v4 - v13;
      while ( 1 )
      {
        v24 = v22 + *v5;
        qmemcpy((void *)v24, (const void *)(v23 - 56), 0x30u);
        *(float *)(v24 + 48) = *(float *)(v23 - 8);
        *(float *)(v24 + 52) = *(float *)(v23 - 4);
        *(float *)(v24 + 56) = *(float *)v23;
        *(float *)(v24 + 60) = *(float *)(v23 + 4);
        *(float *)(v24 + 64) = *(float *)(v23 + 8);
        *(float *)(v24 + 68) = *(float *)(v23 + 12);
        v25 = *(_DWORD *)(v23 + 16) ^ *(_DWORD *)(v24 + 72);
        v23 += 76;
        *(_DWORD *)(v24 + 72) ^= v25 & 0x7FFFFFFF;
        v22 += 76;
        v21 = v29-- == 1;
        *(_DWORD *)(v24 + 72) = *(_DWORD *)(v23 - 60) ^ (*(_DWORD *)(v24 + 72) ^ *(_DWORD *)(v23 - 60)) & 0x7FFFFFFF;
        if ( v21 )
          break;
        v5 = this;
      }
      return a2;
    }
  }
  return v10;
}
