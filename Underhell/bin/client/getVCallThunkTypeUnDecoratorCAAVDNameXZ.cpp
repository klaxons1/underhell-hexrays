DName *__cdecl UnDecorator::getVCallThunkType(DName *a1)
{
  DName *result; // eax

  if ( *dword_10482860 )
  {
    if ( *dword_10482860 != 65 )
    {
      result = a1;
      *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
      *(_DWORD *)a1 = 0;
      *((_BYTE *)a1 + 4) = 2;
      return result;
    }
    ++dword_10482860;
    DName::DName(a1, "{flat}");
  }
  else
  {
    DName::DName((int **)a1, 1);
  }
  return a1;
}
