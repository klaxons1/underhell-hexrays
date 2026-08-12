void __thiscall sub_1015B480(_DWORD *this)
{
  float *v2; // edx
  double v3; // st7
  double v4; // st5
  double v5; // st7
  double v6; // st7
  float *v7; // ecx
  double v8; // st6
  double v9; // st7
  float *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float *v14; // esi
  double v15; // st5
  double v16; // st4
  float *v17; // ecx
  double v18; // st6
  double v19; // rt1
  double v20; // st5
  double v21; // st6
  double v22; // rt2
  float v23; // [esp+0h] [ebp-1Ch]
  float v24; // [esp+4h] [ebp-18h]
  float v25; // [esp+8h] [ebp-14h]
  float v26; // [esp+10h] [ebp-Ch] BYREF
  float v27; // [esp+14h] [ebp-8h]
  float v28; // [esp+18h] [ebp-4h]

  v2 = (float *)this[1];
  if ( v2[577] * v2[577] + v2[576] * v2[576] + v2[578] * v2[578] > 0.001
    || v2[580] * v2[580] + v2[579] * v2[579] + v2[581] * v2[581] > 0.001 )
  {
    v3 = *(float *)(dword_106B31C8 + 16);
    v4 = v2[580] * v3;
    v5 = v3 * v2[581];
    v26 = *(float *)(dword_106B31C8 + 16) * v2[579] + v2[576];
    v27 = v4 + v2[577];
    v28 = v5 + v2[578];
    sub_100F5E90(v2 + 576, &v26);
    v6 = 1.0 - *(float *)(dword_106B31C8 + 16) * 9.0;
    if ( v6 < 0.0 )
      v6 = 0.0;
    v7 = (float *)this[1];
    v8 = v7[579];
    v7 += 579;
    v26 = v8 * v6;
    v27 = v7[1] * v6;
    v28 = v6 * v7[2];
    sub_100F5EF0(v7, &v26);
    v9 = *(float *)(dword_106B31C8 + 16) * 65.0;
    if ( v9 <= 2.0 )
    {
      if ( v9 < 0.0 )
        v9 = 0.0;
    }
    else
    {
      v9 = 2.0;
    }
    v10 = (float *)this[1];
    v11 = v10[576] * v9;
    v12 = v10[577] * v9;
    v13 = v9 * v10[578];
    v26 = v10[579] - v11;
    v27 = v10[580] - v12;
    v28 = v10[581] - v13;
    sub_100F5EF0(v10 + 579, &v26);
    v14 = (float *)this[1];
    if ( v14[578] <= 89.0 )
    {
      if ( v14[578] >= -89.0 )
        v15 = v14[578];
      else
        v15 = -89.0;
    }
    else
    {
      v15 = 89.0;
    }
    v16 = 179.0;
    if ( v14[577] <= 179.0 )
    {
      v16 = -179.0;
      if ( v14[577] >= -179.0 )
        v16 = v14[577];
    }
    v17 = v14 + 576;
    if ( v14[576] <= 89.0 )
    {
      v19 = v15;
      v20 = -89.0;
      v21 = v19;
      if ( *v17 >= -89.0 )
        v20 = *v17;
      v22 = v20;
      v15 = v21;
      v18 = v22;
    }
    else
    {
      v18 = 89.0;
    }
    v25 = v15;
    v24 = v16;
    v23 = v18;
    sub_1015B040(v17, v23, v24, v25);
  }
  else
  {
    sub_1015B040(v2 + 576, 0.0, 0.0, 0.0);
    sub_1015B0B0((float *)(this[1] + 2316), 0.0, 0.0, 0.0);
  }
}
