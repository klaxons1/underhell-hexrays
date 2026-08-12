void __thiscall sub_10158300(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  float *v5; // esi
  double v6; // st5
  double v7; // st4
  double v8; // st6
  double v9; // st5
  float *v10; // eax
  float *v11; // edi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  bool v15; // zf
  float v16; // [esp+4h] [ebp-18h]
  float v17; // [esp+8h] [ebp-14h]
  int v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 2040) )
  {
    v3 = a2;
    v4 = a2 + *(float *)(this + 2036);
    *(float *)(this + 2036) = v4;
    if ( v4 <= 3.0 )
    {
      v5 = (float *)(this + 252);
      v18 = 50;
      *(float *)(this + 2048) = sin(v4 * 3.1415901 * 0.33333334);
      while ( 1 )
      {
        v6 = v3 * v5[1] + *(v5 - 2);
        v7 = v3 * *v5 + *(v5 - 3);
        *(v5 - 4) = *(v5 - 1) * v3 + *(v5 - 4);
        *(v5 - 3) = v7;
        *(v5 - 2) = v6;
        v8 = 0.89999998 * v5[1];
        v9 = *v5 * 0.89999998;
        *(v5 - 1) = *(v5 - 1) * 0.89999998;
        *v5 = v9;
        v5[1] = v8;
        while ( v3 >= v5[4] )
        {
          v19 = v3 - v5[4];
          v5[4] = v5[3];
          v10 = (float *)sub_100F06D0(this + 4, (int)v5, 48, *(_DWORD *)(this + 2044));
          v11 = v10;
          if ( v10 )
          {
            v10[3] = *(v5 - 4);
            v10[4] = *(v5 - 3);
            v10[5] = *(v5 - 2);
            v16 = (double)sub_10115FB0() * 0.000030518509 * 40.0 - 20.0;
            v17 = (double)sub_10115FB0() * 0.000030518509 * 40.0 - 20.0;
            v12 = (double)sub_10115FB0() * 0.000030518509 * 40.0 - 20.0 + 0.2 * v5[1];
            v13 = *v5 * 0.2 + v17;
            v11[6] = *(v5 - 1) * 0.2 + v16;
            v11[7] = v13;
            v11[8] = v12;
          }
          v3 = v19;
        }
        v14 = v5[4] - v3;
        v5 += 9;
        v15 = v18-- == 1;
        *(v5 - 5) = v14;
        if ( v15 )
          break;
        v3 = a2;
      }
    }
  }
}
