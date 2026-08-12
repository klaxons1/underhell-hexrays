void __stdcall sub_10138400(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  float *v7; // edi
  int v8; // eax
  double v9; // st7
  double v10; // st6
  unsigned int v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st1
  double v17; // st7
  double v18; // st7
  unsigned int v19; // eax
  double v20; // st5
  double v21; // st7
  double v22; // st6
  int v23; // edx
  int v24; // eax
  float v25; // [esp+0h] [ebp-64h]
  float v26; // [esp+34h] [ebp-30h]
  float v27; // [esp+34h] [ebp-30h]
  float v28[3]; // [esp+40h] [ebp-24h] BYREF
  int v29; // [esp+4Ch] [ebp-18h] BYREF
  float v30; // [esp+50h] [ebp-14h]
  float v31; // [esp+54h] [ebp-10h]
  float v32; // [esp+58h] [ebp-Ch]
  float v33; // [esp+5Ch] [ebp-8h]
  float v34; // [esp+60h] [ebp-4h]
  float v35; // [esp+78h] [ebp+14h]

  v29 = *(int *)a4;
  v30 = *(float *)(a4 + 4);
  v7 = (float *)(a1 + 60);
  v31 = *(float *)(a4 + 8);
  v32 = *(float *)(a1 + 72) - *(float *)(a1 + 60);
  v33 = *(float *)(a1 + 76) - *(float *)(a1 + 64);
  v34 = *(float *)(a1 + 80) - *(float *)(a1 + 68);
  off_103EDFEC();
  v8 = sub_101422D0();
  sub_101EDFB0(v8, v28);
  v9 = v28[1] * v33 + v32 * v28[0] + v28[2] * v34;
  if ( v9 <= 0.0 )
  {
    v10 = 1.0;
    v11 = 10;
    while ( 1 )
    {
      if ( (v11 & 1) != 0 )
        v10 = v10 * v9;
      v11 >>= 1;
      if ( !v11 )
        break;
      v9 = v9 * v9;
    }
    v35 = v10;
    v12 = (float *)sub_101422C0();
    v13 = *v12 - *v7;
    v14 = v12[1] - *(float *)(a1 + 64);
    v15 = v12[2] - *(float *)(a1 + 68);
    v16 = v15 * v34 + v13 * v32 + v14 * v33;
    v26 = (v15 - v34 * v16) * (v15 - v34 * v16)
        + (v14 - v33 * v16) * (v14 - v33 * v16)
        + (v13 - v32 * v16) * (v13 - v32 * v16);
    v17 = off_103EDFE0(v26);
    if ( v17 <= 30.0 )
    {
      v21 = 1.0;
      v22 = v35;
    }
    else
    {
      v18 = 1.0 - (v17 - 30.0) * 0.015625;
      if ( v18 <= 0.0 )
        return;
      v19 = 3;
      v20 = 1.0;
      while ( 1 )
      {
        if ( (v19 & 1) != 0 )
          v20 = v20 * v18;
        v19 >>= 1;
        if ( !v19 )
          break;
        v18 = v18 * v18;
      }
      v21 = 1.0;
      v22 = v20 * v35;
    }
    if ( v22 >= 0.0039215689 )
    {
      v23 = *(_DWORD *)(a1 + 52);
      v24 = *(_DWORD *)(a1 + 252);
      *(float *)&v29 = *(float *)&v29 * v22;
      v30 = v30 * v22;
      v31 = v22 * v31;
      v27 = v21;
      v25 = (float)a2;
      sub_100178A0(
        a1 + 352,
        128,
        a1 + 352,
        a5,
        v25,
        a3,
        v7,
        (float *)(a1 + 180),
        *(float *)(a1 + 204),
        *(float *)(a1 + 208),
        *(float *)(a1 + 216),
        *(float *)(a1 + 196),
        *(float *)(a1 + 240),
        v24,
        v23,
        (float *)&v29,
        *(float *)(a1 + 212),
        v27);
    }
  }
}
