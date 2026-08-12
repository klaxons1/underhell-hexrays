int __thiscall sub_10052A50(_DWORD *this, int a2)
{
  int v4; // ecx
  int result; // eax
  float *v6; // esi
  long double v7; // st7
  double v8; // st7
  float *v9; // eax
  double v10; // st7
  int v11; // ecx
  unsigned __int8 *v12; // eax
  double v13; // st6
  double v14; // st7
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  float **v18; // eax
  float v19; // [esp+0h] [ebp-30h]
  float v20; // [esp+4h] [ebp-2Ch]
  int v21[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v22[3]; // [esp+20h] [ebp-10h] BYREF
  float v23; // [esp+2Ch] [ebp-4h]
  float v24; // [esp+38h] [ebp+8h]
  int v25; // [esp+38h] [ebp+8h]
  int v26; // [esp+38h] [ebp+8h]

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
        if ( (*(_BYTE *)(this[63] + 1228) & 4) != 0 )
        {
          v7 = 1.0;
        }
        else
        {
          v8 = v6[9] / v6[10] * 3.141592653589793;
          v7 = (sin(v8 + v8 - 1.570796326794897) + 1.0) * 0.5;
        }
        v24 = v7;
        v9 = (float *)sub_100F0920();
        *(float *)v21 = v9[25] * v6[4] + v9[24] * v6[3] + v9[26] * v6[5] + v9[27];
        *(float *)&v21[1] = v9[29] * v6[4] + v9[28] * v6[3] + v9[30] * v6[5] + v9[31];
        v10 = v9[33] * v6[4] + v9[32] * v6[3] + v9[34] * v6[5] + v9[35];
        *(float *)&v21[2] = v10;
        v11 = this[63];
        v23 = (float)(int)v10;
        if ( (double)*(int *)(v11 + 1220) >= -v10 )
        {
          v12 = (unsigned __int8 *)v11;
          v13 = (v10 / (double)*(int *)(v11 + 1220) + 1.0) * v24;
          if ( (*(_BYTE *)(v11 + 1228) & 2) != 0 )
            v14 = -(v10 * v6[11]);
          else
            v14 = v6[11];
          v15 = *(unsigned __int8 *)(v11 + 1193);
          v25 = v12[1192];
          v16 = v12[1194];
          v17 = v12[1195];
          *(float *)v22 = (float)v25;
          *(float *)&v22[1] = (float)v15;
          v26 = v17;
          v18 = *(float ***)(a2 + 8);
          *(float *)&v22[2] = (float)v16;
          v20 = v14;
          v19 = v13 * (double)v26;
          sub_10052390(v18, (float *)v21, (float *)v22, v19, v20);
        }
        result = sub_1004B070(a2, v23);
        v6 = (float *)result;
      }
      while ( result );
    }
  }
  return result;
}
