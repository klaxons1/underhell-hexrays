int __userpurge sub_100A3F70@<eax>(int a1@<esi>, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  float *v6; // eax
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  int v10; // eax
  float **v11; // eax
  float v12; // [esp+0h] [ebp-2Ch]
  float v13; // [esp+4h] [ebp-28h]
  float v14; // [esp+8h] [ebp-24h]
  int v15; // [esp+Ch] [ebp-20h]
  int v16[3]; // [esp+14h] [ebp-18h] BYREF
  int v17[2]; // [esp+20h] [ebp-Ch] BYREF
  float v18; // [esp+28h] [ebp-4h]
  int v19; // [esp+34h] [ebp+8h]
  int v20; // [esp+34h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v3 + 4 )
  {
    v15 = a1;
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v5 = *(_DWORD *)(a2 + 16420);
    if ( v5 )
    {
      do
      {
        v6 = (float *)sub_100F0920(v15);
        v7 = *(unsigned __int8 *)(v5 + 53);
        v8 = *(unsigned __int8 *)(v5 + 54);
        *(float *)v17 = v6[25] * *(float *)(v5 + 16)
                      + v6[24] * *(float *)(v5 + 12)
                      + v6[26] * *(float *)(v5 + 20)
                      + v6[27];
        *(float *)&v17[1] = v6[28] * *(float *)(v5 + 12)
                          + v6[29] * *(float *)(v5 + 16)
                          + v6[30] * *(float *)(v5 + 20)
                          + v6[31];
        v9 = v6[32] * *(float *)(v5 + 12) + v6[33] * *(float *)(v5 + 16) + v6[34] * *(float *)(v5 + 20) + v6[35];
        v19 = *(unsigned __int8 *)(v5 + 52);
        v10 = *(unsigned __int8 *)(v5 + 55);
        v18 = v9;
        *(float *)v16 = (double)v19 * 0.0039215689;
        *(float *)&v16[1] = (double)v7 * 0.0039215689;
        v20 = v10;
        v11 = *(float ***)(a2 + 8);
        *(float *)&v16[2] = 0.0039215689 * (double)v8;
        v13 = (float)v20;
        v12 = 1.0 - *(float *)(v5 + 48) / *(float *)(v5 + 44);
        sub_10054ED0(v11, (float *)v17, (float *)v16, v12, v13, *(float *)(v5 + 36));
        v14 = (float)(int)v18;
        result = sub_1004B070(a2, v14);
        v5 = result;
      }
      while ( result );
    }
  }
  return result;
}
