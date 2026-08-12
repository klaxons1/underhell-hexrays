float *__stdcall sub_10095750(float *a1, int a2)
{
  double v2; // st7
  float *v3; // edi
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st7
  double v9; // st2
  double v10; // st1
  double v11; // st4
  double v12; // st6
  double v13; // st3
  double v14; // st5
  float *result; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st2
  double v19; // st1
  double v20; // st5
  _BYTE v21[12]; // [esp+8h] [ebp-30h] BYREF
  float v22; // [esp+14h] [ebp-24h] BYREF
  float v23; // [esp+18h] [ebp-20h]
  float v24; // [esp+1Ch] [ebp-1Ch]
  float v25; // [esp+20h] [ebp-18h] BYREF
  float v26; // [esp+24h] [ebp-14h]
  float v27; // [esp+28h] [ebp-10h]
  float v28; // [esp+2Ch] [ebp-Ch] BYREF
  float v29; // [esp+30h] [ebp-8h]
  float v30; // [esp+34h] [ebp-4h]

  v2 = *(float *)(a2 + 4) - 100.0;
  v3 = (float *)(dword_1042CD48 + 32 * *(unsigned __int16 *)(a2 + 24));
  v28 = *(float *)a2 - *(float *)a2;
  v29 = v2 - *(float *)(a2 + 4);
  v30 = 0.0;
  sub_101EE190(&v28, v21);
  sub_101EE040(v21, 0, &v22, &v25);
  v4 = *(float *)(a2 + 48);
  v5 = *v3 * v4;
  v6 = v3[1] * v4;
  v7 = v3[2] * v4;
  v8 = v4 * v3[3];
  v9 = v22 * v5 + *(float *)a2;
  v29 = v23 * v5 + *(float *)(a2 + 4);
  v30 = v24 * v5 + *(float *)(a2 + 8);
  v28 = v9 + v25 * v6;
  v29 = v26 * v6 + v29;
  v10 = v7;
  v11 = v27 * v6 + v30;
  v12 = v10 - v5;
  v13 = v22 * v12;
  v14 = v8 - v6;
  result = a1;
  v16 = v23 * v12 * 0.5;
  v17 = v12 * v24 * 0.5;
  v18 = v25 * v14 + v28;
  v19 = v14 * v27;
  v20 = v26 * v14 + v29;
  *a1 = v13 * 0.5 + v18;
  a1[1] = v16 + v20;
  a1[2] = v11 + v19 + v17;
  return result;
}
