DName *__cdecl UnDecorator::getTemplateArgumentList(DName *a1)
{
  char *v1; // eax
  char v2; // dl
  unsigned int v3; // ecx
  int *v4; // eax
  char *v5; // eax
  DName *PrimaryDataType; // eax
  int v7; // eax
  char *v8; // eax
  DName *v9; // eax
  int v10; // eax
  DName *v11; // eax
  int v12; // ecx
  DName *result; // eax
  _BYTE v14[8]; // [esp+8h] [ebp-7Ch] BYREF
  _BYTE v15[8]; // [esp+10h] [ebp-74h] BYREF
  _BYTE v16[8]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v17[8]; // [esp+20h] [ebp-64h] BYREF
  _BYTE v18[8]; // [esp+28h] [ebp-5Ch] BYREF
  _DWORD v19[2]; // [esp+30h] [ebp-54h] BYREF
  _DWORD v20[2]; // [esp+38h] [ebp-4Ch] BYREF
  char *v21; // [esp+40h] [ebp-44h]
  int v22; // [esp+44h] [ebp-40h] BYREF
  int v23; // [esp+48h] [ebp-3Ch]
  int v24[2]; // [esp+4Ch] [ebp-38h] BYREF
  int v25; // [esp+54h] [ebp-30h] BYREF
  int v26; // [esp+58h] [ebp-2Ch]
  int v27; // [esp+5Ch] [ebp-28h] BYREF
  int v28; // [esp+60h] [ebp-24h]
  int v29; // [esp+64h] [ebp-20h]
  int v30; // [esp+68h] [ebp-1Ch] BYREF
  int v31; // [esp+6Ch] [ebp-18h]
  char String[16]; // [esp+70h] [ebp-14h] BYREF

  *((_BYTE *)a1 + 4) = 0;
  *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
  *(_DWORD *)a1 = 0;
  byte_10482879 = 1;
  v29 = 1;
  if ( !*((_BYTE *)a1 + 4) )
  {
    while ( 1 )
    {
      v1 = dword_10482860;
      if ( !*dword_10482860 || *dword_10482860 == 64 )
        goto LABEL_29;
      if ( v29 )
      {
        v29 = 0;
      }
      else
      {
        DName::operator+=(a1, 44);
        v1 = dword_10482860;
      }
      v2 = *v1;
      v3 = *v1 - 48;
      if ( v3 > 9 )
        break;
      dword_10482860 = v1 + 1;
      v4 = (int *)Replicator::operator[]((_DWORD *)dword_1048285C, (int)v15, v3);
LABEL_28:
      DName::operator+=(a1, (int)v4);
      if ( *((_BYTE *)a1 + 4) )
        goto LABEL_29;
    }
    v31 &= 0xFFFF0000;
    v21 = v1;
    v30 = 0;
    if ( v2 == 88 )
    {
      dword_10482860 = v1 + 1;
      DName::operator=((DName *)&v30, "void");
LABEL_24:
      if ( dword_10482860 - v21 > 1 && *(_DWORD *)dword_1048285C != 9 )
        Replicator::operator+=((_DWORD *)dword_1048285C, &v30);
      v4 = &v30;
      goto LABEL_28;
    }
    if ( v2 != 36 || (v5 = v1 + 1, *v5 == 36) )
    {
      if ( v2 == 63 )
      {
        UnDecorator::getSignedDimension((DName *)v24);
        if ( (dword_10482870 & 0x4000) != 0 )
        {
          DName::getString((DName *)v24, String, 0x10u);
          v7 = atol(String);
          v8 = (char *)dword_10482874(v7);
          if ( v8 )
          {
            DName::operator=((DName *)&v30, v8);
            goto LABEL_24;
          }
          v9 = DName::DName((DName *)v18, "`template-parameter");
          DName::operator+(v9, (DName *)v20, (int)v24);
          v27 = v20[0];
          v28 = v20[1];
          DName::operator+=((DName *)&v27, "'");
          v30 = v27;
          v10 = v28;
        }
        else
        {
          v11 = DName::DName((DName *)v17, "`template-parameter");
          DName::operator+(v11, (DName *)v19, (int)v24);
          v25 = v19[0];
          v26 = v19[1];
          DName::operator+=((DName *)&v25, "'");
          v30 = v25;
          v10 = v26;
        }
        goto LABEL_23;
      }
      v23 &= 0xFFFF0000;
      v22 = 0;
      PrimaryDataType = (DName *)UnDecorator::getPrimaryDataType(v16, &v22);
    }
    else
    {
      dword_10482860 = v5;
      PrimaryDataType = UnDecorator::getTemplateConstant((DName *)v14);
    }
    v12 = *(_DWORD *)PrimaryDataType;
    v10 = *((_DWORD *)PrimaryDataType + 1);
    v30 = v12;
LABEL_23:
    v31 = v10;
    goto LABEL_24;
  }
LABEL_29:
  result = a1;
  byte_10482879 = 0;
  return result;
}
