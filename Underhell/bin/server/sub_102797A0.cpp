float *__thiscall sub_102797A0(int this)
{
  int v2; // eax
  float *result; // eax
  double v4; // st7

  if ( (dword_106D09B8 & 1) == 0 )
  {
    dword_106D09B8 |= 1u;
    flt_106D09AC = 0.043620002;
    flt_106D09B0 = 0.043620002;
    flt_106D09B4 = 0.043620002;
  }
  if ( sub_100D1940((_DWORD *)this) )
  {
    v2 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 284))(v2) )
      return &flt_106D09AC;
  }
  if ( (dword_106D09B8 & 2) == 0 )
    dword_106D09B8 |= 2u;
  if ( *(_DWORD *)(dword_106D0A9C + 48) )
    v4 = sub_10134630(*(float *)(this + 1400), 0.0, 1.5, 0.0, 1.0) * 0.043609999 + 0.0087299999;
  else
    v4 = 0.034899998;
  flt_106D09A0 = v4;
  result = &flt_106D09A0;
  flt_106D09A4 = v4;
  flt_106D09A8 = v4;
  return result;
}
