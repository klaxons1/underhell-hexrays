int __thiscall sub_10032FF0(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  bool v14; // zf
  int v15; // eax
  int v16; // edx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // esi
  int v28; // ecx
  int v29; // ebx
  int v30; // eax
  int v31; // [esp+8h] [ebp-8h]
  int v32; // [esp+8h] [ebp-8h]
  int v33; // [esp+Ch] [ebp-4h]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_10103390(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 44 * (a2 + a3)), (const void *)(v9 + 44 * a2), 44 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 44 * a2;
      v33 = 44 * a2;
      v31 = a3;
      do
      {
        v13 = v12 + *this;
        if ( v13 )
        {
          *(_DWORD *)v13 = &CInterpolatedVarArrayBase<C_AnimationLayer,0>::`vftable';
          *(_DWORD *)(v13 + 8) = 0;
          *(_DWORD *)(v13 + 12) = 0;
          *(_DWORD *)(v13 + 16) = 0x100000;
          sub_10032630((unsigned __int16 *)(v13 + 8), 4);
          *(float *)(v13 + 36) = 0.0;
          *(float *)(v13 + 24) = 0.0;
          *(_DWORD *)(v13 + 40) = 0;
          *(_DWORD *)(v13 + 4) = 0;
          *(_WORD *)(v13 + 28) = 1;
          *(_DWORD *)(v13 + 20) = 0;
          *(_DWORD *)(v13 + 32) = 0;
          *(_DWORD *)v13 = &CInterpolatedVar<C_AnimationLayer>::`vftable';
          sub_10032310((unsigned __int8 *)v13, 1);
          v12 = v33;
        }
        v12 += 44;
        v14 = v31-- == 1;
        v33 = v12;
      }
      while ( !v14 );
      v10 = a2;
    }
  }
  v15 = a4;
  if ( a4 )
  {
    v16 = 0;
    if ( a3 >= 4 )
    {
      v17 = 44 * v10;
      v18 = a4 + 52;
      v19 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v32 = 4 * v19;
      do
      {
        v20 = *this;
        *(_DWORD *)(v20 + v17 + 4) = *(_DWORD *)(v18 - 48);
        *(_DWORD *)(v20 + v17 + 8) = *(_DWORD *)(v18 - 44);
        *(_DWORD *)(v20 + v17 + 12) = *(_DWORD *)(v18 - 40);
        *(_DWORD *)(v20 + v17 + 16) = *(_DWORD *)(v18 - 36);
        *(_DWORD *)(v20 + v17 + 20) = *(_DWORD *)(v18 - 32);
        *(float *)(v20 + v17 + 24) = *(float *)(v18 - 28);
        *(_BYTE *)(v20 + v17 + 28) = *(_BYTE *)(v18 - 24);
        *(_BYTE *)(v20 + v17 + 29) = *(_BYTE *)(v18 - 23);
        *(_DWORD *)(v20 + v17 + 32) = *(_DWORD *)(v18 - 20);
        v21 = v17 + v20;
        *(float *)(v21 + 36) = *(float *)(v18 - 16);
        *(_DWORD *)(v21 + 40) = *(_DWORD *)(v18 - 12);
        v22 = *this;
        *(_DWORD *)(v17 + v22 + 48) = *(_DWORD *)(v18 - 4);
        *(_DWORD *)(v17 + v22 + 52) = *(_DWORD *)v18;
        *(_DWORD *)(v17 + v22 + 56) = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v17 + v22 + 60) = *(_DWORD *)(v18 + 8);
        *(_DWORD *)(v17 + v22 + 64) = *(_DWORD *)(v18 + 12);
        *(float *)(v17 + v22 + 68) = *(float *)(v18 + 16);
        *(_BYTE *)(v17 + v22 + 72) = *(_BYTE *)(v18 + 20);
        v23 = v17 + v22 + 44;
        *(_BYTE *)(v23 + 29) = *(_BYTE *)(v18 + 21);
        *(_DWORD *)(v23 + 32) = *(_DWORD *)(v18 + 24);
        *(float *)(v23 + 36) = *(float *)(v18 + 28);
        *(_DWORD *)(v23 + 40) = *(_DWORD *)(v18 + 32);
        v24 = *this;
        *(_DWORD *)(v17 + v24 + 92) = *(_DWORD *)(v18 + 40);
        *(_DWORD *)(v17 + v24 + 96) = *(_DWORD *)(v18 + 44);
        *(_DWORD *)(v17 + v24 + 100) = *(_DWORD *)(v18 + 48);
        v25 = v17 + v24 + 88;
        *(_DWORD *)(v25 + 16) = *(_DWORD *)(v18 + 52);
        *(_DWORD *)(v25 + 20) = *(_DWORD *)(v18 + 56);
        *(float *)(v25 + 24) = *(float *)(v18 + 60);
        *(_BYTE *)(v25 + 28) = *(_BYTE *)(v18 + 64);
        *(_BYTE *)(v25 + 29) = *(_BYTE *)(v18 + 65);
        *(_DWORD *)(v25 + 32) = *(_DWORD *)(v18 + 68);
        *(float *)(v25 + 36) = *(float *)(v18 + 72);
        *(_DWORD *)(v25 + 40) = *(_DWORD *)(v18 + 76);
        v26 = v17 + *this + 132;
        *(_DWORD *)(v26 + 4) = *(_DWORD *)(v18 + 84);
        *(_DWORD *)(v26 + 8) = *(_DWORD *)(v18 + 88);
        *(_DWORD *)(v26 + 12) = *(_DWORD *)(v18 + 92);
        *(_DWORD *)(v26 + 16) = *(_DWORD *)(v18 + 96);
        *(_DWORD *)(v26 + 20) = *(_DWORD *)(v18 + 100);
        *(float *)(v26 + 24) = *(float *)(v18 + 104);
        *(_BYTE *)(v26 + 28) = *(_BYTE *)(v18 + 108);
        *(_BYTE *)(v26 + 29) = *(_BYTE *)(v18 + 109);
        *(_DWORD *)(v26 + 32) = *(_DWORD *)(v18 + 112);
        v18 += 176;
        v17 += 176;
        --v19;
        *(float *)(v26 + 36) = *(float *)(v18 - 60);
        *(_DWORD *)(v26 + 40) = *(_DWORD *)(v18 - 56);
      }
      while ( v19 );
      v4 = a3;
      v16 = v32;
      v15 = a4;
      v10 = a2;
    }
    if ( v16 < v4 )
    {
      v27 = 44 * (v16 + v10);
      v28 = v15 + 44 * v16 + 8;
      v29 = v4 - v16;
      do
      {
        v30 = v27 + *this;
        *(_DWORD *)(v30 + 4) = *(_DWORD *)(v28 - 4);
        *(_DWORD *)(v30 + 8) = *(_DWORD *)v28;
        *(_DWORD *)(v30 + 12) = *(_DWORD *)(v28 + 4);
        *(_DWORD *)(v30 + 16) = *(_DWORD *)(v28 + 8);
        *(_DWORD *)(v30 + 20) = *(_DWORD *)(v28 + 12);
        *(float *)(v30 + 24) = *(float *)(v28 + 16);
        *(_BYTE *)(v30 + 28) = *(_BYTE *)(v28 + 20);
        *(_BYTE *)(v30 + 29) = *(_BYTE *)(v28 + 21);
        *(_DWORD *)(v30 + 32) = *(_DWORD *)(v28 + 24);
        v28 += 44;
        v27 += 44;
        --v29;
        *(float *)(v30 + 36) = *(float *)(v28 - 16);
        *(_DWORD *)(v30 + 40) = *(_DWORD *)(v28 - 12);
      }
      while ( v29 );
      return a2;
    }
  }
  return v10;
}
