float *__thiscall sub_1027ECD0(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106D181C;
  if ( (dword_106D181C & 1) == 0 )
  {
    v1 = dword_106D181C | 1;
    flt_106D1810 = 0.026179999;
    dword_106D181C |= 1u;
    flt_106D1814 = 0.026179999;
    flt_106D1818 = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106D1804 = 0.061050002;
    dword_106D181C = v1 | 2;
    flt_106D1808 = 0.061050002;
    flt_106D180C = 0.061050002;
  }
  if ( !sub_100D1940(this) )
    return &flt_106D1804;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106D1810;
  if ( !v4 )
    return &flt_106D1804;
  return result;
}
