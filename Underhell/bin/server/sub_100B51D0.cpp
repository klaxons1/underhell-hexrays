float *__thiscall sub_100B51D0(float *this)
{
  float *result; // eax

  if ( (dword_10695360 & 1) == 0 )
    dword_10695360 |= 1u;
  result = &flt_10695354;
  flt_10695354 = this[939] - this[940] * 0.0;
  flt_10695358 = this[940] * 0.0 - this[938];
  flt_1069535C = this[938] * 0.0 - 0.0 * this[939];
  return result;
}
