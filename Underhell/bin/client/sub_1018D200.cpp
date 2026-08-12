int __thiscall sub_1018D200(_DWORD *this, int a2)
{
  int v4; // ecx
  int result; // eax
  float *v6; // ecx
  float *v7; // eax
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st6
  double v16; // st6
  double v17; // st7
  float v18; // [esp+0h] [ebp-2Ch]
  float v19; // [esp+8h] [ebp-24h]
  int v20[3]; // [esp+14h] [ebp-18h] BYREF
  int v21[3]; // [esp+20h] [ebp-Ch] BYREF
  float v22; // [esp+34h] [ebp+8h]

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
        if ( v6[9] < 0.0 )
        {
          v17 = 0.0;
        }
        else
        {
          v7 = (float *)this[59];
          v8 = (v6[9] - 0.25) / v6[18];
          v9 = flt_103EA898 * v8;
          v10 = flt_103EA89C * v8;
          v11 = flt_103EA8A0 * v8;
          v12 = 1.0 - v8;
          *(float *)v21 = v9 + flt_103EA88C * v12;
          *(float *)&v21[1] = v10 + v12 * flt_103EA890;
          *(float *)&v21[2] = v12 * flt_103EA894 + v11;
          *(float *)v20 = v7[25] * v6[4] + v7[24] * v6[3] + v7[26] * v6[5] + v7[27];
          *(float *)&v20[1] = v7[29] * v6[4] + v7[28] * v6[3] + v7[30] * v6[5] + v7[31];
          v13 = v7[33] * v6[4] + v7[32] * v6[3] + v7[34] * v6[5] + v7[35];
          *(float *)&v20[2] = v13;
          if ( v6[9] < 0.25 )
            v12 = v6[9] * 4.0;
          v14 = v12 * 0.5;
          v15 = -v13;
          if ( -v13 <= 150.0 )
          {
            if ( v15 <= 50.0 )
              v16 = 0.0;
            else
              v16 = (v15 - 50.0) * 0.0099999998;
          }
          else
          {
            v16 = 1.0;
          }
          v18 = v14 * v16;
          sub_10054ED0(*(float ***)(a2 + 8), (float *)v20, (float *)v21, v18, v6[12], v6[16]);
          v22 = v13;
          v17 = v22;
        }
        v19 = v17;
        result = sub_1004B070(a2, v19);
        v6 = (float *)result;
      }
      while ( result );
    }
  }
  return result;
}
