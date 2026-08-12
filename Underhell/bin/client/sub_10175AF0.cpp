char __cdecl sub_10175AF0(int a1, float *a2, float *a3, float a4, float *a5, float a6, float a7)
{
  char result; // al
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  int v16[12]; // [esp+8h] [ebp-40h] BYREF
  float v17; // [esp+38h] [ebp-10h]
  float v18; // [esp+3Ch] [ebp-Ch]
  float v19; // [esp+40h] [ebp-8h]
  float v20; // [esp+44h] [ebp-4h]

  result = sub_101759C0(a2, a3, a4, (float *)v16);
  if ( result )
  {
    v8 = *(float **)(a1 + 428);
    *v8 = *(float *)v16;
    v8[1] = *(float *)&v16[1];
    v8[2] = *(float *)&v16[2];
    v9 = *(float **)(a1 + 436);
    *v9 = 0.0;
    v9[1] = a6;
    if ( a5 )
    {
      v17 = a5[2] * 255.0 + 8388608.0;
      v18 = a5[1] * 255.0 + 8388608.0;
      v19 = *a5 * 255.0 + 8388608.0;
      v20 = 255.0 * a5[3] + 8388608.0;
      **(_DWORD **)(a1 + 468) = LOBYTE(v17) | ((LOBYTE(v18) | ((LOBYTE(v19) | (LOBYTE(v20) << 8)) << 8)) << 8);
    }
    else
    {
      **(_DWORD **)(a1 + 468) = -1;
    }
    sub_10016A80((_DWORD *)(a1 + 244));
    v10 = *(float **)(a1 + 428);
    *v10 = *(float *)&v16[3];
    v10[1] = *(float *)&v16[4];
    v10[2] = *(float *)&v16[5];
    v11 = *(float **)(a1 + 436);
    *v11 = 1.0;
    v11[1] = a6;
    if ( a5 )
    {
      v20 = a5[2] * 255.0 + 8388608.0;
      v19 = a5[1] * 255.0 + 8388608.0;
      v18 = *a5 * 255.0 + 8388608.0;
      v17 = 255.0 * a5[3] + 8388608.0;
      **(_DWORD **)(a1 + 468) = LOBYTE(v20) | ((LOBYTE(v19) | ((LOBYTE(v18) | (LOBYTE(v17) << 8)) << 8)) << 8);
    }
    else
    {
      **(_DWORD **)(a1 + 468) = -1;
    }
    sub_10016A80((_DWORD *)(a1 + 244));
    v12 = *(float **)(a1 + 428);
    *v12 = *(float *)&v16[9];
    v12[1] = *(float *)&v16[10];
    v12[2] = *(float *)&v16[11];
    v13 = *(float **)(a1 + 436);
    *v13 = 1.0;
    v13[1] = a7;
    if ( a5 )
    {
      v20 = a5[2] * 255.0 + 8388608.0;
      v19 = a5[1] * 255.0 + 8388608.0;
      v18 = *a5 * 255.0 + 8388608.0;
      v17 = 255.0 * a5[3] + 8388608.0;
      **(_DWORD **)(a1 + 468) = LOBYTE(v20) | ((LOBYTE(v19) | ((LOBYTE(v18) | (LOBYTE(v17) << 8)) << 8)) << 8);
    }
    else
    {
      **(_DWORD **)(a1 + 468) = -1;
    }
    sub_10016A80((_DWORD *)(a1 + 244));
    v14 = *(float **)(a1 + 428);
    *v14 = *(float *)&v16[6];
    v14[1] = *(float *)&v16[7];
    v14[2] = *(float *)&v16[8];
    v15 = *(float **)(a1 + 436);
    *v15 = 0.0;
    v15[1] = a7;
    if ( a5 )
    {
      v20 = a5[2] * 255.0 + 8388608.0;
      v19 = a5[1] * 255.0 + 8388608.0;
      v18 = *a5 * 255.0 + 8388608.0;
      v17 = 255.0 * a5[3] + 8388608.0;
      **(_DWORD **)(a1 + 468) = LOBYTE(v20) | ((LOBYTE(v19) | ((LOBYTE(v18) | (LOBYTE(v17) << 8)) << 8)) << 8);
    }
    else
    {
      **(_DWORD **)(a1 + 468) = -1;
    }
    return sub_10016A80((_DWORD *)(a1 + 244));
  }
  return result;
}
