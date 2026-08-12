float *__thiscall sub_10042BF0(_DWORD *this)
{
  float *v2; // eax
  double v3; // st7
  float *result; // eax

  if ( (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 112))(dword_10439968) != this - 1 )
    return (float *)sub_10025570((int)this);
  if ( (dword_10407758 & 1) == 0 )
    dword_10407758 |= 1u;
  v2 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
  flt_1040774C = *v2;
  flt_10407750 = v2[1];
  v3 = v2[2];
  result = &flt_1040774C;
  flt_10407754 = v3;
  return result;
}
