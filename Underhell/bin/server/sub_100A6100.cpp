float *__thiscall sub_100A6100(float *this)
{
  float *result; // eax

  if ( (dword_10694840 & 1) == 0 )
    dword_10694840 |= 1u;
  result = &flt_10694834;
  flt_10694834 = this[13] - this[5];
  flt_10694838 = this[14] - this[6];
  flt_1069483C = this[15] - this[7];
  return result;
}
