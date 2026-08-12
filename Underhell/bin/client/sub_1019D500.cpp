int __thiscall sub_1019D500(int this, float *a2, float *a3)
{
  double v4; // st7
  double v6; // st4
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  _DWORD *v12; // ebx
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  float *v16; // edi
  double v17; // st7
  float v19; // [esp+Ch] [ebp-20h]
  float v20; // [esp+10h] [ebp-1Ch]
  float v21; // [esp+14h] [ebp-18h]
  float v22; // [esp+18h] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-10h]
  float v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+24h] [ebp-8h]
  float v27; // [esp+28h] [ebp-4h]
  float v28; // [esp+28h] [ebp-4h]
  float v29; // [esp+34h] [ebp+8h]
  float v30; // [esp+34h] [ebp+8h]
  float v31; // [esp+38h] [ebp+Ch]
  float v32; // [esp+38h] [ebp+Ch]

  v4 = a2[7] * 0.5;
  v19 = *a3 * v4 + *a2;
  v20 = a3[1] * v4 + a2[1];
  v21 = v4 * a3[2] + a2[2];
  v6 = a2[7] * -0.5;
  v22 = *a3 * v6 + *a2;
  v23 = a3[1] * v6 + a2[1];
  v7 = *(float **)(this + 3132);
  v24 = v6 * a3[2] + a2[2];
  *v7 = v19;
  v7[1] = v20;
  v7[2] = v21;
  v25 = a2[5] * 255.0 + 8388608.0;
  v27 = a2[4] * 255.0 + 8388608.0;
  v31 = a2[3] * 255.0 + 8388608.0;
  v29 = 255.0 * a2[8] + 8388608.0;
  **(_DWORD **)(this + 3172) = LOBYTE(v25) | ((LOBYTE(v27) | ((LOBYTE(v31) | (LOBYTE(v29) << 8)) << 8)) << 8);
  v8 = *(float **)(this + 3140);
  v9 = a2[6];
  *v8 = 0.0;
  v8[1] = v9;
  v10 = *(float **)(this + 3144);
  v11 = a2[6];
  v12 = (_DWORD *)(this + 2948);
  *v10 = 0.0;
  v10[1] = v11;
  sub_10016A80((_DWORD *)(this + 2948));
  v13 = *(float **)(this + 3132);
  *v13 = v22;
  v13[1] = v23;
  v13[2] = v24;
  v28 = a2[5] * 255.0 + 8388608.0;
  v26 = a2[4] * 255.0 + 8388608.0;
  v32 = a2[3] * 255.0 + 8388608.0;
  v30 = 255.0 * a2[8] + 8388608.0;
  **(_DWORD **)(this + 3172) = LOBYTE(v28) | ((LOBYTE(v26) | ((LOBYTE(v32) | (LOBYTE(v30) << 8)) << 8)) << 8);
  v14 = *(float **)(this + 3140);
  v15 = a2[6];
  v16 = *(float **)(this + 3144);
  *v14 = 1.0;
  v14[1] = v15;
  v17 = a2[6];
  *v16 = 1.0;
  v16[1] = v17;
  return sub_10016A80(v12);
}
