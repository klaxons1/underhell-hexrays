DName *__cdecl UnDecorator::getSignedDimension(DName *a1)
{
  int Dimension; // eax
  _BYTE v3[8]; // [esp+0h] [ebp-8h] BYREF

  if ( *dword_10482860 )
  {
    if ( *dword_10482860 == 63 )
    {
      ++dword_10482860;
      Dimension = UnDecorator::getDimension((int)v3, 0);
      sub_102A048E(a1, 45, Dimension);
    }
    else
    {
      UnDecorator::getDimension((int)a1, 0);
    }
  }
  else
  {
    DName::DName((int **)a1, 1);
  }
  return a1;
}
