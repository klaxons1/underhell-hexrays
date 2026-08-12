DName *__cdecl UnDecorator::getBasicDataType(DName *a1, int *a2)
{
  unsigned __int8 v2; // al
  int v3; // edi
  int v4; // ebx
  unsigned __int8 v5; // al
  int BasicDataType; // eax
  DName *v7; // eax
  int *ECSUDataType; // eax
  int v9; // edx
  DName *result; // eax
  int v11; // ecx
  int v12; // ecx
  DName *v13; // eax
  _BYTE *v14; // eax
  _BYTE v15[8]; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+14h] [ebp-1Ch] BYREF
  int v17; // [esp+18h] [ebp-18h]
  int v18; // [esp+1Ch] [ebp-14h] BYREF
  int v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+24h] [ebp-Ch] BYREF
  int v21; // [esp+28h] [ebp-8h]
  unsigned __int8 v22; // [esp+2Fh] [ebp-1h]

  v2 = *dword_10482860;
  if ( !*dword_10482860 )
  {
    operator+(a1, 1, (int)a2);
    return a1;
  }
  ++dword_10482860;
  v20 = 0;
  v3 = v2;
  v21 &= 0xFFFF0000;
  v4 = -1;
  v22 = 0;
  if ( v2 <= 0x4Eu )
  {
    if ( v2 != 78 )
    {
      switch ( v2 )
      {
        case 'C':
        case 'D':
        case 'E':
          DName::operator=((DName *)&v20, "char");
          goto LABEL_56;
        case 'F':
        case 'G':
          DName::operator=((DName *)&v20, "short");
          goto LABEL_56;
        case 'H':
        case 'I':
          DName::operator=((DName *)&v20, "int");
          goto LABEL_56;
        case 'J':
        case 'K':
          DName::operator=((DName *)&v20, "long");
          goto LABEL_56;
        case 'M':
          DName::operator=((DName *)&v20, "float");
          goto LABEL_56;
        default:
          goto LABEL_52;
      }
    }
    goto LABEL_54;
  }
  if ( v2 == 79 )
  {
    DName::operator=((DName *)&v20, "long ");
LABEL_54:
    DName::operator+=((DName *)&v20, "double");
LABEL_55:
    if ( v4 == -1 )
      goto LABEL_56;
    goto LABEL_44;
  }
  if ( v2 <= 0x4Fu )
    goto LABEL_52;
  if ( v2 <= 0x53u )
  {
    v4 = v2 & 3;
    goto LABEL_55;
  }
  if ( v2 == 88 )
  {
    DName::operator=((DName *)&v20, "void");
    goto LABEL_56;
  }
  if ( v2 != 95 )
  {
LABEL_52:
    v7 = (DName *)v15;
LABEL_38:
    --dword_10482860;
    ECSUDataType = (int *)UnDecorator::getECSUDataType(v7);
    v9 = ECSUDataType[1];
    v20 = *ECSUDataType;
    v21 = v9;
    if ( !v20 )
    {
      result = a1;
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = v9;
      return result;
    }
LABEL_56:
    if ( v3 == 67 )
    {
      v13 = DName::DName((DName *)v15, "signed ");
    }
    else
    {
      if ( v3 != 69
        && v3 != 71
        && v3 != 73
        && v3 != 75
        && (v3 != 95 || v22 != 69 && v22 != 71 && v22 != 73 && v22 != 75 && v22 != 77) )
      {
LABEL_70:
        if ( *a2 )
        {
          v14 = DName::operator=(v15, 32);
          DName::operator+(v14, (DName *)&v16, (int)a2);
          DName::operator+=((DName *)&v20, (int)&v16);
        }
        result = a1;
        *(_DWORD *)a1 = v20;
        v12 = v21;
LABEL_73:
        *((_DWORD *)result + 1) = v12;
        return result;
      }
      v13 = DName::DName((DName *)v15, "unsigned ");
    }
    DName::operator+(v13, (DName *)&v16, (int)&v20);
    v20 = v16;
    v21 = v17;
    goto LABEL_70;
  }
  v5 = *dword_10482860++;
  v22 = v5;
  if ( v5 <= 0x4Du )
  {
    if ( v5 >= 0x4Cu )
    {
      DName::operator=((DName *)&v20, "__int128");
      goto LABEL_56;
    }
    if ( v5 > 0x47u )
    {
      if ( v5 >= 0x48u )
      {
        if ( v5 <= 0x49u )
        {
          DName::operator=((DName *)&v20, "__int32");
          goto LABEL_56;
        }
        if ( v5 <= 0x4Bu )
        {
          DName::operator=((DName *)&v20, "__int64");
          goto LABEL_56;
        }
      }
    }
    else
    {
      if ( v5 >= 0x46u )
      {
        DName::operator=((DName *)&v20, "__int16");
        goto LABEL_56;
      }
      if ( !v5 )
      {
        --dword_10482860;
        DName::operator=((int **)&v20, 1);
        goto LABEL_56;
      }
      if ( v5 == 36 )
      {
        BasicDataType = UnDecorator::getBasicDataType(&v16, a2);
        operator+(a1, "__w64 ", BasicDataType);
        return a1;
      }
      if ( (unsigned int)v5 - 68 <= 1 )
      {
        DName::operator=((DName *)&v20, "__int8");
        goto LABEL_56;
      }
    }
LABEL_40:
    DName::operator=((DName *)&v20, "UNKNOWN");
    goto LABEL_56;
  }
  if ( v5 == 78 )
  {
    DName::operator=((DName *)&v20, "bool");
    goto LABEL_56;
  }
  if ( v5 != 79 )
  {
    if ( v5 == 82 )
    {
      DName::operator=((DName *)&v20, "<unknown>");
      goto LABEL_56;
    }
    if ( v5 == 87 )
    {
      DName::operator=((DName *)&v20, "wchar_t");
      goto LABEL_56;
    }
    if ( (unsigned int)v5 - 88 > 1 )
      goto LABEL_40;
    v7 = (DName *)&v18;
    goto LABEL_38;
  }
  v4 = -2;
LABEL_44:
  v11 = *a2;
  v20 = 0;
  v21 &= 0xFFFF0000;
  v18 = v11;
  v19 = a2[1];
  if ( v4 == -2 )
  {
    v19 |= 0x800u;
    UnDecorator::getPtrRefType((int **)&v16, &v20, &v18, (char *)Locale);
    if ( (v17 & 0x800) == 0 )
      DName::operator+=((DName *)&v16, "[]");
    result = a1;
    *(_DWORD *)a1 = v16;
    v12 = v17;
    goto LABEL_73;
  }
  if ( !*a2 )
  {
    if ( (v4 & 1) != 0 )
    {
      DName::operator=((DName *)&v20, "const");
      if ( (v4 & 2) != 0 )
        DName::operator+=((DName *)&v20, " volatile");
    }
    else if ( (v4 & 2) != 0 )
    {
      DName::operator=((DName *)&v20, "volatile");
    }
  }
  UnDecorator::getPtrRefType((int **)a1, &v20, &v18, (char *)&dword_103B66D4);
  return a1;
}
