float *__cdecl sub_10014C30(int a1, float *a2, float *a3)
{
  __int16 *v3; // eax
  __int16 *v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *result; // eax
  double v8; // st6
  double v9; // st5
  double v10; // st7
  double v11; // rt1
  double v12; // st5
  double v13; // rt2
  double v14; // st5
  double v15; // st4
  double v16; // st2
  double v17; // st3
  double v18; // st7
  float v19[3]; // [esp+4h] [ebp-30h] BYREF
  float v20; // [esp+10h] [ebp-24h] BYREF
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v24; // [esp+28h] [ebp-Ch]
  float v25; // [esp+2Ch] [ebp-8h]
  float v26; // [esp+30h] [ebp-4h]

  if ( *(_DWORD *)(dword_104024EC + 48) )
  {
    *a3 = *(float *)(dword_1040260C + 44) + *a3;
    a3[1] = *(float *)(dword_10402654 + 44) + a3[1];
    a3[2] = *(float *)(dword_1040269C + 44) + a3[2];
    v24 = *(float *)(dword_10402534 + 44);
    v25 = *(float *)(dword_1040257C + 44);
    v26 = *(float *)(dword_104025C4 + 44);
  }
  else
  {
    v3 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 788))(a1);
    v4 = v3;
    if ( v3 )
    {
      v5 = (float *)sub_1000AA30(v3);
      *a3 = v5[17] + *a3;
      a3[1] = v5[18] + a3[1];
      a3[2] = v5[19] + a3[2];
      v6 = (float *)sub_1000AA30(v4);
      v24 = v6[14];
      v25 = v6[15];
      v26 = v6[16];
    }
  }
  sub_101EE040(a3, v23, &v20, v19);
  result = a2;
  v8 = v24 * v23[2];
  v9 = v23[0] * v24 + *a2;
  v10 = v23[1] * v24;
  *a2 = v9;
  v11 = v9;
  v12 = v10 + a2[1];
  a2[1] = v12;
  v13 = v12;
  v14 = v8 + a2[2];
  a2[2] = v14;
  v15 = v20 * v25;
  v16 = v21 * v25;
  v17 = v25 * v22;
  v20 = v19[0] * v26;
  v21 = v19[1] * v26;
  v18 = v26 * v19[2];
  *a2 = v15 + v11 + v20;
  a2[1] = v16 + v13 + v21;
  a2[2] = v18 + v17 + v14;
  return result;
}
