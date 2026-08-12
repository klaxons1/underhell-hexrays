int __thiscall sub_102356E0(int this, char *a2, float *a3, int a4, int a5, float *a6)
{
  int v7; // ebx
  int i; // edi
  int v9; // eax
  double v10; // st7
  int result; // eax
  int v12; // ebx
  char *v13; // esi
  float *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // [esp+24h] [ebp-E98h]
  int v18; // [esp+24h] [ebp-E98h]
  float *v19; // [esp+24h] [ebp-E98h]
  float *v20; // [esp+28h] [ebp-E94h]
  float v21[12]; // [esp+2Ch] [ebp-E90h] BYREF
  float v22[24]; // [esp+5Ch] [ebp-E60h] BYREF
  _BYTE v23[1536]; // [esp+BCh] [ebp-E00h] BYREF
  float v24[512]; // [esp+6BCh] [ebp-800h] BYREF

  v7 = sub_10126D90(a2);
  for ( i = 0; i < 24; ++i )
  {
    v22[i] = 0.5;
    if ( i < v7 )
    {
      v9 = sub_10127A80(a2, i);
      if ( *(float *)(v9 + 8) < 0.0 && *(float *)(v9 + 12) > 0.0 )
        v22[i] = -1.0 / (*(float *)(v9 + 12) - *(float *)(v9 + 8)) * *(float *)(v9 + 8);
    }
  }
  v17 = sub_1001DB80((int)a2, *(_DWORD *)(this + 16), (int)v22);
  if ( !v17 )
    v17 = 1;
  v10 = *(float *)(this + 24) * *(float *)(this + 28) / (double)v17;
  *(float *)&v18 = v10 - (double)(int)v10;
  sub_1001F9A0((int)a2, (int)v23, v24, (1024 << *(_DWORD *)(this + 20)) | 0x40300);
  sub_10024510(
    (int)a2,
    (int *)a2,
    0,
    (int)v23,
    v24,
    *(_DWORD *)(this + 16),
    v18,
    (int)v22,
    (1024 << *(_DWORD *)(this + 20)) | 0x40300,
    1.0,
    *(float *)(this + 28));
  result = *(_DWORD *)a2;
  v12 = 0;
  v13 = (char *)(*(_DWORD *)a2 + *(_DWORD *)(*(_DWORD *)a2 + 160));
  if ( *(int *)(*(_DWORD *)a2 + 156) > 0 )
  {
    v14 = a3;
    v19 = v24;
    v20 = (float *)v23;
    do
    {
      v15 = sub_1001E140(a4, &v13[*(_DWORD *)v13]);
      if ( v15 < 0 )
      {
        sub_101F0F40(v19, v20, v21);
        v16 = *((_DWORD *)v13 + 1);
        if ( v16 == -1 )
          sub_101EDC00(a6, v21, v14);
        else
          sub_101EDC00(&a3[12 * v16], v21, v14);
      }
      else
      {
        sub_101ED9E0((const void *)(a5 + 48 * v15), v14);
      }
      result = *(_DWORD *)a2;
      v20 += 3;
      v19 += 4;
      ++v12;
      v14 += 12;
      v13 += 216;
    }
    while ( v12 < *(_DWORD *)(*(_DWORD *)a2 + 156) );
  }
  return result;
}
