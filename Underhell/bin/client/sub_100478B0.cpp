float *__cdecl sub_100478B0(float *a1, char a2)
{
  float *v2; // esi
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  float *result; // eax
  double v13; // st7
  double v14; // st6
  float v15; // [esp+8h] [ebp-2Ch]
  float v16; // [esp+Ch] [ebp-28h]
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+14h] [ebp-20h]
  float v19; // [esp+18h] [ebp-1Ch]
  float v20; // [esp+1Ch] [ebp-18h]
  float v21; // [esp+20h] [ebp-14h]
  float v22; // [esp+20h] [ebp-14h]
  float v23; // [esp+24h] [ebp-10h]
  float v24; // [esp+24h] [ebp-10h]
  float v25; // [esp+28h] [ebp-Ch]
  float v26; // [esp+2Ch] [ebp-8h]
  float v27; // [esp+30h] [ebp-4h]
  float v28; // [esp+3Ch] [ebp+8h]

  v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 48))(dword_10439968);
  v27 = tan(v2[9] * 3.141592653589793 * 0.002777777777777778) / tan(0.002777777777777778 * (3.141592653589793 * v2[10]));
  v21 = *a1 - v2[11];
  v23 = a1[1] - v2[12];
  v25 = a1[2] - v2[13];
  v4 = (float *)sub_101356F0();
  v26 = v4[1] * v23 + *v4 * v21 + v4[2] * v25;
  v5 = (float *)sub_10135710();
  v28 = v5[1] * v23 + *v5 * v21 + v5[2] * v25;
  v6 = (float *)sub_10135700();
  v7 = v6[1] * v23 + *v6 * v21 + v6[2] * v25;
  v8 = v27;
  if ( a2 )
  {
    if ( 0.0 == v8 )
    {
      v9 = 0.0;
      v22 = 0.0;
    }
    else
    {
      v22 = v7 / v8;
      v9 = v28 / v27;
    }
  }
  else
  {
    v22 = v7 * v8;
    v9 = v27 * v28;
  }
  v24 = v9;
  v10 = (float *)sub_101356F0();
  v15 = *v10 * v26;
  v16 = v10[1] * v26;
  v17 = v26 * v10[2];
  v11 = (float *)sub_10135710();
  v18 = *v11 * v24;
  v19 = v11[1] * v24;
  v20 = v24 * v11[2];
  result = (float *)sub_10135700();
  v13 = result[1] * v22 + v19 + v16 + v2[12];
  v14 = v22 * result[2] + v20 + v17 + v2[13];
  *a1 = *result * v22 + v18 + v15 + v2[11];
  a1[1] = v13;
  a1[2] = v14;
  return result;
}
