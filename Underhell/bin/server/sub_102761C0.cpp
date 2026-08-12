float *__thiscall sub_102761C0(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  bool v4; // zf
  float *result; // eax

  v1 = dword_106CFE60;
  if ( (dword_106CFE60 & 1) == 0 )
  {
    v1 = dword_106CFE60 | 1;
    flt_106CFE54 = 0.026179999;
    dword_106CFE60 |= 1u;
    flt_106CFE58 = 0.026179999;
    flt_106CFE5C = 0.026179999;
  }
  if ( (v1 & 2) == 0 )
  {
    flt_106CFE48 = 0.087159999;
    dword_106CFE60 = v1 | 2;
    flt_106CFE4C = 0.087159999;
    flt_106CFE50 = 0.087159999;
  }
  if ( !sub_100D1940(this) )
    return &flt_106CFE48;
  v3 = sub_100D1940(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 3;
  result = &flt_106CFE54;
  if ( !v4 )
    return &flt_106CFE48;
  return result;
}
