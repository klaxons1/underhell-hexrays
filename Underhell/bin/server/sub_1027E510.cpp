float *__thiscall sub_1027E510(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106D16BC;
  if ( (dword_106D16BC & 1) == 0 )
  {
    v1 = dword_106D16BC | 1;
    flt_106D16B0 = 0.026179999;
    dword_106D16BC |= 1u;
    flt_106D16B4 = 0.026179999;
    flt_106D16B8 = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106D16A4 = 0.087159999;
    dword_106D16BC = v1 | 2;
    flt_106D16A8 = 0.087159999;
    flt_106D16AC = 0.087159999;
  }
  if ( !sub_100D1940(this) )
    return &flt_106D16A4;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106D16B0;
  if ( !v4 )
    return &flt_106D16A4;
  return result;
}
