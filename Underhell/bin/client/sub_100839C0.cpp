float *__thiscall sub_100839C0(_BYTE *this)
{
  float *result; // eax

  if ( (dword_1042BFE0 & 1) == 0 )
  {
    dword_1042BFE0 |= 1u;
    flt_1042BFD4 = 0.0;
    flt_1042BFD8 = 0.0;
    flt_1042BFDC = -1.0;
  }
  result = &flt_1042BFD4;
  if ( this[208] )
    return (float *)(this + 4);
  return result;
}
