void __thiscall sub_1009EDB0(float *this, int a2, float a3)
{
  double v3; // st6
  long double v4; // st6
  long double v7; // st5
  long double v8; // st7

  if ( (*(_BYTE *)(a2 + 55) & 2) == 0 )
  {
    v3 = a3;
    if ( a3 == flt_1042E05C )
    {
      v8 = flt_1042E058;
    }
    else
    {
      v4 = flt_1042E05C * (__FYL2X__(0.1000000014901161, 0.6931471805599453094) * 2.5) * 1.442695040888963407;
      _ST5 = v4;
      __asm { frndint }
      v7 = __FSCALE__(__F2XM1__(v4 - _ST5) + 1.0, _ST5);
      flt_1042E058 = v7;
      v3 = a3;
      v8 = v7;
      flt_1042E05C = a3;
    }
    *(float *)(a2 + 24) = v8 * *(float *)(a2 + 24);
    *(float *)(a2 + 28) = *(float *)(a2 + 28) * v8;
    *(float *)(a2 + 32) = v8 * *(float *)(a2 + 32);
    *(float *)(a2 + 32) = *(float *)(a2 + 32) - v3 * this[65];
  }
}
