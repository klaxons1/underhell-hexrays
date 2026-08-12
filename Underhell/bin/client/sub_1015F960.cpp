void __thiscall sub_1015F960(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  float *v5; // eax
  double v6; // st7
  float *v7; // ecx
  float **v8; // edx
  float v9; // [esp+0h] [ebp-28h]
  int v10[3]; // [esp+10h] [ebp-18h] BYREF
  int v11[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v12; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)(this + 276) )
  {
    v3 = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(a2 + 16424) = 1;
    v4 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(a2 + 16420) = v4;
    if ( v4 != v3 + 4 )
    {
      **(_DWORD **)(a2 + 8) = *(_DWORD *)(v4 + 8);
      v5 = *(float **)(a2 + 16420);
      if ( v5 )
      {
        v6 = 1.0;
        *(float *)v10 = 1.0;
        *(float *)&v10[1] = 1.0;
        *(float *)&v10[2] = 1.0;
        while ( 1 )
        {
          v7 = *(float **)(this + 380);
          v8 = *(float ***)(a2 + 8);
          *(float *)v11 = v7[25] * v5[4] + v7[24] * v5[3] + v7[26] * v5[5] + v7[27];
          *(float *)&v11[1] = v7[29] * v5[4] + v7[28] * v5[3] + v7[30] * v5[5] + v7[31];
          v12 = v7[33] * v5[4] + v7[32] * v5[3] + v7[34] * v5[5] + v7[35];
          v9 = v6;
          sub_1004ABA0(v8, (float *)v11, (float *)v10, v9, 4.0);
          v5 = (float *)sub_1004B070(a2, v12);
          if ( !v5 )
            break;
          v6 = 1.0;
        }
      }
    }
  }
}
