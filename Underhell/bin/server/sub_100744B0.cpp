int __thiscall sub_100744B0(int *this, int a2, float *a3, float a4, float a5, float a6)
{
  int v7; // edi
  int v8; // ecx
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // edx
  int v12; // edx
  int v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int result; // eax
  int v21; // [esp+Ch] [ebp-4h]

  v7 = this[3];
  v8 = 0;
  if ( v7 > 0 )
  {
    v9 = *this;
    v21 = *this;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 4);
      if ( v10 == -1 || (v11 = &off_1061BE18[4 * (*(_DWORD *)(v9 + 4) & 0xFFF) + 1], v9 = v21, v11[1] != v10 >> 12) )
        v12 = 0;
      else
        v12 = *v11;
      if ( v12 == a2 )
        break;
      ++v8;
      v9 += 36;
      v21 = v9;
      if ( v8 >= v7 )
        goto LABEL_16;
    }
    if ( *(float *)(dword_106B31C8 + 12) == *(float *)(v9 + 20) && *(float *)(v9 + 32) >= (double)a4 )
      a4 = *(float *)(v9 + 32);
    v13 = v7 - v8;
    if ( v13 - 1 > 0 )
      memcpy((void *)(*this + 36 * v8), (const void *)(*this + 36 * v8 + 36), 36 * (v13 - 1));
    --this[3];
  }
LABEL_16:
  v14 = this[3];
  v15 = this[1];
  if ( v14 + 1 > v15 )
    sub_101B6450(v14 - v15 + 1);
  ++this[3];
  v16 = *this;
  v17 = this[3] - v14 - 1;
  this[4] = *this;
  if ( v17 > 0 )
    memcpy((void *)(v16 + 36 * v14 + 36), (const void *)(v16 + 36 * v14), 36 * v17);
  v18 = 36 * v14 + *this;
  if ( v18 )
    *(_DWORD *)(v18 + 4) = -1;
  v19 = 36 * v14 + *this;
  *(_DWORD *)v19 = 2;
  if ( a2 )
    *(_DWORD *)(v19 + 4) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(v19 + 4) = -1;
  *(float *)(v19 + 8) = *a3;
  *(float *)(v19 + 12) = a3[1];
  *(float *)(v19 + 16) = a3[2];
  *(float *)(v19 + 32) = a4;
  *(float *)(v19 + 20) = *(float *)(dword_106B31C8 + 12);
  result = dword_106B31C8;
  *(float *)(v19 + 24) = *(float *)(dword_106B31C8 + 12) + a5;
  *(float *)(v19 + 28) = a6 / a5;
  return result;
}
