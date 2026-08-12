float *__thiscall sub_10409770(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106F0734;
  if ( (dword_106F0734 & 1) == 0 )
  {
    v1 = dword_106F0734 | 1;
    flt_106F0728 = 0.026179999;
    dword_106F0734 |= 1u;
    flt_106F072C = 0.026179999;
    flt_106F0730 = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106F071C = 0.087159999;
    dword_106F0734 = v1 | 2;
    flt_106F0720 = 0.087159999;
    flt_106F0724 = 0.087159999;
  }
  if ( !sub_100D1940(this) )
    return &flt_106F071C;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106F0728;
  if ( !v4 )
    return &flt_106F071C;
  return result;
}
