int __thiscall sub_101585C0(int this, int a2)
{
  int v3; // ecx
  int result; // eax
  float *v5; // ecx
  float **v6; // edx
  long double v7; // st7
  float v8; // [esp+0h] [ebp-28h]
  int v9[3]; // [esp+10h] [ebp-18h] BYREF
  int v10[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v11; // [esp+24h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v3 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    result = *(_DWORD *)(a2 + 16420);
    if ( result )
    {
      *(float *)&v9[2] = 0.0;
      do
      {
        v5 = *(float **)(this + 2040);
        v6 = *(float ***)(a2 + 8);
        *(float *)v10 = v5[25] * *(float *)(result + 16)
                      + v5[24] * *(float *)(result + 12)
                      + v5[26] * *(float *)(result + 20)
                      + v5[27];
        *(float *)&v10[1] = v5[29] * *(float *)(result + 16)
                          + v5[28] * *(float *)(result + 12)
                          + v5[30] * *(float *)(result + 20)
                          + v5[31];
        v11 = v5[33] * *(float *)(result + 16)
            + v5[32] * *(float *)(result + 12)
            + v5[34] * *(float *)(result + 20)
            + v5[35];
        v7 = sin(*(float *)(result + 36) * 3.14159);
        *(float *)v9 = v7;
        *(float *)&v9[1] = v7 * 0.5;
        v8 = v7 * *(float *)(this + 2048);
        sub_1004ABA0(v6, (float *)v10, (float *)v9, v8, 10.0);
        result = sub_1004B070(a2, v11);
      }
      while ( result );
    }
  }
  return result;
}
