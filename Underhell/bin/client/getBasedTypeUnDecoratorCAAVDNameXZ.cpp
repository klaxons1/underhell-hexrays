_DWORD *__cdecl UnDecorator::getBasedType(_DWORD *a1)
{
  char *v1; // eax
  int v2; // ecx
  _DWORD *result; // eax
  int ScopedName; // eax
  _BYTE v5[8]; // [esp+0h] [ebp-10h] BYREF
  int *v6[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = (char *)UnDecorator::UScore(0);
  DName::DName((DName *)v6, v1);
  if ( *dword_10482860 )
  {
    v2 = *dword_10482860++;
    switch ( v2 )
    {
      case '0':
        DName::operator+=((DName *)v6, "void");
        break;
      case '2':
        ScopedName = UnDecorator::getScopedName((int)v5);
        DName::operator+=((DName *)v6, ScopedName);
        break;
      case '5':
        result = a1;
        a1[1] &= 0xFFFF00FF;
        *a1 = 0;
        *((_BYTE *)a1 + 4) = 2;
        return result;
    }
  }
  else
  {
    DName::operator+=(v6, 1);
  }
  DName::operator+=((DName *)v6, ") ");
  result = a1;
  *a1 = v6[0];
  a1[1] = v6[1];
  return result;
}
