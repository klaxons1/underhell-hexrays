DName *__cdecl UnDecorator::getThrowTypes(DName *a1)
{
  DName *result; // eax
  unsigned int v2; // edx
  DName *v3; // eax
  DName *v4; // eax
  DName *v5; // ecx
  DName *ArgumentTypes; // [esp-4h] [ebp-1Ch]
  _BYTE v7[8]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v8[8]; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+10h] [ebp-8h] BYREF

  if ( *dword_10482860 )
  {
    if ( *dword_10482860 == 90 )
    {
      ++dword_10482860;
      result = a1;
      v2 = v9[1] & 0xFFFF0000;
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = v2;
      return result;
    }
    ArgumentTypes = UnDecorator::getArgumentTypes((DName *)v8);
    v3 = DName::DName((DName *)v7, " throw(");
    DName::operator+(v3, (DName *)v9, (int)ArgumentTypes);
    DName::operator+(v9, a1, 41);
  }
  else
  {
    v4 = DName::DName((DName *)v8, " throw(");
    v5 = DName::operator+(v4, (DName *)v7, 1);
    DName::operator+(v5, a1, 41);
  }
  return a1;
}
