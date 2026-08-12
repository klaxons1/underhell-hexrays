char __thiscall sub_101AC0B0(int this, int a2, float *a3)
{
  double v5; // st7
  float *v6; // eax
  double v7; // st1
  double v8; // st4
  double v9; // st1
  double v10; // st2
  double v11; // st6
  double v12; // st4
  double v13; // st2
  double v14; // st1
  double v16; // st6
  double v17; // st5
  double v18; // st7
  float v19; // [esp+14h] [ebp-30h] BYREF
  float v20; // [esp+18h] [ebp-2Ch]
  float v21; // [esp+1Ch] [ebp-28h]
  float v22; // [esp+20h] [ebp-24h] BYREF
  float v23; // [esp+24h] [ebp-20h]
  float v24; // [esp+28h] [ebp-1Ch]
  float v25; // [esp+2Ch] [ebp-18h]
  float v26; // [esp+30h] [ebp-14h]
  float v27; // [esp+34h] [ebp-10h]
  float v28; // [esp+38h] [ebp-Ch]
  float v29; // [esp+3Ch] [ebp-8h]
  float v30; // [esp+40h] [ebp-4h]
  float v31; // [esp+4Ch] [ebp+8h]

  if ( !a2 )
    return 0;
  sub_1009E3A0(a2, &v19);
  sub_1009E3F0(a2, &v22);
  v5 = v19;
  v6 = *(float **)(this + 8);
  v7 = v20 - v6[39];
  v8 = v7 * v7;
  v9 = v19 - v6[38];
  v10 = v21 - v6[40];
  v11 = v21;
  v12 = v10 * v10 + v9 * v9 + v8;
  v25 = v22 - v6[38];
  v13 = v23;
  v26 = v23 - v6[39];
  v14 = v24;
  v27 = v24 - v6[40];
  if ( v12 > 256.0 )
  {
    if ( v26 * v26 + v25 * v25 + v27 * v27 > 256.0 )
      return 0;
    v31 = v12;
    v12 = v31;
    v14 = v24;
    v13 = v23;
  }
  if ( v12 >= 256.0 )
  {
    v17 = v5 - v22;
    v18 = v20 - v13;
    v16 = v11 - v14;
  }
  else
  {
    v16 = v14 - v11;
    v17 = v22 - v5;
    v18 = v13 - v20;
  }
  v28 = v17;
  v29 = v18;
  v30 = v16;
  off_103EDFEC();
  if ( *(float *)(this + 28) * v29 + *(float *)(this + 24) * v28 + *(float *)(this + 32) * v30 <= *(float *)(dword_1044E634 + 44) )
    return 0;
  sub_101ABB90((_DWORD *)this, 1, *(float *)(*(_DWORD *)(this + 4) + 4144), a3, a2);
  return 1;
}
