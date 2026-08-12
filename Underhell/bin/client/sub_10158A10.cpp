int __thiscall sub_10158A10(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  float *v5; // ecx
  double v6; // st5
  float **v7; // edx
  long double v8; // st4
  double v9; // st1
  long double v10; // st3
  long double v11; // st4
  float *v12; // ecx
  float v13; // [esp+0h] [ebp-28h]
  float v14; // [esp+4h] [ebp-24h]
  int v15[3]; // [esp+10h] [ebp-18h] BYREF
  int v16[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v17; // [esp+24h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v3 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    for ( result = *(_DWORD *)(a2 + 16420); result; result = sub_1004B070(a2, v14) )
    {
      v5 = (float *)((char *)&unk_103E8F08 + 24 * *(unsigned __int8 *)(result + 56));
      v6 = *(float *)(result + 48) * 3.14159;
      v7 = *(float ***)(a2 + 8);
      v8 = 1.0 - (cos(v6 * 0.5) + 1.0) * 0.5;
      v9 = v5[5] - v5[2];
      v10 = (v5[4] - v5[1]) * v8;
      *(float *)v15 = (v5[3] - *v5) * v8 + *v5;
      *(float *)&v15[1] = v10 + v5[1];
      v11 = v8 * v9 + v5[2];
      v12 = (float *)this[59];
      *(float *)&v15[2] = v11;
      *(float *)v16 = v12[25] * *(float *)(result + 16)
                    + *(float *)(result + 12) * v12[24]
                    + v12[26] * *(float *)(result + 20)
                    + v12[27];
      *(float *)&v16[1] = v12[28] * *(float *)(result + 12)
                        + v12[29] * *(float *)(result + 16)
                        + v12[30] * *(float *)(result + 20)
                        + v12[31];
      v17 = v12[32] * *(float *)(result + 12)
          + v12[33] * *(float *)(result + 16)
          + v12[34] * *(float *)(result + 20)
          + v12[35];
      v13 = 1.0 - 0.5 * (cos((v6 + v6) * 0.5) + 1.0);
      sub_1004ABA0(v7, (float *)v16, (float *)v15, v13, flt_103E8EF8);
      v14 = (float)(int)v17;
    }
  }
  return result;
}
