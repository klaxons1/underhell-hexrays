char __cdecl sub_10113A30(float *a1, float *a2, int a3, int a4, float a5, int a6, float *a7)
{
  double v7; // st7
  char v8; // cl
  double v9; // st6
  int v10; // eax
  double v11; // st7
  char result; // al
  bool v13; // al
  double v14; // st5
  double v15; // st6
  double v16; // st7
  double v17; // st5
  int v18[3]; // [esp+14h] [ebp-10h] BYREF
  char v19; // [esp+20h] [ebp-4h]

  *(float *)a6 = *a1;
  *(float *)(a6 + 4) = a1[1];
  *(float *)(a6 + 8) = a1[2];
  *(float *)(a6 + 12) = *a1;
  *(float *)(a6 + 16) = a1[1];
  *(float *)(a6 + 20) = a1[2];
  *(float *)(a6 + 12) = *a2 + *(float *)(a6 + 12);
  *(float *)(a6 + 16) = *(float *)(a6 + 16) + a2[1];
  *(float *)(a6 + 20) = *(float *)(a6 + 20) + a2[2];
  *(_WORD *)(a6 + 54) = 0;
  *(_DWORD *)(a6 + 48) = 0;
  *(float *)(a6 + 44) = 1.0;
  if ( !sub_101138C0(a1, (int)a2, a3, a4, a5, (int)v18) )
    return 0;
  v7 = *(float *)&v18[1];
  v8 = v19;
  v9 = *(float *)v18;
  *(_BYTE *)(a6 + 55) = v19;
  if ( v9 < v7 && v9 >= 0.0 )
  {
    v10 = v18[2];
    *(float *)(a6 + 44) = v9;
    *(float *)(a6 + 12) = *a2 * v9 + *(float *)a6;
    *(float *)(a6 + 16) = a2[1] * v9 + *(float *)(a6 + 4);
    *(float *)(a6 + 20) = v9 * a2[2] + *(float *)(a6 + 8);
    *(_DWORD *)(a6 + 48) = 1;
    *(float *)(a6 + 24) = flt_106F1CA8;
    *(float *)(a6 + 28) = flt_106F1CAC;
    *(float *)(a6 + 32) = flt_106F1CB0;
    if ( v10 < 3 )
    {
      *(float *)(a6 + 36) = -*(float *)(a3 + 4 * v10);
      *(float *)(a6 + 4 * v10 + 24) = -1.0;
    }
    else
    {
      v11 = *(float *)(a4 + 4 * v10 - 12);
      v10 -= 3;
      *(float *)(a6 + 36) = v11;
      *(float *)(a6 + 4 * v10 + 24) = 1.0;
    }
    *(_BYTE *)(a6 + 40) = v10;
    return 1;
  }
  if ( !v8 )
    return 0;
  v13 = v7 <= 0.0 || v7 >= 1.0;
  *(_BYTE *)(a6 + 54) = v13;
  *(float *)(a6 + 44) = 0.0;
  if ( a7 )
    *a7 = v7;
  result = 1;
  *(float *)(a6 + 12) = *(float *)a6;
  *(float *)(a6 + 16) = *(float *)(a6 + 4);
  *(float *)(a6 + 20) = *(float *)(a6 + 8);
  *(_DWORD *)(a6 + 48) = 1;
  *(float *)(a6 + 36) = *(float *)a6;
  *(float *)(a6 + 24) = 1.0;
  *(float *)(a6 + 28) = 0.0;
  *(float *)(a6 + 32) = 0.0;
  *(_BYTE *)(a6 + 40) = 0;
  v14 = v7;
  v15 = *a2 * v7 + *a1;
  v16 = a2[1] * v7 + a1[1];
  v17 = v14 * a2[2] + a1[2];
  *(float *)a6 = v15;
  *(float *)(a6 + 4) = v16;
  *(float *)(a6 + 8) = v17;
  return result;
}
