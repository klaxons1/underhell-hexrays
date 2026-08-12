DName *__cdecl UnDecorator::getReturnType(DName *a1, struct DName *a2)
{
  if ( *dword_10482860 == 64 )
  {
    ++dword_10482860;
    DName::DName(a1, a2);
  }
  else
  {
    UnDecorator::getDataType(a1, a2);
  }
  return a1;
}
