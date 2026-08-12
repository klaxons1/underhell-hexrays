int __thiscall sub_10074380(_DWORD *this, float *a2, float a3, float a4, float a5)
{
  int v6; // edi
  int v7; // ecx
  float *v8; // edx
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int result; // eax

  v6 = this[3];
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = (float *)(*this + 16);
    while ( *(v8 - 2) != *a2 || *(v8 - 1) != a2[1] || *v8 != a2[2] )
    {
      ++v7;
      v8 += 9;
      if ( v7 >= v6 )
        goto LABEL_11;
    }
    v9 = v6 - v7 - 1;
    if ( v9 > 0 )
      memcpy((void *)(*this + 36 * v7), (const void *)(*this + 36 * v7 + 36), 36 * v9);
    --this[3];
  }
LABEL_11:
  v10 = this[3];
  v11 = this[1];
  if ( v10 + 1 > v11 )
    sub_101B6450(v10 - v11 + 1);
  ++this[3];
  v12 = *this;
  v13 = this[3] - v10 - 1;
  this[4] = *this;
  if ( v13 > 0 )
    memcpy((void *)(v12 + 36 * v10 + 36), (const void *)(v12 + 36 * v10), 36 * v13);
  v14 = 36 * v10 + *this;
  if ( v14 )
    *(_DWORD *)(v14 + 4) = -1;
  result = 36 * v10 + *this;
  *(_DWORD *)result = 1;
  *(_DWORD *)(result + 4) = -1;
  *(float *)(result + 8) = *a2;
  *(float *)(result + 12) = a2[1];
  *(float *)(result + 16) = a2[2];
  *(float *)(result + 32) = a3;
  *(float *)(result + 20) = *(float *)(dword_106B31C8 + 12);
  *(float *)(result + 24) = *(float *)(dword_106B31C8 + 12) + a4;
  *(float *)(result + 28) = a5 / a4;
  return result;
}
