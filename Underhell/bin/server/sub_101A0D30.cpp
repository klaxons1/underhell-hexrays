void sub_101A0D30()
{
  _DWORD *v0; // eax
  int v1; // esi
  float *v2; // eax
  double v3; // st4
  double v4; // st3
  double v5; // st2
  double v6; // st4
  double v7; // st3
  double v8; // st2
  double v9; // st2
  double v10; // st4
  float v11; // [esp+1Ch] [ebp-A8h]
  float v12; // [esp+1Ch] [ebp-A8h]
  float v13; // [esp+1Ch] [ebp-A8h]
  _BYTE v14[44]; // [esp+24h] [ebp-A0h] BYREF
  float v15; // [esp+50h] [ebp-74h]
  int v16[2]; // [esp+78h] [ebp-4Ch] BYREF
  float v17; // [esp+80h] [ebp-44h]
  int v18; // [esp+84h] [ebp-40h] BYREF
  float v19; // [esp+88h] [ebp-3Ch]
  float v20; // [esp+8Ch] [ebp-38h]
  int v21; // [esp+90h] [ebp-34h] BYREF
  float v22; // [esp+94h] [ebp-30h]
  float v23; // [esp+98h] [ebp-2Ch]
  float v24; // [esp+9Ch] [ebp-28h] BYREF
  float v25; // [esp+A0h] [ebp-24h]
  float v26; // [esp+A4h] [ebp-20h]
  float v27; // [esp+A8h] [ebp-1Ch]
  int v28; // [esp+ACh] [ebp-18h] BYREF
  float v29; // [esp+B0h] [ebp-14h]
  float v30; // [esp+B4h] [ebp-10h]
  int v31; // [esp+B8h] [ebp-Ch] BYREF
  float v32; // [esp+BCh] [ebp-8h]
  float v33; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF

  v0 = (_DWORD *)sub_1025FB50(dword_1060F300);
  v1 = (int)v0;
  if ( v0 )
  {
    sub_100F5A30(v0, 0, (int)&v24, 0);
    sub_10273260(&v31);
    v16[0] = v31;
    *(float *)&v16[1] = v32;
    v17 = v33;
    v17 = sub_101A0C80((float *)v16);
    v2 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v1 + 504))(v1, &v18);
    sub_1002A5F0((int)&savedregs, v1, v2, (float *)&v31, 147467, v1, 0, (int)v14);
    if ( 1.0 == v15 )
    {
      v3 = v24 * 400.0 + *(float *)&v31;
      *(float *)&v28 = v3;
      v4 = v25 * 400.0 + v32;
      v29 = v4;
      v5 = 400.0 * v26 + v33;
      v30 = v5;
      v11 = (v33 - v5) * (v33 - v5) + (*(float *)&v31 - v3) * (*(float *)&v31 - v3) + (v32 - v4) * (v32 - v4);
      v27 = off_10689708(v11);
      sub_1002A5F0((int)&savedregs, v1, (float *)&v31, (float *)&v28, 147467, v1, 0, (int)v14);
      *(float *)&v21 = v24 * v27 * v15 + *(float *)&v31;
      v22 = v25 * v27 * v15 + v32;
      v23 = v27 * v26 * v15 + v33;
      sub_1011D080((float *)&v31, (float *)&v21, 24.0, 5, 255, 0, 0, 0, 0.0);
      v6 = *(float *)&v31 - v24 * 400.0;
      *(float *)&v28 = v6;
      v7 = v32 - v25 * 400.0;
      v29 = v7;
      v8 = v33 - 400.0 * v26;
      v30 = v8;
      v12 = (v33 - v8) * (v33 - v8) + (*(float *)&v31 - v6) * (*(float *)&v31 - v6) + (v32 - v7) * (v32 - v7);
      v27 = off_10689708(v12);
      sub_1002A5F0((int)&savedregs, v1, (float *)&v31, (float *)&v28, 147467, v1, 0, (int)v14);
      *(float *)&v21 = *(float *)&v31 - v24 * v27 * v15;
      v22 = v32 - v25 * v27 * v15;
      v23 = v33 - v27 * v26 * v15;
      sub_1011D080((float *)&v31, (float *)&v21, 24.0, 5, 255, 0, 0, 0, 0.0);
      v28 = v31;
      v29 = v32;
      v9 = v33 + 400.0;
      v30 = v9;
      v13 = (v33 - v9) * (v33 - v9)
          + (*(float *)&v31 - *(float *)&v31) * (*(float *)&v31 - *(float *)&v31)
          + (v32 - v32) * (v32 - v32);
      v27 = off_10689708(v13);
      sub_1002A5F0((int)&savedregs, v1, (float *)&v31, (float *)&v28, 147467, v1, 0, (int)v14);
      v10 = v27 * 0.0 * v15;
      *(float *)&v21 = v10 + *(float *)&v31;
      v22 = v10 + v32;
      v23 = v27 * v15 + v33;
      sub_1011D080((float *)v16, (float *)&v21, 24.0, 5, 255, 0, 0, 0, 0.0);
      *(float *)&v28 = 2.0;
      v29 = 2.0;
      v30 = 2.0;
      *(float *)&v18 = -2.0;
      v19 = -2.0;
      v20 = -2.0;
      sub_1011C000((float *)&v31, (float *)&v18, (float *)&v28, 255, 255, 255, 1, 0.0);
    }
    else
    {
      *(float *)&v18 = 2.0;
      v19 = 2.0;
      v20 = 2.0;
      *(float *)&v28 = -2.0;
      v29 = -2.0;
      v30 = -2.0;
      sub_1011C000((float *)&v31, (float *)&v28, (float *)&v18, 255, 100, 100, 1, 0.0);
    }
  }
}
