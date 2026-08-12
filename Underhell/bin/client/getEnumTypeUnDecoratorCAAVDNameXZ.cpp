int __cdecl UnDecorator::getEnumType(int a1)
{
  char v1; // al
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  DName *v6; // eax
  int v7; // ecx
  int v8; // edx
  int result; // eax
  _BYTE v10[8]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  v1 = *dword_10482860;
  v12 = 0;
  v13 &= 0xFFFF0000;
  if ( v1 )
  {
    switch ( v1 )
    {
      case '0':
      case '1':
        DName::operator=((DName *)&v12, "char ");
        goto LABEL_7;
      case '2':
      case '3':
        DName::operator=((DName *)&v12, "short ");
        goto LABEL_7;
      case '4':
        goto LABEL_7;
      case '5':
        DName::operator=((DName *)&v12, "int ");
        goto LABEL_7;
      case '6':
      case '7':
        DName::operator=((DName *)&v12, "long ");
LABEL_7:
        v2 = *dword_10482860++;
        v3 = v2 - 49;
        if ( v3 && (v4 = v3 - 2) != 0 && (v5 = v4 - 2) != 0 && v5 != 2 )
        {
          v8 = v13;
          v7 = v12;
        }
        else
        {
          v6 = DName::DName((DName *)v10, "unsigned ");
          DName::operator+(v6, (DName *)v11, (int)&v12);
          v7 = v11[0];
          v8 = v11[1];
        }
        result = a1;
        *(_DWORD *)a1 = v7;
        *(_DWORD *)(a1 + 4) = v8;
        break;
      default:
        result = a1;
        *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
        *(_DWORD *)a1 = 0;
        *(_BYTE *)(a1 + 4) = 2;
        break;
    }
  }
  else
  {
    DName::DName((int **)a1, 1);
    return a1;
  }
  return result;
}
