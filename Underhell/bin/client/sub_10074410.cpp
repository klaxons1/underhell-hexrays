_DWORD *__thiscall sub_10074410(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this;
  v2 = dword_104131E0;
  *result = &C_BaseEntityClassList::`vftable';
  result[1] = v2;
  dword_104131E0 = (int)result;
  return result;
}
