int __stdcall sub_100EAFB0(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  float v11; // [esp+0h] [ebp-50h]
  float v12; // [esp+4h] [ebp-4Ch]
  float v13[3]; // [esp+18h] [ebp-38h] BYREF
  float v14; // [esp+24h] [ebp-2Ch]
  float v15; // [esp+28h] [ebp-28h]
  float v16; // [esp+2Ch] [ebp-24h]
  float v17; // [esp+30h] [ebp-20h]
  float v18; // [esp+34h] [ebp-1Ch]
  float v19; // [esp+38h] [ebp-18h]
  int v20[3]; // [esp+3Ch] [ebp-14h] BYREF
  float v21; // [esp+48h] [ebp-8h]
  int v22; // [esp+4Ch] [ebp-4h]

  result = a1;
  v2 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 16424) = 1;
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(a1 + 16420) = v3;
  if ( v3 != v2 + 4 )
  {
    **(_DWORD **)(a1 + 8) = *(_DWORD *)(v3 + 8);
    v4 = *(_DWORD *)(a1 + 16420);
    if ( v4 )
    {
      do
      {
        v5 = (float *)sub_101422C0();
        v17 = *v5 - *(float *)(v4 + 12);
        v18 = v5[1] - *(float *)(v4 + 16);
        v19 = v5[2] - *(float *)(v4 + 20);
        v6 = (float *)sub_101422E0();
        v21 = v6[1] * v18 + *v6 * v17 + v6[2] * v19;
        v7 = (float *)sub_101422C0();
        v14 = *(float *)(v4 + 12) - *v7;
        v15 = *(float *)(v4 + 16) - v7[1];
        v16 = *(float *)(v4 + 20) - v7[2];
        sub_101EDFB0(v4 + 36, v13);
        if ( v13[1] * v15 + v14 * v13[0] + v13[2] * v16 > 0.0 )
        {
          v8 = *(unsigned __int8 *)(v4 + 61);
          v9 = *(unsigned __int8 *)(v4 + 62);
          v22 = *(unsigned __int8 *)(v4 + 60);
        }
        else
        {
          v8 = *(unsigned __int8 *)(v4 + 57);
          v9 = *(unsigned __int8 *)(v4 + 58);
          v22 = *(unsigned __int8 *)(v4 + 56);
        }
        *(float *)v20 = (double)v22 * 0.0039215689;
        v22 = v9;
        *(float *)&v20[1] = (double)v8 * 0.0039215689;
        *(float *)&v20[2] = 0.0039215689 * (double)v9;
        if ( *(float *)(v4 + 52) < 2.0 )
          v10 = *(float *)(v4 + 52) * 0.5;
        else
          v10 = 1.0;
        v22 = *(unsigned __int8 *)(v4 + 59);
        v12 = (float)v22;
        v11 = v10;
        sub_100EABA0(*(float ***)(a1 + 8), (float *)(v4 + 12), (float *)v20, v11, v12, v4 + 36);
        result = sub_1004B070(a1, v21);
        v4 = result;
      }
      while ( result );
    }
  }
  return result;
}
