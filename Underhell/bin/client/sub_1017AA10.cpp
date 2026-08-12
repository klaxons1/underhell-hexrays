int __thiscall sub_1017AA10(_BYTE *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  double v6; // st6
  float *v7; // eax
  _DWORD *v8; // eax
  double v9; // st7
  double v10; // st5
  double v11; // st4
  double v12; // st6
  double v13; // st5
  double v14; // st7
  float v15; // [esp+0h] [ebp-5Ch]
  float v16; // [esp+Ch] [ebp-50h]
  int v17[4]; // [esp+1Ch] [ebp-40h] BYREF
  int v18[2]; // [esp+2Ch] [ebp-30h] BYREF
  float v19; // [esp+34h] [ebp-28h]
  int v20[3]; // [esp+38h] [ebp-24h] BYREF
  float v21[3]; // [esp+44h] [ebp-18h] BYREF
  float v22; // [esp+50h] [ebp-Ch]
  int v23; // [esp+54h] [ebp-8h]
  _BYTE *v24; // [esp+58h] [ebp-4h]
  float v25; // [esp+64h] [ebp+8h]

  v24 = this;
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
        v6 = (1.0 - *(float *)(v5 + 44) / *(float *)(v5 + 40)) * *(float *)(v5 + 48);
        v25 = v6;
        if ( v6 < 0.0099999998 )
          v25 = 0.0099999998;
        v7 = (float *)sub_100F0920();
        *(float *)v18 = v7[25] * *(float *)(v5 + 16)
                      + *(float *)(v5 + 12) * v7[24]
                      + v7[26] * *(float *)(v5 + 20)
                      + v7[27];
        *(float *)&v18[1] = v7[28] * *(float *)(v5 + 12)
                          + v7[29] * *(float *)(v5 + 16)
                          + v7[30] * *(float *)(v5 + 20)
                          + v7[31];
        v19 = v7[32] * *(float *)(v5 + 12) + v7[33] * *(float *)(v5 + 16) + v7[34] * *(float *)(v5 + 20) + v7[35];
        v22 = v19;
        v8 = sub_100F0920();
        sub_101F2270(v8 + 24, v5 + 24, v21);
        if ( *(float *)(v5 + 44) <= 0.3 && (v24[376] & 8) != 0 )
        {
          v9 = *(float *)(v5 + 44);
        }
        else if ( (v24[376] & 4) != 0 )
        {
          v9 = 1.0 - *(float *)(v5 + 44) / *(float *)(v5 + 40);
        }
        else
        {
          v9 = 1.0;
        }
        v23 = *(unsigned __int8 *)(v5 + 36);
        *(float *)v17 = (double)v23 * v9 * 0.0039215689;
        v23 = *(unsigned __int8 *)(v5 + 37);
        *(float *)&v17[1] = (double)v23 * v9 * 0.0039215689;
        v23 = *(unsigned __int8 *)(v5 + 38);
        *(float *)&v17[2] = (double)v23 * v9 * 0.0039215689;
        v23 = *(unsigned __int8 *)(v5 + 39);
        *(float *)&v17[3] = v9 * (double)v23 * 0.0039215689;
        v10 = *(float *)(v5 + 28) * v25;
        v11 = v25 * *(float *)(v5 + 24);
        v12 = v11 * v11 + v10 * v10;
        v13 = v25 * *(float *)(v5 + 32);
        v16 = v13 * v13 + v12;
        v14 = off_103EDFE0(v16);
        if ( v14 >= *(float *)(v5 + 52) )
          v14 = *(float *)(v5 + 52);
        *(float *)v20 = v21[0] * v25;
        *(float *)&v20[1] = v21[1] * v25;
        *(float *)&v20[2] = v25 * v21[2];
        v15 = v14;
        sub_10175DC0(*(_DWORD *)(a2 + 8), (float *)v18, (float *)v20, v15, (float *)v17, 0.0, 1.0);
        result = sub_1004B070(a2, v22);
        v5 = result;
      }
      while ( result );
    }
  }
  return result;
}
