DName *__cdecl UnDecorator::getSymbolName(DName *a1)
{
  if ( *dword_10482860 == 63 )
  {
    if ( dword_10482860[1] == 36 )
    {
      UnDecorator::getTemplateName(a1, 1);
    }
    else
    {
      ++dword_10482860;
      UnDecorator::getOperatorName(a1, 0, 0);
    }
  }
  else
  {
    UnDecorator::getZName(a1, 1, 0);
  }
  return a1;
}
