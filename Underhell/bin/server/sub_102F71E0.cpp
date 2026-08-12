float *__thiscall sub_102F71E0(float *this)
{
  float *result; // eax

  this[1] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = &CAI_LeadBehavior::`vftable';
  this[16] = 0.0;
  this[17] = NAN;
  this[36] = 0.0;
  this[37] = 0.0;
  this[38] = 0.0;
  this[39] = -1.0;
  *((_BYTE *)this + 164) = 0;
  this[40] = -1.0;
  this[42] = 3.0;
  this[43] = 4.0;
  *((_BYTE *)this + 180) = 0;
  this[44] = -1.0;
  this[46] = 2.0;
  this[47] = 3.0;
  sub_1005BB30(this + 48);
  memset(this + 4, 0, 0x30u);
  this[18] = flt_106F1CA8;
  result = this;
  this[19] = flt_106F1CAC;
  this[20] = flt_106F1CB0;
  this[22] = flt_106F1CA8;
  this[23] = flt_106F1CAC;
  this[24] = flt_106F1CB0;
  this[16] = 0.0;
  this[29] = 0.0;
  return result;
}
