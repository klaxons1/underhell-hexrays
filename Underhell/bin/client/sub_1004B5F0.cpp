int __stdcall sub_1004B5F0(int a1)
{
  int v2; // ecx
  int result; // eax
  int v4; // esi
  float *v5; // eax
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  double v13; // st6
  int v14; // ecx
  float v15; // [esp+0h] [ebp-30h]
  float v16; // [esp+4h] [ebp-2Ch]
  int v17[3]; // [esp+10h] [ebp-20h] BYREF
  int v18[2]; // [esp+1Ch] [ebp-14h] BYREF
  float v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]
  float v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+38h] [ebp+8h]
  int v23; // [esp+38h] [ebp+8h]
  int v24; // [esp+38h] [ebp+8h]
  int v25; // [esp+38h] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 16424) = 1;
  result = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(a1 + 16420) = result;
  if ( result != v2 + 4 )
  {
    **(_DWORD **)(a1 + 8) = *(_DWORD *)(result + 8);
    v4 = *(_DWORD *)(a1 + 16420);
    if ( v4 )
    {
      do
      {
        v21 = *(float *)(v4 + 44) / *(float *)(v4 + 40);
        v5 = (float *)sub_100F0920();
        v6 = *(unsigned __int8 *)(v4 + 49);
        v7 = *(unsigned __int8 *)(v4 + 50);
        *(float *)v18 = v5[25] * *(float *)(v4 + 16)
                      + v5[24] * *(float *)(v4 + 12)
                      + v5[26] * *(float *)(v4 + 20)
                      + v5[27];
        *(float *)&v18[1] = v5[29] * *(float *)(v4 + 16)
                          + v5[28] * *(float *)(v4 + 12)
                          + v5[30] * *(float *)(v4 + 20)
                          + v5[31];
        v8 = v5[33] * *(float *)(v4 + 16) + v5[32] * *(float *)(v4 + 12) + v5[34] * *(float *)(v4 + 20) + v5[35];
        v22 = *(unsigned __int8 *)(v4 + 48);
        v9 = *(unsigned __int8 *)(v4 + 51);
        v19 = v8;
        v10 = (double)v22;
        v23 = v6;
        v11 = *(unsigned __int8 *)(v4 + 54);
        *(float *)v17 = v10 * 0.0039215689;
        *(float *)&v17[1] = (double)v23 * 0.0039215689;
        v24 = v9;
        v12 = *(unsigned __int8 *)(v4 + 53);
        v20 = v12;
        *(float *)&v17[2] = (double)v7 * 0.0039215689;
        v13 = (double)v24;
        v25 = v11 - v12;
        v14 = *(unsigned __int8 *)(v4 + 52);
        v20 = (int)((double)v25 * v21 + (double)v12);
        v16 = (float)(unsigned __int8)v20;
        v15 = v21 * (0.0039215689 * (double)v14 - v13 * 0.0039215689) + v13 * 0.0039215689;
        sub_1004ABA0(*(float ***)(a1 + 8), (float *)v18, (float *)v17, v15, v16);
        result = sub_1004B070(a1, v19);
        v4 = result;
      }
      while ( result );
    }
  }
  return result;
}
