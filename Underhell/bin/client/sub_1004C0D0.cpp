int __stdcall sub_1004C0D0(int a1)
{
  int v1; // ecx
  int result; // eax
  float *v3; // esi
  float *v4; // eax
  float **v5; // edx
  int v6[3]; // [esp+10h] [ebp-18h] BYREF
  int v7[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v8; // [esp+24h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 16424) = 1;
  result = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(a1 + 16420) = result;
  if ( result != v1 + 4 )
  {
    **(_DWORD **)(a1 + 8) = *(_DWORD *)(result + 8);
    v3 = *(float **)(a1 + 16420);
    if ( v3 )
    {
      *(float *)v6 = 1.0;
      *(float *)&v6[1] = 1.0;
      *(float *)&v6[2] = 1.0;
      do
      {
        v4 = (float *)sub_100F0920();
        v5 = *(float ***)(a1 + 8);
        *(float *)v7 = v4[25] * v3[4] + v4[24] * v3[3] + v4[26] * v3[5] + v4[27];
        *(float *)&v7[1] = v4[28] * v3[3] + v4[29] * v3[4] + v4[30] * v3[5] + v4[31];
        v8 = v4[32] * v3[3] + v4[33] * v3[4] + v4[34] * v3[5] + v4[35];
        sub_1004ABA0(v5, (float *)v7, (float *)v6, 1.0, v3[7]);
        result = sub_1004B070(a1, v8);
        v3 = (float *)result;
      }
      while ( result );
    }
  }
  return result;
}
