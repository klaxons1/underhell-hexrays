void __stdcall sub_100A0A00(float *a1, float a2)
{
  long double v2; // st6
  long double v3; // st7
  long double v6; // st7
  long double v7; // st6
  long double v8; // st5
  long double v9; // st7
  float v10; // [esp+4h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  v10 = a1[6];
  v11 = a1[7];
  v12 = a1[8];
  if ( a2 == flt_1042E064 )
  {
    v6 = flt_1042E060;
  }
  else
  {
    flt_1042E064 = a2;
    v2 = __FYL2X__(0.00009999999747378752, 0.6931471805599453094);
    v3 = (a2 * v2 + a2 * v2) * 1.442695040888963407;
    _ST6 = v3;
    __asm { frndint }
    v6 = __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
    flt_1042E060 = v6;
  }
  v7 = v6 * a1[6];
  v8 = a1[7] * v6;
  v9 = v6 * a1[8];
  a1[6] = v7;
  a1[7] = v8;
  a1[8] = v9;
  if ( a1[8] * a1[8] + a1[6] * a1[6] + a1[7] * a1[7] < 1024.0 )
  {
    off_103EDFEC();
    a1[6] = v10 * 32.0;
    a1[7] = v11 * 32.0;
    a1[8] = 32.0 * v12;
  }
}
