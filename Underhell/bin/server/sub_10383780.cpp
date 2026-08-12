int __thiscall sub_10383780(int this, int a2)
{
  int result; // eax

  *(float *)(this + 3752) = flt_106F1CA8;
  *(float *)(this + 3756) = flt_106F1CAC;
  *(float *)(this + 3760) = flt_106F1CB0;
  result = *(_DWORD *)(this + 252) >> 11;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  *(float *)(this + 3896) = *(float *)(this + 580);
  *(float *)(this + 3900) = *(float *)(this + 584);
  *(float *)(this + 3904) = *(float *)(this + 588);
  *(float *)(this + 3740) = flt_106F1CA8;
  *(float *)(this + 3744) = flt_106F1CAC;
  *(float *)(this + 3748) = flt_106F1CB0;
  *(float *)(this + 3624) = flt_106F1CA8;
  *(float *)(this + 3628) = flt_106F1CAC;
  *(float *)(this + 3632) = flt_106F1CB0;
  return result;
}
