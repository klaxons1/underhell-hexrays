void __thiscall sub_10061850(int *this, float a2, int a3, char a4)
{
  double v5; // st7
  double v6; // st6
  int v7; // edx
  int v8; // esi
  float *i; // ecx
  double v10; // rt0
  double v11; // st6
  double v12; // st7
  double v13; // rt1
  double v14; // st6
  int v15; // ecx
  double v16; // st6
  float *v17; // eax
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st6
  double v22; // st1
  double v23; // st2
  double v24; // st6
  int v25; // ecx
  float *v26; // eax
  float v27; // [esp+0h] [ebp-58h]
  float v28; // [esp+8h] [ebp-50h]
  float v29[14]; // [esp+20h] [ebp-38h] BYREF
  float v30; // [esp+60h] [ebp+8h]

  memset(v29, 0, sizeof(v29));
  v5 = 0.0;
  v6 = a2;
  if ( a2 > 0.0 )
  {
    v7 = this[27] - 1;
    v8 = 0;
    if ( v7 > 0 )
    {
      for ( i = (float *)(this[24] + 8); ; i += 14 )
      {
        v10 = v6;
        v11 = v5;
        v12 = v10;
        if ( v11 < *i && v12 - *i < v11 )
          break;
        v13 = v11;
        v14 = v12;
        v5 = v13;
        ++v8;
        v6 = v14 - *i;
        if ( v8 >= v7 )
          return;
      }
      v15 = this[24];
      v16 = v12 / *(float *)(v15 + 56 * v8 + 8);
      v17 = (float *)(v15 + 56 * v8);
      v18 = v17[25] * v16;
      v19 = v17[26] * v16;
      v20 = v17[27] * v16;
      v21 = 1.0 - v16;
      v22 = v17[11] * v21;
      v23 = v17[12] * v21;
      v24 = v21 * v17[13] + v20;
      v29[11] = v18 + v22;
      v29[12] = v19 + v23;
      v29[13] = v24;
      if ( !a4 )
      {
        v28 = -v12;
        v27 = *(float *)&a3 * -0.5;
        sub_10422A40(v27, *(float *)(v15 + 12), v28, (int)&a3, (int)&a4);
        v30 = v12;
        v12 = v30;
      }
      v25 = this[24];
      v29[3] = 1.0;
      v26 = (float *)(v25 + 56 * v8 + 8);
      v29[2] = *v26 - v12;
      v29[8] = 0.0;
      *v26 = v12;
      sub_100616E0(this + 24, v8 + 1, v29);
    }
  }
}
