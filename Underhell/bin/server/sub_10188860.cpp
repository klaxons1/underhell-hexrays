void __thiscall sub_10188860(int this)
{
  float *v2; // ecx
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  long double v10; // st6
  long double v11; // st5
  long double v12; // rt1
  long double v13; // st6
  long double v14; // st7
  long double v15; // st6
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+0h] [ebp-14h]
  float v18; // [esp+8h] [ebp-Ch]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+Ch] [ebp-8h]
  float v21; // [esp+10h] [ebp-4h]

  v2 = *(float **)(this + 848);
  if ( v2 )
  {
    if ( *(float *)(this + 856) > 0.0 )
    {
      v3 = *(float *)(this + 800) - v2[200];
      v4 = v3 * v3;
      v5 = *(float *)(this + 804) - v2[201];
      v6 = *(float *)(this + 808) - v2[202];
      v16 = v6 * v6 + v5 * v5 + v4;
      v7 = off_10689708(v16) / *(float *)(this + 856);
      *(float *)(this + 844) = v7;
      if ( 0.0 == v7 )
      {
        v8 = *(float **)(this + 848);
        v19 = *(float *)(this + 816) - v8[204];
        v21 = *(float *)(this + 820) - v8[205];
        v17 = *(float *)(this + 812) - v8[203];
        v18 = sub_101887A0(v17);
        v20 = sub_101887A0(v19);
        v9 = sub_101887A0(v21);
        v10 = fabs(v18);
        if ( v10 <= 0.0 )
          v10 = 0.0;
        v11 = fabs(v20);
        if ( v11 > v10 )
          v10 = v11;
        v12 = v10;
        v13 = v9;
        v14 = v12;
        v15 = fabs(v13);
        if ( v15 <= v12 )
          *(float *)(this + 844) = v14 / *(float *)(this + 856);
        else
          *(float *)(this + 844) = v15 / *(float *)(this + 856);
      }
    }
  }
}
