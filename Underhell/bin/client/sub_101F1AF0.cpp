char __cdecl sub_101F1AF0(float *a1, _DWORD *a2)
{
  double v2; // st6
  int v4; // edx
  float *v5; // eax
  float *v6; // ecx
  int v7; // ebx
  double v8; // st5
  int v9; // edx
  int v10; // edi
  double v11; // rt2
  int v12; // esi
  double v13; // st4
  int v14; // ecx
  long double v15; // st3
  long double v16; // st3
  long double v17; // st3
  long double v18; // st3
  long double v19; // st3
  int v20; // eax
  float *v21; // eax
  double v22; // st4
  int v23; // esi
  double v24; // rtt
  double v25; // st5
  double v26; // st6
  float *v27; // ecx
  double v28; // st4
  int i; // edx
  _DWORD *v31; // ecx
  int v32; // esi
  int v33; // ecx
  _DWORD v35[9]; // [esp+Ch] [ebp-90h] BYREF
  char v36; // [esp+30h] [ebp-6Ch] BYREF

  v2 = 1.0;
  v4 = 0;
  v5 = (float *)&v36;
  do
  {
    *(v5 - 5) = *a1;
    v6 = v5 - 5;
    v6[1] = a1[1];
    v6[2] = a1[2];
    v6[3] = a1[3];
    *(v5 - 1) = 0.0;
    *v5 = 0.0;
    v5[1] = 0.0;
    v35[v4] = v4;
    v5[2] = 0.0;
    v7 = (int)&v5[v4++ - 5] + 16 - (_DWORD)v35;
    a1 += 4;
    *(float *)((char *)v35 + v7) = 1.0;
    v5 += 8;
  }
  while ( v4 < 4 );
  v8 = 0.001;
  v9 = 0;
  v10 = 4;
  while ( 1 )
  {
    v12 = -1;
    v13 = v8;
    v14 = v9;
    if ( v10 >= 4 )
    {
      do
      {
        v15 = fabs(*(float *)&v35[8 * v35[v14] + 4 + v9]);
        if ( v15 > v13 )
        {
          v13 = v15;
          v12 = v14;
        }
        v16 = fabs(*(float *)&v35[8 * v35[v14 + 1] + 4 + v9]);
        if ( v16 > v13 )
        {
          v13 = v16;
          v12 = v14 + 1;
        }
        v17 = fabs(*(float *)&v35[8 * v35[v14 + 2] + 4 + v9]);
        if ( v17 > v13 )
        {
          v13 = v17;
          v12 = v14 + 2;
        }
        v18 = fabs(*(float *)&v35[8 * v35[v14 + 3] + 4 + v9]);
        if ( v18 > v13 )
        {
          v13 = v18;
          v12 = v14 + 3;
        }
        v14 += 4;
      }
      while ( v14 < 1 );
    }
    for ( ; v14 < 4; ++v14 )
    {
      v19 = fabs(*(float *)&v35[8 * v35[v14] + 4 + v9]);
      if ( v19 > v13 )
      {
        v13 = v19;
        v12 = v14;
      }
    }
    if ( v12 == -1 )
      return 0;
    v20 = v35[v12];
    v35[v12] = v35[v9];
    v35[v9] = v20;
    v21 = (float *)&v35[8 * v20 + 4];
    v22 = v2 / v21[v9];
    v23 = 0;
    *v21 = *v21 * v22;
    v21[1] = v21[1] * v22;
    v21[2] = v21[2] * v22;
    v21[3] = v21[3] * v22;
    v21[4] = v21[4] * v22;
    v21[5] = v21[5] * v22;
    v21[6] = v21[6] * v22;
    v21[7] = v22 * v21[7];
    v24 = v8;
    v25 = v2;
    v26 = v24;
    v21[v9] = v25;
    do
    {
      if ( v23 != v9 )
      {
        v27 = (float *)&v35[8 * v35[v23] + 4];
        v28 = -v27[v9];
        *v27 = *v21 * v28 + *v27;
        v27[1] = v21[1] * v28 + v27[1];
        v27[2] = v21[2] * v28 + v27[2];
        v27[3] = v21[3] * v28 + v27[3];
        v27[4] = v21[4] * v28 + v27[4];
        v27[5] = v21[5] * v28 + v27[5];
        v27[6] = v21[6] * v28 + v27[6];
        v27[7] = v28 * v21[7] + v27[7];
        v27[v9] = 0.0;
      }
      ++v23;
    }
    while ( v23 < 4 );
    --v10;
    ++v9;
    if ( v10 <= 0 )
      break;
    v11 = v25;
    v8 = v26;
    v2 = v11;
  }
  for ( i = 0; i < 4; ++i )
  {
    v31 = &v35[8 * v35[i] + 8];
    *a2 = *v31;
    a2[1] = v31[1];
    v32 = v31[2];
    v33 = v31[3];
    a2[2] = v32;
    a2[3] = v33;
    a2 += 4;
  }
  return 1;
}
