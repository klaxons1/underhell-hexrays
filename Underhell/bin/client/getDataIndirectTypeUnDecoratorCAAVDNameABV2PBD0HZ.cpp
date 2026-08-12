DName *__cdecl UnDecorator::getDataIndirectType(DName *a1, int *a2, char *a3, int a4, int a5)
{
  char v5; // al
  int v6; // edi
  DName *result; // eax
  int v8; // ecx
  char *v9; // ecx
  char v10; // al
  bool v11; // dl
  unsigned int v12; // ebx
  int v13; // edx
  int *v14; // eax
  char *v15; // eax
  char *v16; // eax
  DName *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // ecx
  int v21; // eax
  char *v22; // esi
  DName *v23; // eax
  _DWORD *v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int **v28; // eax
  int Scope; // eax
  char v30; // al
  _DWORD *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // eax
  _DWORD *BasedType; // eax
  DName *v36; // eax
  DName *v37; // eax
  int v38; // ecx
  _BYTE *v39; // eax
  DName *v40; // eax
  _BYTE *v41; // eax
  int **v42; // eax
  char *v43; // [esp-4h] [ebp-64h]
  char *v44; // [esp-4h] [ebp-64h]
  int v45; // [esp-4h] [ebp-64h]
  int v46; // [esp-4h] [ebp-64h]
  int v47; // [esp-4h] [ebp-64h]
  int *v48[2]; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v49[2]; // [esp+14h] [ebp-4Ch] BYREF
  char v50[8]; // [esp+1Ch] [ebp-44h] BYREF
  int v51; // [esp+24h] [ebp-3Ch] BYREF
  int v52; // [esp+28h] [ebp-38h]
  _DWORD v53[2]; // [esp+2Ch] [ebp-34h] BYREF
  int v54; // [esp+34h] [ebp-2Ch] BYREF
  int v55; // [esp+38h] [ebp-28h]
  int v56; // [esp+3Ch] [ebp-24h] BYREF
  int v57; // [esp+40h] [ebp-20h]
  int v58; // [esp+44h] [ebp-1Ch] BYREF
  int v59; // [esp+48h] [ebp-18h]
  int v60; // [esp+4Ch] [ebp-14h] BYREF
  int v61; // [esp+50h] [ebp-10h]
  int v62; // [esp+54h] [ebp-Ch] BYREF
  int v63; // [esp+58h] [ebp-8h]
  char v64; // [esp+5Fh] [ebp-1h] BYREF

  v5 = *dword_10482860;
  v52 &= 0xFFFF0000;
  v6 = 0;
  v64 = 0;
  if ( !v5 )
  {
    if ( a5 )
      goto LABEL_83;
    if ( *a2 )
    {
      if ( (a2[1] & 0x100) != 0 || !*(_DWORD *)a4 )
      {
        operator+(a1, 1, (int)a2);
      }
      else
      {
        v47 = a4;
        v42 = DName::DName(v48, 1);
        DName::operator+(v42, (DName *)&v51, v47);
        v54 = v51;
        v55 = v52;
        DName::operator+=((DName *)&v54, 32);
        DName::operator+(&v54, a1, (int)a2);
      }
      return a1;
    }
    if ( !*(_DWORD *)a4 )
LABEL_83:
      DName::DName((int **)a1, 1);
    else
      operator+(a1, 1, a4);
    return a1;
  }
  if ( v5 == 36 )
  {
    UnDecorator::getExtendedDataIndirectType(&v54, (const char **)&a3, &v64, a5);
    if ( v54 )
    {
      result = a1;
      *(_DWORD *)a1 = v54;
      v8 = v55;
LABEL_5:
      *((_DWORD *)result + 1) = v8;
      return result;
    }
  }
  v9 = dword_10482860;
  v10 = *dword_10482860;
  v11 = *dword_10482860 < 65;
  v61 &= 0xFFFF0000;
  v58 = 0;
  v12 = v10 - (v11 ? 22 : 65);
  v13 = 0;
  v59 &= 0xFFFF0000;
  v60 = 0;
  while ( v12 == 4 )
  {
    if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 && (~((unsigned int)dword_10482870 >> 17) & 1) != 0 )
    {
      if ( !v13 )
      {
        v15 = (char *)UnDecorator::UScore(8);
        goto LABEL_24;
      }
      v62 = v13;
      v63 = v61;
      DName::operator+=((DName *)&v62, 32);
      v44 = (char *)UnDecorator::UScore(8);
      v14 = (int *)DName::operator+(&v62, (DName *)v48, v44);
      goto LABEL_22;
    }
LABEL_25:
    if ( *++dword_10482860 == 36 )
    {
      UnDecorator::getExtendedDataIndirectType(v53, (const char **)&a3, &v64, a5);
      if ( v53[0] )
      {
        result = a1;
        *(_DWORD *)a1 = v53[0];
        v8 = v53[1];
        goto LABEL_5;
      }
    }
    v9 = dword_10482860;
    v12 = *dword_10482860 - (*dword_10482860 < 65 ? 22 : 65);
    v13 = v60;
  }
  if ( v12 == 5 )
  {
    if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 )
    {
      if ( v6 )
      {
        v56 = v6;
        v57 = v59;
        DName::operator+=((DName *)&v56, 32);
        v16 = (char *)UnDecorator::UScore(10);
        v17 = DName::operator+(&v56, (DName *)v49, v16);
        v6 = *(_DWORD *)v17;
        v18 = *((_DWORD *)v17 + 1);
        v58 = v6;
        v59 = v18;
      }
      else
      {
        v19 = (char *)UnDecorator::UScore(10);
        DName::operator=((DName *)&v58, v19);
        v6 = v58;
      }
    }
    goto LABEL_25;
  }
  if ( v12 == 8 )
  {
    if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 )
    {
      if ( !v13 )
      {
        v15 = (char *)UnDecorator::UScore(9);
LABEL_24:
        DName::operator=((DName *)&v60, v15);
        goto LABEL_25;
      }
      v54 = v13;
      v55 = v61;
      DName::operator+=((DName *)&v54, 32);
      v43 = (char *)UnDecorator::UScore(9);
      v14 = (int *)DName::operator+(&v54, (DName *)v50, v43);
LABEL_22:
      v20 = *v14;
      v21 = v14[1];
      v60 = v20;
      v61 = v21;
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  if ( *v9 )
    dword_10482860 = v9 + 1;
  if ( v12 > 0x1F )
    goto LABEL_38;
  v22 = a3;
  DName::DName((DName *)&v62, a3);
  v56 = 0;
  v57 = v52;
  DName::operator+=((DName *)&v56, (int)&v62);
  v62 = v56;
  v63 = v57;
  if ( v60 )
  {
    DName::operator+=((DName *)&v56, 32);
    v54 = v56;
    v55 = v57;
    DName::operator+=((DName *)&v54, (int)&v60);
    v62 = v54;
    v63 = v55;
  }
  if ( v6 )
  {
    v54 = v6;
    v55 = v59;
    DName::operator+=((DName *)&v54, 32);
    v56 = v54;
    v57 = v55;
    DName::operator+=((DName *)&v56, (int)&v62);
    v62 = v56;
    v63 = v57;
  }
  if ( (v12 & 0x10) == 0 )
    goto LABEL_49;
  if ( a5 )
    goto LABEL_38;
  if ( !*v22 )
  {
    if ( *dword_10482860 )
    {
      Scope = UnDecorator::getScope((int)v48);
      DName::operator|=(&v62, Scope);
      goto LABEL_46;
    }
LABEL_47:
    DName::operator+=((int **)&v62, 1);
LABEL_49:
    if ( (dword_10482870 & 2) != 0 )
    {
      if ( (v12 & 0xC) == 0xC )
      {
        BasedType = UnDecorator::getBasedType(v48);
        DName::operator|=(&v62, (int)BasedType);
      }
    }
    else if ( (v12 & 0xC) == 0xC )
    {
      if ( a5 )
        goto LABEL_38;
      v31 = UnDecorator::getBasedType(v49);
      v32 = (int *)DName::operator+(v31, (DName *)v48, (int)&v62);
      v33 = *v32;
      v34 = v32[1];
      v62 = v33;
      v63 = v34;
    }
    if ( (v12 & 2) != 0 )
    {
      v36 = DName::DName((DName *)v48, "volatile ");
      DName::operator+(v36, (DName *)&v51, (int)&v62);
      v62 = v51;
      v63 = v52;
    }
    if ( (v12 & 1) != 0 )
    {
      v37 = DName::DName((DName *)v48, "const ");
      DName::operator+(v37, (DName *)&v51, (int)&v62);
      v62 = v51;
      v63 = v52;
    }
    if ( a5 )
      goto LABEL_71;
    if ( *a2 )
    {
      v38 = a2[1];
      if ( (v38 & 0x100) == 0 && *(_DWORD *)a4 )
      {
        v45 = a4;
        v39 = DName::operator=(v48, 32);
        DName::operator+(v39, (DName *)&v51, v45);
        v54 = v51;
        v55 = v52;
        DName::operator+=((DName *)&v54, 32);
        v40 = DName::operator+(&v54, (DName *)v49, (int)a2);
LABEL_70:
        DName::operator+=((DName *)&v62, (int)v40);
        goto LABEL_71;
      }
      if ( (v38 & 0x800) != 0 )
      {
        v62 = *a2;
        v63 = v38;
LABEL_71:
        v8 = v63 | 0x100;
        if ( v64 )
          v8 = v63 | 0x2100;
        result = a1;
        *(_DWORD *)a1 = v62;
        goto LABEL_5;
      }
      v46 = (int)a2;
    }
    else
    {
      if ( !*(_DWORD *)a4 )
        goto LABEL_71;
      v46 = a4;
    }
    v41 = DName::operator=(v48, 32);
    DName::operator+(v41, (DName *)&v51, v46);
    v40 = (DName *)&v51;
    goto LABEL_70;
  }
  v23 = DName::DName((DName *)v48, "::");
  DName::operator+(v23, (DName *)&v51, (int)&v62);
  v62 = v51;
  v63 = v52;
  if ( *dword_10482860 )
  {
    v24 = (_DWORD *)UnDecorator::getScope((int)v49);
    v25 = (int *)DName::operator+(v24, (DName *)v48, (int)&v62);
    v26 = *v25;
    v27 = v25[1];
    v62 = v26;
  }
  else
  {
    v28 = DName::DName(v48, 1);
    DName::operator+(v28, (DName *)&v51, (int)&v62);
    v62 = v51;
    v27 = v52;
  }
  v63 = v27;
LABEL_46:
  v30 = *dword_10482860;
  if ( !*dword_10482860 )
    goto LABEL_47;
  ++dword_10482860;
  if ( v30 == 64 )
    goto LABEL_49;
LABEL_38:
  result = a1;
  *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
  *(_DWORD *)a1 = 0;
  *((_BYTE *)a1 + 4) = 2;
  return result;
}
