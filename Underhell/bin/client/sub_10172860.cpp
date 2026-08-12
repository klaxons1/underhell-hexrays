int __thiscall sub_10172860(float *this, int a2)
{
  int v4; // ecx
  int result; // eax
  int v6; // esi
  float *v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // eax
  float **v12; // eax
  float v13; // [esp+0h] [ebp-2Ch]
  int v14[3]; // [esp+14h] [ebp-18h] BYREF
  int v15[2]; // [esp+20h] [ebp-Ch] BYREF
  float v16; // [esp+28h] [ebp-4h]
  int v17; // [esp+34h] [ebp+8h]
  int v18; // [esp+34h] [ebp+8h]

  v4 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v4 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v6 = *(_DWORD *)(a2 + 16420);
    if ( v6 )
    {
      do
      {
        v7 = (float *)sub_100F0920();
        v8 = *(unsigned __int8 *)(v6 + 45);
        v9 = *(unsigned __int8 *)(v6 + 46);
        *(float *)v15 = v7[25] * *(float *)(v6 + 16)
                      + v7[24] * *(float *)(v6 + 12)
                      + v7[26] * *(float *)(v6 + 20)
                      + v7[27];
        *(float *)&v15[1] = v7[28] * *(float *)(v6 + 12)
                          + v7[29] * *(float *)(v6 + 16)
                          + v7[30] * *(float *)(v6 + 20)
                          + v7[31];
        v10 = v7[32] * *(float *)(v6 + 12) + v7[33] * *(float *)(v6 + 16) + v7[34] * *(float *)(v6 + 20) + v7[35];
        v17 = *(unsigned __int8 *)(v6 + 44);
        v11 = *(unsigned __int8 *)(v6 + 47);
        v16 = v10;
        *(float *)v14 = (double)v17 * 0.0039077764;
        *(float *)&v14[1] = (double)v8 * 0.0039077764;
        v18 = v11;
        v12 = *(float ***)(a2 + 8);
        *(float *)&v14[2] = (double)v9 * 0.0039077764;
        v13 = 0.0039077764 * (double)v18;
        sub_1004ABA0(v12, (float *)v15, (float *)v14, v13, this[64]);
        result = sub_1004B070(a2, v16);
        v6 = result;
      }
      while ( result );
    }
  }
  return result;
}
