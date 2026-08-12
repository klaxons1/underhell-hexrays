void __thiscall sub_100ADA60(_DWORD *this)
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
  if ( v2[893] * v2[893] + v2[892] * v2[892] + v2[894] * v2[894] > 0.001
    || v2[907] * v2[907] + v2[906] * v2[906] + v2[908] * v2[908] > 0.001 )
  {
    v3 = *((float *)off_103DC81C + 4);
    v4 = v2[907] * v3;
    v5 = v3 * v2[908];
    v26 = *((float *)off_103DC81C + 4) * v2[906] + v2[892];
    v27 = v4 + v2[893];
    v28 = v5 + v2[894];
    sub_10012D10(v2 + 892, &v26);
    v6 = 1.0 - *((float *)off_103DC81C + 4) * 9.0;
    if ( v6 < 0.0 )
      v6 = 0.0;
    v7 = (float *)this[1];
    v8 = v7[906];
    v7 += 906;
    v26 = v8 * v6;
    v27 = v7[1] * v6;
    v28 = v6 * v7[2];
    sub_10012D70(v7, &v26);
    v9 = *((float *)off_103DC81C + 4) * 65.0;
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
    v11 = v10[892] * v9;
    v12 = v10[893] * v9;
    v13 = v9 * v10[894];
    v26 = v10[906] - v11;
    v27 = v10[907] - v12;
    v28 = v10[908] - v13;
    sub_10012D70(v10 + 906, &v26);
    v14 = (float *)this[1];
    if ( v14[894] <= 89.0 )
    {
      if ( v14[894] >= -89.0 )
        v15 = v14[894];
      else
        v15 = -89.0;
    }
    else
    {
      v15 = 89.0;
    }
    v16 = 179.0;
    if ( v14[893] <= 179.0 )
    {
      v16 = -179.0;
      if ( v14[893] >= -179.0 )
        v16 = v14[893];
    }
    v17 = v14 + 892;
    if ( v14[892] <= 89.0 )
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
    sub_100AD970(v17, v23, v24, v25);
  }
  else
  {
    sub_100AD970(v2 + 892, 0.0, 0.0, 0.0);
    sub_100AD9E0((float *)(this[1] + 3624), 0.0, 0.0, 0.0);
  }
}
