void __thiscall sub_1014BD90(int this, int a2, int a3)
{
  double v4; // st7
  double v5; // st4
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st1
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // st1
  float *v17; // esi
  float *v18; // eax
  int v19[3]; // [esp+18h] [ebp-3Ch] BYREF
  float v20[3]; // [esp+24h] [ebp-30h] BYREF
  float v21[3]; // [esp+30h] [ebp-24h] BYREF
  int v22[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v23[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( a2 >= 0
    && a2 < *(_DWORD *)(this + 976)
    && a3 >= 0
    && a3 < *(_DWORD *)(this + 980)
    && !sub_1014B100((_DWORD *)this, a2, a3) )
  {
    sub_1014C210(a2, a3);
    *(float *)v22 = *(float *)(this + 992) * -1.0;
    *(float *)&v22[1] = *(float *)(this + 996) * -1.0;
    *(float *)&v22[2] = -1.0 * *(float *)(this + 1000);
    sub_10422540(v22, v19);
    sub_104222B0(v19, 0, v20, v21);
    v4 = (double)a3;
    v5 = *(float *)(this + 988);
    v6 = v21[0] * v4 * v5;
    v7 = v21[1] * v4 * v5;
    v8 = v4 * v21[2] * v5;
    v9 = (double)a2;
    v10 = v20[0] * v9;
    v11 = v20[1] * v9;
    v12 = *(float *)(this + 984);
    v13 = v9 * v20[2] * v12;
    v14 = v10 * v12 + *(float *)(this + 1004);
    v15 = v11 * v12 + *(float *)(this + 1008);
    v16 = *(float *)(this + 1012);
    *(float *)v23 = v6 + v14;
    *(float *)&v23[1] = v7 + v15;
    *(float *)&v23[2] = v8 + v13 + v16;
    sub_1014B430(this, (float *)v23, (int)v19, &flt_106F1CA8, (int)&flt_106F1CA8, 12.0, 12.0, 4);
    sub_10149810((_DWORD *)this);
    v17 = sub_1014BCD0((float *)v23, (float *)v19);
    if ( v17 )
    {
      v18 = sub_1014AE30((float *)v22, -120.0, 120.0);
      sub_100D7260(v17, v18);
    }
  }
}
