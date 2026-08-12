char __thiscall sub_100E8E40(float *this, float *a2, float *a3, float *a4, float a5, float *a6)
{
  double v6; // st6
  bool v8; // cc
  double v9; // st7
  double v10; // rt1
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // rt1
  double v25; // st7
  float v26; // [esp+10h] [ebp-24h]
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+24h] [ebp-10h] BYREF
  float v29; // [esp+28h] [ebp-Ch]
  float v30; // [esp+2Ch] [ebp-8h]
  float *v31; // [esp+30h] [ebp-4h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  v6 = *a3;
  v31 = this;
  if ( v6 == flt_10459240 && a3[1] == *(float *)&qword_10459244 && a3[2] == *((float *)&qword_10459244 + 1) )
    return 0;
  a3[2] = a3[2] - this[26] * a5;
  v8 = *((_DWORD *)this + 25) <= 0;
  v9 = a5 * a3[2];
  v10 = a3[1] * a5;
  v28 = *a3 * a5 + *a2;
  v29 = v10 + a2[1];
  v30 = v9 + a2[2];
  if ( v8
    || ((*(void (__thiscall **)(float *, float *, float *, float *, int))(*(_DWORD *)this + 4))(this, a2, &v28, a6, 1),
        1.0 == a6[11])
    || (sub_1000FCE0((int)&savedregs, (int)a3, a2, &v28, 16395, 0, 0, (int)a6), 1.0 == a6[11]) )
  {
    *a2 = v28;
    a2[1] = v29;
    a2[2] = v30;
    return 0;
  }
  if ( a6[8] >= 0.5 && fabs(a3[2]) <= 48.0 )
  {
    v11 = (a6[11] - 0.0099999998) * a5;
    v12 = *a3 * v11;
    v13 = a3[1] * v11;
    v14 = v11 * a3[2];
    *a2 = v12 + *a2;
    a2[1] = v13 + a2[1];
    a2[2] = v14 + a2[2];
    *a3 = flt_10459240;
    *(_QWORD *)(a3 + 1) = qword_10459244;
    if ( a4 )
    {
      *a4 = 0.0;
      return 0;
    }
    return 0;
  }
  v15 = v31;
  v16 = (a6[11] - 0.0099999998) * a5;
  v17 = *a3 * v16;
  v18 = a3[1] * v16;
  v19 = v16 * a3[2];
  *a2 = v17 + *a2;
  a2[1] = v18 + a2[1];
  a2[2] = v19 + a2[2];
  v20 = (a3[1] * a6[7] + *a3 * a6[6] + a3[2] * a6[8]) * -2.0;
  v21 = a6[6] * v20;
  v22 = v20;
  v23 = v20 * a6[7];
  v24 = v22 * a6[8];
  *a3 = v21 + *a3;
  a3[1] = v23 + a3[1];
  a3[2] = v24 + a3[2];
  v27 = v15[27] + 0.1;
  v26 = v15[27] - 0.1;
  v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          LODWORD(v26),
          LODWORD(v27));
  *a3 = *a3 * v25;
  a3[1] = a3[1] * v25;
  a3[2] = v25 * a3[2];
  if ( a4 )
    *a4 = *a4 * -0.25;
  return 1;
}
