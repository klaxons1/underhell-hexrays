DName *__cdecl UnDecorator::getDataType(DName *a1, struct DName *a2)
{
  char v2; // al
  DName *v3; // eax
  int *DataIndirectType; // eax
  int **v5; // eax
  _BYTE v7[8]; // [esp+0h] [ebp-18h] BYREF
  int *v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-Ch]
  int v10[2]; // [esp+10h] [ebp-8h] BYREF

  DName::DName((DName *)v10, a2);
  v2 = *dword_10482860;
  if ( *dword_10482860 )
  {
    if ( v2 == 63 )
    {
      ++dword_10482860;
      v9 &= 0xFFFF0000;
      v8 = 0;
      DataIndirectType = (int *)UnDecorator::getDataIndirectType((DName *)v7, v10, (char *)Locale, (int)&v8, 0);
      v10[0] = *DataIndirectType;
      v10[1] = DataIndirectType[1];
      UnDecorator::getPrimaryDataType(a1, v10);
    }
    else if ( v2 == 88 )
    {
      ++dword_10482860;
      if ( v10[0] )
      {
        v3 = DName::DName((DName *)&v8, "void ");
        DName::operator+(v3, a1, (int)v10);
      }
      else
      {
        DName::DName(a1, "void");
      }
    }
    else
    {
      UnDecorator::getPrimaryDataType(a1, v10);
    }
  }
  else
  {
    v5 = DName::DName(&v8, 1);
    DName::operator+(v5, a1, (int)v10);
  }
  return a1;
}
