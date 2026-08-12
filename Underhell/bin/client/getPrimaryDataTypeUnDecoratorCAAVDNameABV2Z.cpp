DName *__cdecl UnDecorator::getPrimaryDataType(DName *a1, int *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // esi
  int v6; // eax
  int v7; // esi
  char v8; // al
  DName *result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *DataIndirectType; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // [esp-4h] [ebp-24h]
  char v17[8]; // [esp+8h] [ebp-18h] BYREF
  int v18[2]; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+18h] [ebp-8h] BYREF
  int v20; // [esp+1Ch] [ebp-4h]

  v2 = *dword_10482860;
  v20 &= 0xFFFF0000;
  v19 = 0;
  if ( !v2 )
    goto LABEL_31;
  v3 = v2 - 36;
  if ( !v3 )
  {
    v8 = dword_10482860[1];
    if ( v8 != 36 )
    {
      if ( v8 )
        goto LABEL_12;
LABEL_31:
      operator+(a1, 1, (int)a2);
      return a1;
    }
    dword_10482860 += 2;
    v10 = *dword_10482860;
    v5 = a2;
    if ( v10 > 81 )
    {
      v14 = v10 - 82;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            ++dword_10482860;
            DName::DName(a1, "std::nullptr_t");
            return a1;
          }
        }
        else
        {
          ++dword_10482860;
        }
        goto LABEL_12;
      }
      DName::operator=((DName *)&v19, "volatile");
      if ( *a2 )
        DName::operator+=((DName *)&v19, 32);
    }
    else if ( v10 != 81 )
    {
      if ( !*dword_10482860 )
        goto LABEL_31;
      v11 = v10 - 65;
      if ( !v11 )
      {
        ++dword_10482860;
        UnDecorator::getFunctionIndirectType(a1, a2);
        return a1;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        ++dword_10482860;
        UnDecorator::getPtrRefDataType(a1, a2, 1);
        return a1;
      }
      if ( v12 == 1 )
      {
        ++dword_10482860;
        v20 &= 0xFFFF0000;
        v19 = 0;
        DataIndirectType = (int *)UnDecorator::getDataIndirectType((DName *)v17, a2, (char *)Locale, (int)&v19, 0);
        UnDecorator::getBasicDataType(a1, DataIndirectType);
        return a1;
      }
LABEL_12:
      result = a1;
      *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
      *((_BYTE *)a1 + 4) = 2;
      *(_DWORD *)a1 = 0;
      return result;
    }
    v16 = "&&";
    goto LABEL_9;
  }
  v4 = v3 - 29;
  v5 = a2;
  if ( !v4 )
  {
LABEL_8:
    v16 = "&";
LABEL_9:
    v6 = *v5;
    v7 = v5[1];
    ++dword_10482860;
    v18[0] = v6;
    v18[1] = v7 | 0x100;
    UnDecorator::getPtrRefType((int **)a1, &v19, v18, v16);
    return a1;
  }
  if ( v4 == 1 )
  {
    DName::operator=((DName *)&v19, "volatile");
    if ( *a2 )
      DName::operator+=((DName *)&v19, 32);
    goto LABEL_8;
  }
  UnDecorator::getBasicDataType(a1, a2);
  return a1;
}
