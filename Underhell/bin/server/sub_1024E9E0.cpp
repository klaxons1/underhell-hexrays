void __thiscall sub_1024E9E0(int this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st5
  double v5; // st7
  double v6; // st6

  if ( 0.0 == *(float *)(this + 896) )
  {
    v2 = (float *)(this + 944);
    *(float *)(this + 956) = flt_106F1CB4;
    *(float *)(this + 960) = flt_106F1CB8;
    *(float *)(this + 964) = flt_106F1CBC;
    *(float *)(this + 944) = flt_106F1CB4;
    *(float *)(this + 948) = flt_106F1CB8;
    v5 = flt_106F1CBC;
  }
  else
  {
    sub_10246A60(this);
    *(float *)(this + 956) = *(float *)(this + 728);
    v2 = (float *)(this + 944);
    *(float *)(this + 960) = *(float *)(this + 732);
    *(float *)(this + 964) = *(float *)(this + 736);
    v3 = *(float *)(this + 896);
    v4 = *(float *)(this + 844) * v3;
    v5 = v3 * *(float *)(this + 848) + *(float *)(this + 736);
    v6 = v4 + *(float *)(this + 732);
    *(float *)(this + 944) = *(float *)(this + 896) * *(float *)(this + 840) + *(float *)(this + 728);
    *(float *)(this + 948) = v6;
  }
  v2[2] = v5;
  if ( *(_DWORD *)(this + 260) )
    sub_100E11A0(this, v2);
}
