char __thiscall sub_1014C280(int this, int a2, int a3, float *a4, int a5)
{
  int *v6; // ecx
  double v7; // st7
  double v8; // st4
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st4
  double v13; // st3
  double v14; // st2
  double v15; // st1
  double v16; // st4
  double v17; // st3
  double v18; // st2
  double v19; // st1
  int v21[3]; // [esp+18h] [ebp-30h] BYREF
  float v22[3]; // [esp+24h] [ebp-24h] BYREF
  float v23[3]; // [esp+30h] [ebp-18h] BYREF
  int v24; // [esp+3Ch] [ebp-Ch] BYREF
  float v25; // [esp+40h] [ebp-8h]
  float v26; // [esp+44h] [ebp-4h]

  if ( a2 < 0 || a2 >= *(_DWORD *)(this + 976) )
    return 0;
  if ( a3 < 0 || a3 >= *(_DWORD *)(this + 980) || sub_1014B100((_DWORD *)this, a2, a3) )
    return 0;
  sub_1014C210(v6, a2, a3);
  *(float *)&v24 = *(float *)(this + 992) * -1.0;
  v25 = *(float *)(this + 996) * -1.0;
  v26 = -1.0 * *(float *)(this + 1000);
  sub_10422540(&v24, v21);
  sub_104222B0(v21, 0, v22, v23);
  v7 = (double)a3;
  v8 = *(float *)(this + 988);
  v9 = v23[0] * v7 * v8;
  v10 = v23[1] * v7 * v8;
  v11 = v7 * v23[2] * v8;
  v12 = (double)a2;
  v13 = v22[0] * v12;
  v14 = v22[1] * v12;
  v15 = *(float *)(this + 984);
  v16 = v12 * v22[2] * v15;
  v17 = v13 * v15 + *(float *)(this + 1004);
  v18 = v14 * v15 + *(float *)(this + 1008);
  v19 = *(float *)(this + 1012);
  *(float *)&v24 = v9 + v17;
  v25 = v10 + v18;
  v26 = v11 + v16 + v19;
  sub_1014B430(this, (float *)&v24, (int)v21, a4, a5, *(float *)(this + 984), *(float *)(this + 988), 4);
  sub_10149810((_DWORD *)this);
  return 1;
}
