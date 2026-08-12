_DWORD *__thiscall sub_1012BBD0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this;
  v2 = dword_1069E3B4;
  *result = &CBaseEntityClassList::`vftable';
  result[1] = v2;
  dword_1069E3B4 = (int)result;
  return result;
}
