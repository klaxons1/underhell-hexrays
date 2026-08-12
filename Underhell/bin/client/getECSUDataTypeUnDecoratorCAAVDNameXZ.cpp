DName *__cdecl UnDecorator::getECSUDataType(DName *a1)
{
  BOOL v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  DName *v8; // eax
  DName *result; // eax
  int EnumType; // [esp-4h] [ebp-2Ch]
  _BYTE v11[8]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v12[8]; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v1 = 1;
  if ( (((unsigned int)dword_10482870 >> 15) & 1) != 0 || (dword_10482870 & 0x1000) != 0 )
    v1 = 0;
  v2 = *dword_10482860;
  v15 = 0;
  v16 &= 0xFFFF0000;
  ++dword_10482860;
  if ( v2 )
  {
    v3 = v2 - 84;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 == 1 )
                DName::operator=((DName *)&v15, "cointerface ");
            }
            else
            {
              DName::operator=((DName *)&v15, "coclass ");
            }
          }
          else
          {
            v1 = (((unsigned int)dword_10482870 >> 15) & 1) == 0;
            EnumType = UnDecorator::getEnumType((int)v12);
            v8 = DName::DName((DName *)v11, "enum ");
            DName::operator+(v8, (DName *)&v13, EnumType);
            v15 = v13;
            v16 = v14;
          }
        }
        else
        {
          DName::operator=((DName *)&v15, "class ");
        }
      }
      else
      {
        DName::operator=((DName *)&v15, "struct ");
      }
    }
    else
    {
      DName::operator=((DName *)&v15, "union ");
    }
    v13 = 0;
    v14 &= 0xFFFF0000;
    if ( v1 )
    {
      v13 = v15;
      v14 = v16;
    }
    UnDecorator::getScopedName((int)&v15);
    DName::operator+=((DName *)&v13, (int)&v15);
    result = a1;
    *(_DWORD *)a1 = v13;
    *((_DWORD *)a1 + 1) = v14;
  }
  else
  {
    --dword_10482860;
    DName::DName(a1, "unknown ecsu'");
    return a1;
  }
  return result;
}
