int __thiscall sub_10074200(int *this, int a2, float a3, float a4, float a5)
{
  int v6; // ebx
  int v7; // edx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  int v17; // ebx
  int result; // eax

  v6 = this[3];
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = *this;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 4);
      if ( v9 == -1 || (v6 = this[3], off_1061BE18[4 * (*(_DWORD *)(v8 + 4) & 0xFFF) + 2] != v9 >> 12) )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(v8 + 4) & 0xFFF) + 1];
      if ( v10 == a2 && 0.0 == *(float *)(v8 + 28) )
        break;
      ++v7;
      v8 += 36;
      if ( v7 >= this[3] )
        goto LABEL_10;
    }
    if ( *(float *)(dword_106B31C8 + 12) == *(float *)(v8 + 20) && *(float *)(v8 + 32) >= (double)a3 )
      a3 = *(float *)(v8 + 32);
    v17 = v6 - v7;
    if ( v17 - 1 > 0 )
      memcpy((void *)(*this + 36 * v7), (const void *)(*this + 36 * v7 + 36), 36 * (v17 - 1));
    --this[3];
  }
LABEL_10:
  v11 = this[3];
  v12 = this[1];
  if ( v11 + 1 > v12 )
    sub_101B6450(v11 - v12 + 1);
  ++this[3];
  v13 = *this;
  v14 = this[3] - v11 - 1;
  this[4] = *this;
  if ( v14 > 0 )
    memcpy((void *)(v13 + 36 * v11 + 36), (const void *)(v13 + 36 * v11), 36 * v14);
  v15 = 36 * v11 + *this;
  if ( v15 )
    *(_DWORD *)(v15 + 4) = -1;
  v16 = 36 * v11 + *this;
  *(_DWORD *)v16 = 0;
  if ( a2 )
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(v16 + 4) = -1;
  *(float *)(v16 + 8) = 0.0;
  *(float *)(v16 + 12) = 0.0;
  *(float *)(v16 + 16) = 0.0;
  *(float *)(v16 + 32) = a3;
  *(float *)(v16 + 20) = *(float *)(dword_106B31C8 + 12);
  result = dword_106B31C8;
  *(float *)(v16 + 24) = *(float *)(dword_106B31C8 + 12) + a4;
  *(float *)(v16 + 28) = a5 / a4;
  return result;
}
