DName *__cdecl UnDecorator::getVdispMapType(DName *a1, _DWORD *a2)
{
  int Scope; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  *(_DWORD *)a1 = *a2;
  *((_DWORD *)a1 + 1) = a2[1];
  DName::operator+=(a1, "{for ");
  Scope = UnDecorator::getScope(v4);
  DName::operator+=(a1, Scope);
  DName::operator+=(a1, 125);
  if ( *dword_10482860 == 64 )
    ++dword_10482860;
  return a1;
}
