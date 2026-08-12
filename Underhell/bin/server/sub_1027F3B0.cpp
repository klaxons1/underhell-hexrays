float *__thiscall sub_1027F3B0(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106D197C;
  if ( (dword_106D197C & 1) == 0 )
  {
    v1 = dword_106D197C | 1;
    flt_106D1970 = 0.026179999;
    dword_106D197C |= 1u;
    flt_106D1974 = 0.026179999;
    flt_106D1978 = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106D1964 = 0.087159999;
    dword_106D197C = v1 | 2;
    flt_106D1968 = 0.087159999;
    flt_106D196C = 0.087159999;
  }
  if ( !sub_100D1940(this) )
    return &flt_106D1964;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106D1970;
  if ( !v4 )
    return &flt_106D1964;
  return result;
}
