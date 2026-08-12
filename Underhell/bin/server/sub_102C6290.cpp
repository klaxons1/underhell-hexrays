_DWORD *__thiscall sub_102C6290(_DWORD *this, int a2, char a3, const char *ArgList)
{
  _DWORD *result; // eax

  sub_1015F7E0(this, a2, a3, ArgList);
  result = (_DWORD *)sub_102C6030(this, (int)ArgList, a3);
  if ( result )
    ++*result;
  return result;
}
