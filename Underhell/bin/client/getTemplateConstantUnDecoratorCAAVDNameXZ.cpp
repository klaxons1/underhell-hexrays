DName *__cdecl UnDecorator::getTemplateConstant(DName *a1)
{
  char v1; // bl
  DName *v2; // eax
  DName *v3; // eax
  int v4; // eax
  char *v5; // eax
  DName *v6; // eax
  int DecoratedName; // eax
  DName *v8; // eax
  DName *v9; // eax
  DName *SignedDimension; // eax
  DName *v12; // [esp-8h] [ebp-DCh]
  int *v13; // [esp-4h] [ebp-D8h]
  _BYTE v14[8]; // [esp+Ch] [ebp-C8h] BYREF
  _BYTE v15[8]; // [esp+14h] [ebp-C0h] BYREF
  _BYTE v16[8]; // [esp+1Ch] [ebp-B8h] BYREF
  _BYTE v17[8]; // [esp+24h] [ebp-B0h] BYREF
  _BYTE v18[8]; // [esp+2Ch] [ebp-A8h] BYREF
  _BYTE v19[8]; // [esp+34h] [ebp-A0h] BYREF
  _BYTE v20[8]; // [esp+3Ch] [ebp-98h] BYREF
  _BYTE v21[8]; // [esp+44h] [ebp-90h] BYREF
  int v22; // [esp+4Ch] [ebp-88h] BYREF
  int v23; // [esp+50h] [ebp-84h]
  int v24; // [esp+54h] [ebp-80h] BYREF
  char v25; // [esp+58h] [ebp-7Ch]
  char v26; // [esp+5Ch] [ebp-78h] BYREF
  char v27; // [esp+5Dh] [ebp-77h] BYREF
  char v28; // [esp+5Eh] [ebp-76h]
  char String[8]; // [esp+C0h] [ebp-14h] BYREF
  _BYTE v30[8]; // [esp+C8h] [ebp-Ch] BYREF

  v1 = *dword_10482860++;
  if ( v1 > 68 )
  {
    if ( v1 == 69 )
    {
      UnDecorator::getDecoratedName(a1);
      return a1;
    }
    if ( v1 <= 69 )
      goto LABEL_10;
    if ( v1 > 74 )
    {
      if ( v1 != 81 )
      {
        if ( v1 == 82 )
        {
          UnDecorator::getZName(&v22, 0, 0);
          UnDecorator::getSignedDimension((DName *)&v24);
          *(_DWORD *)a1 = v22;
          *((_DWORD *)a1 + 1) = v23;
          return a1;
        }
        goto LABEL_10;
      }
      goto LABEL_28;
    }
    DName::operator=(&v24, 123);
    if ( v1 >= 72 && v1 <= 74 )
    {
      DecoratedName = UnDecorator::getDecoratedName(v17);
      DName::operator+=((DName *)&v24, DecoratedName);
      DName::operator+=((DName *)&v24, 44);
    }
    if ( v1 == 70 )
      goto LABEL_44;
    if ( v1 != 71 )
    {
      if ( v1 == 72 )
      {
LABEL_45:
        SignedDimension = UnDecorator::getSignedDimension((DName *)v16);
        DName::operator+=((DName *)&v24, (int)SignedDimension);
        goto LABEL_46;
      }
      if ( v1 == 73 )
      {
LABEL_44:
        v9 = UnDecorator::getSignedDimension((DName *)v18);
        DName::operator+=((DName *)&v24, (int)v9);
        DName::operator+=((DName *)&v24, 44);
        goto LABEL_45;
      }
      if ( v1 != 74 )
      {
LABEL_46:
        DName::operator+(&v24, a1, 125);
        return a1;
      }
    }
    v8 = UnDecorator::getSignedDimension((DName *)v20);
    DName::operator+=((DName *)&v24, (int)v8);
    DName::operator+=((DName *)&v24, 44);
    goto LABEL_44;
  }
  if ( v1 != 68 )
  {
    if ( v1 )
    {
      if ( v1 == 48 )
      {
        UnDecorator::getSignedDimension(a1);
        return a1;
      }
      if ( v1 == 49 )
      {
        if ( *dword_10482860 == 64 )
        {
          ++dword_10482860;
          DName::DName(a1, "NULL");
          return a1;
        }
        v13 = (int *)UnDecorator::getDecoratedName(v14);
        v12 = a1;
        v3 = DName::DName((DName *)v21, "&");
        goto LABEL_15;
      }
      if ( v1 != 50 )
      {
LABEL_10:
        *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
        *(_DWORD *)a1 = 0;
        *((_BYTE *)a1 + 4) = 2;
        return a1;
      }
      UnDecorator::getSignedDimension((DName *)&v24);
      UnDecorator::getSignedDimension((DName *)&v22);
      if ( v25 <= 1 && (char)v23 <= 1 )
      {
        if ( !DName::getString((DName *)&v24, &v27, 0x64u) )
          goto LABEL_10;
        v26 = v27;
        if ( v27 == 45 )
        {
          v27 = v28;
          v28 = 46;
        }
        else
        {
          v27 = 46;
        }
        v13 = &v22;
        v12 = a1;
        v2 = DName::DName((DName *)v15, &v26);
        v3 = DName::operator+(v2, (DName *)v19, 101);
LABEL_15:
        DName::operator+(v3, v12, (int)v13);
        return a1;
      }
    }
    else
    {
      --dword_10482860;
    }
    DName::DName((int **)a1, 1);
    return a1;
  }
LABEL_28:
  UnDecorator::getSignedDimension((DName *)&v24);
  if ( (dword_10482870 & 0x4000) != 0
    && (DName::getString((DName *)&v24, String, 0x10u), v4 = atol(String), (v5 = (char *)dword_10482874(v4)) != 0) )
  {
    DName::DName(a1, v5);
  }
  else
  {
    if ( v1 == 68 )
      v6 = DName::DName((DName *)v30, "`template-parameter");
    else
      v6 = DName::DName((DName *)v30, "`non-type-template-parameter");
    DName::operator+(v6, (DName *)&v22, (int)&v24);
    DName::operator+(&v22, a1, "'");
  }
  return a1;
}
