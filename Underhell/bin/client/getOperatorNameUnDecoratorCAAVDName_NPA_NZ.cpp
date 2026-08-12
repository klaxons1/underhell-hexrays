DName *__cdecl UnDecorator::getOperatorName(DName *a1, char a2, _BYTE *a3)
{
  int v3; // edx
  int v4; // esi
  char *v5; // eax
  DName *v6; // eax
  int v7; // ecx
  DName *result; // eax
  int v9; // ecx
  _BYTE *v10; // eax
  char *v11; // esi
  int *ZName; // eax
  int v13; // eax
  _BYTE *v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  DName *SignedDimension; // eax
  DName *v22; // eax
  DName *v23; // eax
  DName *v24; // eax
  DName *v25; // eax
  DName *v26; // eax
  _DWORD *Dimension; // eax
  DName *v28; // eax
  int *v29; // ecx
  int *OperatorName; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  char *v34; // eax
  int DecoratedName; // eax
  int SymbolName; // eax
  DName *TemplateArgumentList; // [esp-4h] [ebp-9Ch]
  char v38[8]; // [esp+8h] [ebp-90h] BYREF
  char v39[8]; // [esp+10h] [ebp-88h] BYREF
  char v40[8]; // [esp+18h] [ebp-80h] BYREF
  char v41[8]; // [esp+20h] [ebp-78h] BYREF
  char v42[8]; // [esp+28h] [ebp-70h] BYREF
  char v43[8]; // [esp+30h] [ebp-68h] BYREF
  char v44[8]; // [esp+38h] [ebp-60h] BYREF
  char v45[8]; // [esp+40h] [ebp-58h] BYREF
  char v46[8]; // [esp+48h] [ebp-50h] BYREF
  char v47[8]; // [esp+50h] [ebp-48h] BYREF
  char v48[8]; // [esp+58h] [ebp-40h] BYREF
  char v49[8]; // [esp+60h] [ebp-38h] BYREF
  _BYTE v50[8]; // [esp+68h] [ebp-30h] BYREF
  int v51; // [esp+70h] [ebp-28h] BYREF
  int v52; // [esp+74h] [ebp-24h]
  int v53; // [esp+78h] [ebp-20h] BYREF
  int v54; // [esp+7Ch] [ebp-1Ch]
  int v55; // [esp+80h] [ebp-18h] BYREF
  int v56; // [esp+84h] [ebp-14h]
  int v57; // [esp+88h] [ebp-10h] BYREF
  int v58; // [esp+8Ch] [ebp-Ch]
  int v59; // [esp+90h] [ebp-8h] BYREF
  int v60; // [esp+94h] [ebp-4h]

  v3 = *dword_10482860;
  v60 &= 0xFFFF0000;
  v58 &= 0xFFFF0000;
  v4 = 0;
  v5 = dword_10482860 + 1;
  v59 = 0;
  v57 = 0;
  ++dword_10482860;
  if ( v3 <= 65 )
  {
    if ( v3 != 65 )
    {
      if ( v3 )
      {
        if ( v3 > 47 )
        {
          if ( v3 > 49 )
          {
            if ( v3 <= 57 )
            {
              DName::operator=((DName *)&v59, (&dword_103B66F0)[*(v5 - 1)]);
              goto LABEL_8;
            }
            goto LABEL_68;
          }
          v58 &= 0xFFFF0000;
          v57 = 0;
          if ( a2 )
          {
            TemplateArgumentList = UnDecorator::getTemplateArgumentList((DName *)v39);
            v10 = DName::operator=(&v53, 60);
            DName::operator+(v10, (DName *)&v51, (int)TemplateArgumentList);
            DName::operator+=((DName *)&v57, (int)&v51);
            if ( v57 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v57 + 4))(v57) == 62 )
              DName::operator+=((DName *)&v57, 32);
            DName::operator+=((DName *)&v57, 62);
            if ( a3 )
              *a3 = 1;
            if ( !*dword_10482860 )
            {
              result = a1;
              *(_DWORD *)a1 = v57;
              v9 = v58;
              goto LABEL_12;
            }
            v5 = ++dword_10482860;
          }
          v11 = v5;
          ZName = (int *)UnDecorator::getZName(v38, 0, 0);
          v7 = *ZName;
          v13 = ZName[1];
          v59 = v7;
          v60 = v13;
          dword_10482860 = v11;
          if ( v7 && *(v11 - 1) == 49 )
          {
            v14 = DName::operator=(&v51, 126);
            DName::operator+(v14, (DName *)&v53, (int)&v59);
            v7 = v53;
            v59 = v53;
            v60 = v54;
          }
          if ( !v57 )
          {
LABEL_11:
            result = a1;
            *(_DWORD *)a1 = v7;
            v9 = v60;
LABEL_12:
            *((_DWORD *)result + 1) = v9;
            return result;
          }
          DName::operator+=((DName *)&v59, (int)&v57);
LABEL_10:
          v7 = v59;
          goto LABEL_11;
        }
        goto LABEL_68;
      }
      goto LABEL_27;
    }
LABEL_88:
    DName::operator=((DName *)&v59, (&dword_103B66D4)[*(v5 - 1)]);
    if ( v4 )
    {
      if ( v59 )
        v60 |= 0x200u;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v3 == 66 )
  {
    v4 = 1;
    goto LABEL_88;
  }
  if ( v3 <= 90 )
    goto LABEL_88;
  if ( v3 != 95 )
    goto LABEL_68;
  v15 = *v5++;
  dword_10482860 = v5;
  if ( v15 <= 79 )
  {
    if ( v15 < 68 )
    {
      if ( v15 <= 57 )
      {
        if ( v15 != 57 )
        {
          if ( v15 )
          {
            if ( v15 <= 47 )
              goto LABEL_68;
            if ( v15 > 54 )
            {
              DName::DName(a1, (&dword_103B6780)[*(v5 - 1)]);
              return a1;
            }
            DName::operator=((DName *)&v59, (&dword_103B6780)[*(v5 - 1)]);
LABEL_8:
            if ( v59 )
            {
              v6 = DName::DName((DName *)v50, "operator");
              DName::operator+(v6, (DName *)&v51, (int)&v59);
              v59 = v51;
              v60 = v52;
            }
            goto LABEL_10;
          }
LABEL_27:
          dword_10482860 = v5 - 1;
LABEL_28:
          DName::DName((int **)a1, 1);
          return a1;
        }
        DName::DName((DName *)&v53, (&dword_103B6780)[*(v5 - 1)]);
        v9 = v54 | 0x8000;
LABEL_43:
        result = a1;
        *(_DWORD *)a1 = v53;
        goto LABEL_12;
      }
      if ( v15 == 63 )
      {
        v16 = *v5++;
        dword_10482860 = v5;
        if ( !v16 )
          goto LABEL_27;
        if ( v16 != 48 )
          goto LABEL_68;
        UnDecorator::getStringEncoding((int)&v53, "`anonymous namespace'");
        goto LABEL_48;
      }
      if ( v15 <= 64 )
        goto LABEL_68;
      if ( v15 > 66 )
      {
        UnDecorator::getStringEncoding((int)&v53, "`string'");
LABEL_48:
        v9 = v54 | 0x1000;
        goto LABEL_43;
      }
    }
LABEL_85:
    DName::DName(a1, (&dword_103B6764)[*(v5 - 1)]);
    return a1;
  }
  if ( v15 > 84 )
  {
    if ( v15 <= 86 )
    {
      DName::operator=((DName *)&v59, (&dword_103B6764)[*(v5 - 1)]);
      goto LABEL_8;
    }
    if ( v15 <= 87 )
      goto LABEL_68;
    if ( v15 > 89 )
    {
      if ( v15 != 95 )
        goto LABEL_68;
      v33 = *v5;
      v34 = v5 + 1;
      dword_10482860 = v34;
      if ( v33 < 65 )
        goto LABEL_68;
      if ( v33 > 68 )
      {
        if ( v33 <= 70 )
        {
          DName::DName((DName *)&v55, (&off_103B67C8)[*(v34 - 1)]);
          if ( *dword_10482860 == 63 )
          {
            DecoratedName = UnDecorator::getDecoratedName(v40);
            DName::operator+=((DName *)&v55, DecoratedName);
            if ( *dword_10482860 == 64 )
              ++dword_10482860;
          }
          else
          {
            SymbolName = UnDecorator::getSymbolName(v50);
            DName::operator+=((DName *)&v55, SymbolName);
          }
          DName::operator+=((DName *)&v55, "''");
          result = a1;
          *(_DWORD *)a1 = v55;
          v9 = v56;
          goto LABEL_12;
        }
        if ( v33 > 74 )
          goto LABEL_68;
      }
      DName::DName(a1, (&off_103B67C8)[*(v34 - 1)]);
      return a1;
    }
    goto LABEL_85;
  }
  if ( v15 >= 83 )
    goto LABEL_85;
  v17 = v15 - 80;
  if ( !v17 )
  {
    DName::operator=((DName *)&v59, (&dword_103B6764)[*(v5 - 1)]);
    OperatorName = (int *)UnDecorator::getOperatorName(v42, 0, 0);
    v31 = *OperatorName;
    v32 = OperatorName[1];
    v57 = v31;
    v58 = v32;
    if ( v31 && (v32 & 0x400) != 0 )
      goto LABEL_68;
    goto LABEL_69;
  }
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_10;
  if ( v18 == 1 )
  {
    DName::operator=((DName *)&v59, (&dword_103B6764)[*(v5 - 1)]);
    if ( !*dword_10482860 )
    {
      DName::operator+(&v59, a1, 1);
      return a1;
    }
    v19 = *dword_10482860 - 48;
    if ( v19 > 4 )
      goto LABEL_68;
    DName::operator=((DName *)&v57, (&off_103B68F8)[v19]);
    v20 = *dword_10482860++;
    if ( v20 == 48 )
    {
      UnDecorator::getDataType(&v51, 0);
      v55 = v51;
      v56 = v52;
      DName::operator+=((DName *)&v55, 32);
      v53 = v55;
      v54 = v56;
      DName::operator+=((DName *)&v53, (int)&v59);
      v29 = &v53;
LABEL_70:
      DName::operator+(v29, a1, (int)&v57);
      return a1;
    }
    if ( v20 == 49 )
    {
      v55 = v59;
      v56 = v60;
      DName::operator+=((DName *)&v55, (int)&v57);
      SignedDimension = UnDecorator::getSignedDimension((DName *)v49);
      v22 = DName::operator+(SignedDimension, (DName *)v47, 44);
      DName::operator+=((DName *)&v55, (int)v22);
      v23 = UnDecorator::getSignedDimension((DName *)v41);
      v24 = DName::operator+(v23, (DName *)v45, 44);
      DName::operator+=((DName *)&v55, (int)v24);
      v25 = UnDecorator::getSignedDimension((DName *)v48);
      v26 = DName::operator+(v25, (DName *)v43, 44);
      DName::operator+=((DName *)&v55, (int)v26);
      Dimension = (_DWORD *)UnDecorator::getDimension((int)v44, 0);
      v28 = DName::operator+(Dimension, (DName *)v46, 41);
      DName::operator+=((DName *)&v55, (int)v28);
      DName::operator+(&v55, a1, 39);
      return a1;
    }
    if ( (unsigned int)(v20 - 50) > 2 )
    {
      --dword_10482860;
      goto LABEL_28;
    }
LABEL_69:
    v29 = &v59;
    goto LABEL_70;
  }
LABEL_68:
  result = a1;
  *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
  *((_BYTE *)a1 + 4) = 2;
  *(_DWORD *)a1 = 0;
  return result;
}
