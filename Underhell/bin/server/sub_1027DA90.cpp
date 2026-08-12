float *__thiscall sub_1027DA90(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106D155C;
  if ( (dword_106D155C & 1) == 0 )
  {
    v1 = dword_106D155C | 1;
    flt_106D1550 = 0.026179999;
    dword_106D155C |= 1u;
    flt_106D1554 = 0.026179999;
    flt_106D1558 = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106D1544 = 0.043620002;
    dword_106D155C = v1 | 2;
    flt_106D1548 = 0.043620002;
    flt_106D154C = 0.043620002;
  }
  if ( !sub_100D1940(this) )
    return &flt_106D1544;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106D1550;
  if ( !v4 )
    return &flt_106D1544;
  return result;
}
