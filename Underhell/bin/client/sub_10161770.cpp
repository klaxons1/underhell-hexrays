int __thiscall sub_10161770(int this, int a2)
{
  int v4; // ecx
  int result; // eax
  float *v6; // esi
  float *v7; // eax
  double v8; // st6
  double v9; // st7
  float v10; // [esp+0h] [ebp-24h]
  float v11; // [esp+4h] [ebp-20h]
  float v12; // [esp+8h] [ebp-1Ch]
  int v13[3]; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+2Ch] [ebp+8h]

  v4 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v4 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v6 = *(float **)(a2 + 16420);
    if ( v6 )
    {
      do
      {
        v7 = *(float **)(this + 464);
        *(float *)v13 = v7[25] * v6[4] + v6[3] * v7[24] + v7[26] * v6[5] + v7[27];
        *(float *)&v13[1] = v7[29] * v6[4] + v7[28] * v6[3] + v7[30] * v6[5] + v7[31];
        *(float *)&v13[2] = v7[33] * v6[4] + v7[32] * v6[3] + v7[34] * v6[5] + v7[35];
        v8 = v6[12] * *(float *)(this + 460);
        v14 = (3.1415927 * v8 + 3.1415927 * v8) * 40.743664 - 128.0 + 12582976.0;
        v9 = (flt_10458E30[LOBYTE(v14)] + 1.0) * 0.5;
        if ( v8 > 0.5 )
          v9 = v9 * v9;
        v12 = v6[13] * 0.017453292;
        v11 = v8 * (*(float *)(this + 328) - *(float *)(this + 324)) + *(float *)(this + 324);
        v10 = v9 * *(float *)(this + 456);
        sub_101615C0(this + 236, *(float ***)(a2 + 8), v6 + 3, (float *)v13, v10, v11, v12);
        result = sub_1004B070(a2, v6[15]);
        v6 = (float *)result;
      }
      while ( result );
    }
  }
  return result;
}
