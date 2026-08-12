int __thiscall sub_10162FA0(int this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  float *v6; // eax
  double v7; // st5
  int v8; // eax
  double v9; // st5
  float *v10; // eax
  double v11; // st3
  double v12; // st4
  double v13; // st5
  double v14; // st3
  double v15; // rtt
  double v16; // st3
  double v17; // rt0
  double v18; // st3
  double v19; // st5
  long double v20; // st6
  double v21; // st5
  float v22; // [esp+0h] [ebp-30h]
  float v23; // [esp+4h] [ebp-2Ch]
  float v24; // [esp+4h] [ebp-2Ch]
  float v25; // [esp+8h] [ebp-28h]
  int v26[2]; // [esp+18h] [ebp-18h] BYREF
  float v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+24h] [ebp-Ch] BYREF
  float v29; // [esp+28h] [ebp-8h]
  float v30; // [esp+2Ch] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v3 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v5 = *(_DWORD *)(a2 + 16420);
    if ( v5 )
    {
      do
      {
        v6 = *(float **)(this + 368);
        *(float *)v26 = v6[25] * *(float *)(v5 + 16)
                      + v6[24] * *(float *)(v5 + 12)
                      + v6[26] * *(float *)(v5 + 20)
                      + v6[27];
        *(float *)&v26[1] = v6[29] * *(float *)(v5 + 16)
                          + v6[28] * *(float *)(v5 + 12)
                          + v6[30] * *(float *)(v5 + 20)
                          + v6[31];
        v27 = v6[33] * *(float *)(v5 + 16) + v6[32] * *(float *)(v5 + 12) + v6[34] * *(float *)(v5 + 20) + v6[35];
        v7 = *(float *)(v5 + 44) / (*(float *)(v5 + 48) + 0.001) * 4.0;
        v8 = (int)v7;
        v9 = v7 - (double)(int)v7;
        v10 = (float *)(this + 12 * v8);
        v11 = (v10[80] - v10[77]) * v9;
        v12 = (v10[81] - v10[78]) * v9;
        v13 = v9 * (v10[82] - v10[79]);
        v14 = v11 + v10[77];
        *(float *)&v28 = v14;
        v15 = v14;
        v16 = v12 + v10[78];
        v29 = v16;
        v17 = v16;
        v18 = v13 + v10[79];
        v19 = v17;
        v30 = v18;
        if ( v15 > 1.0 )
          *(float *)&v28 = 1.0;
        if ( v19 > 1.0 )
          v29 = 1.0;
        if ( v18 > 1.0 )
          v30 = 1.0;
        v20 = sin(*(float *)(v5 + 44) * 3.1415901 / *(float *)(v5 + 48));
        if ( *(_DWORD *)(this + 264) == 1 )
        {
          v25 = *(float *)(this + 244) + (*(float *)(this + 248) - *(float *)(this + 244)) * *(float *)(v5 + 44);
          v23 = 0.0039215689 * (double)*(unsigned __int8 *)(this - 1101) * v20;
          sub_10162510(*(_DWORD *)(a2 + 8), (float *)v26, (float *)&v28, v23, v25);
        }
        else
        {
          v21 = (double)*(unsigned __int8 *)(v5 + 52);
          v24 = v21 + ((double)*(unsigned __int8 *)(v5 + 53) - v21) * *(float *)(v5 + 44);
          v22 = 0.0039215689 * (double)*(unsigned __int8 *)(this - 1101) * v20;
          sub_10054ED0(*(float ***)(a2 + 8), (float *)v26, (float *)&v28, v22, v24, *(float *)(v5 + 36));
        }
        result = sub_1004B070(a2, v27);
        v5 = result;
      }
      while ( result );
    }
  }
  return result;
}
