float *__thiscall sub_1029EAC0(int this, float *a2, float *a3)
{
  float *result; // eax

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 704) == flt_106F1CB4
    && *(float *)(this + 708) == flt_106F1CB8
    && *(float *)(this + 712) == flt_106F1CBC )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = a2;
    *a3 = *a2 - *(float *)(this + 580);
    a3[1] = a2[1] - *(float *)(this + 584);
    a3[2] = a2[2] - *(float *)(this + 588);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    return (float *)sub_10421BA0(a2, this + 500, a3);
  }
  return result;
}
