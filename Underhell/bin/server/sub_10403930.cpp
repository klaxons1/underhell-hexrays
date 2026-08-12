float *__thiscall sub_10403930(int this)
{
  int v2; // eax
  float *result; // eax
  double v4; // st7

  if ( (dword_106F0364 & 1) == 0 )
  {
    dword_106F0364 |= 1u;
    flt_106F0358 = 0.043620002;
    flt_106F035C = 0.043620002;
    flt_106F0360 = 0.043620002;
  }
  if ( sub_100D1940((_DWORD *)this) )
  {
    v2 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 284))(v2) )
      return &flt_106F0358;
  }
  if ( (dword_106F0364 & 2) == 0 )
    dword_106F0364 |= 2u;
  if ( *(_DWORD *)(dword_106F0444 + 48) )
    v4 = sub_10134630(*(float *)(this + 1400), 0.0, 1.5, 0.0, 1.0) * 0.043609999 + 0.0087299999;
  else
    v4 = 0.034899998;
  flt_106F034C = v4;
  result = &flt_106F034C;
  flt_106F0350 = v4;
  flt_106F0354 = v4;
  return result;
}
