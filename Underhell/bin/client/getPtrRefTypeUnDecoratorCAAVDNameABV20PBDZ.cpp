int **__cdecl UnDecorator::getPtrRefType(int **a1, _DWORD *a2, int *a3, char *a4)
{
  char v4; // al
  int **result; // eax
  int *v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = *dword_10482860;
  if ( *dword_10482860 )
  {
    if ( v4 >= 54 && v4 <= 57 || v4 == 95 )
    {
      DName::DName((DName *)v6, a4);
      if ( *a2 && (!*a3 || (a3[1] & 0x100) == 0) )
        DName::operator+=((DName *)v6, (int)a2);
      if ( *a3 )
        DName::operator+=((DName *)v6, (int)a3);
      UnDecorator::getFunctionIndirectType((DName *)a1, (int *)v6);
    }
    else
    {
      UnDecorator::getDataIndirectType((DName *)v6, a3, a4, (int)a2, 0);
      UnDecorator::getPtrRefDataType((DName *)a1, v6, *a4 == 42);
    }
    return a1;
  }
  else
  {
    DName::DName(v6, 1);
    DName::operator+=((DName *)v6, a4);
    if ( *a2 )
      DName::operator+=((DName *)v6, (int)a2);
    if ( *a3 )
    {
      if ( *a2 )
        DName::operator+=((DName *)v6, 32);
      DName::operator+=((DName *)v6, (int)a3);
    }
    result = a1;
    *a1 = v6[0];
    a1[1] = v6[1];
  }
  return result;
}
