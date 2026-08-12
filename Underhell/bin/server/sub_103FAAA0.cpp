float *__thiscall sub_103FAAA0(float *this)
{
  float *result; // eax

  result = this;
  this[11] = 1.0;
  *(_DWORD *)this = &CGrabController::`vftable';
  this[12] = 0.0;
  this[14] = 0.0;
  this[15] = 0.0;
  this[9] = 1000.0;
  this[7] = 3600.0;
  this[10] = 2000.0;
  this[8] = 3600.0;
  this[2068] = NAN;
  this[2069] = flt_106F1CB4;
  this[2070] = flt_106F1CB8;
  this[2071] = flt_106F1CBC;
  *((_BYTE *)this + 8288) = 0;
  this[2073] = 0.0;
  return result;
}
