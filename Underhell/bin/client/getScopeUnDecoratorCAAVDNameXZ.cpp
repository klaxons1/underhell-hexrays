int __cdecl UnDecorator::getScope(int a1)
{
  DName *v2; // eax
  _BYTE *v3; // eax
  char *v4; // ecx
  _DWORD *ZName; // eax
  _DWORD *v6; // eax
  DName *v7; // eax
  DName *v8; // eax
  DName *OperatorName; // eax
  DName *v10; // eax
  _BYTE *v11; // eax
  DName *v12; // eax
  int **v13; // eax
  int **v14; // eax
  DName *v15; // eax
  DName *v16; // eax
  DName *v18; // [esp-8h] [ebp-CCh]
  int v19; // [esp-4h] [ebp-C8h]
  int DecoratedName; // [esp-4h] [ebp-C8h]
  _BYTE v21[8]; // [esp+Ch] [ebp-B8h] BYREF
  _BYTE v22[8]; // [esp+14h] [ebp-B0h] BYREF
  char v23; // [esp+1Ch] [ebp-A8h] BYREF
  _BYTE v24[8]; // [esp+24h] [ebp-A0h] BYREF
  _BYTE v25[8]; // [esp+2Ch] [ebp-98h] BYREF
  _BYTE v26[8]; // [esp+34h] [ebp-90h] BYREF
  char v27; // [esp+3Ch] [ebp-88h] BYREF
  _BYTE v28[8]; // [esp+44h] [ebp-80h] BYREF
  _BYTE v29[8]; // [esp+4Ch] [ebp-78h] BYREF
  int v30; // [esp+54h] [ebp-70h] BYREF
  _BYTE v31[8]; // [esp+5Ch] [ebp-68h] BYREF
  _BYTE v32[8]; // [esp+64h] [ebp-60h] BYREF
  _BYTE v33[8]; // [esp+6Ch] [ebp-58h] BYREF
  _BYTE v34[8]; // [esp+74h] [ebp-50h] BYREF
  _BYTE v35[8]; // [esp+7Ch] [ebp-48h] BYREF
  _BYTE v36[8]; // [esp+84h] [ebp-40h] BYREF
  int *v37[2]; // [esp+8Ch] [ebp-38h] BYREF
  _DWORD v38[2]; // [esp+94h] [ebp-30h] BYREF
  _DWORD v39[2]; // [esp+9Ch] [ebp-28h] BYREF
  _DWORD v40[2]; // [esp+A4h] [ebp-20h] BYREF
  _DWORD v41[2]; // [esp+ACh] [ebp-18h] BYREF
  _DWORD v42[2]; // [esp+B4h] [ebp-10h] BYREF
  _DWORD v43[2]; // [esp+BCh] [ebp-8h] BYREF
  char v44; // [esp+CFh] [ebp+Bh]

  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
  *(_DWORD *)a1 = 0;
  v44 = 0;
  while ( !*(_BYTE *)(a1 + 4) && *dword_10482860 && *dword_10482860 != 64 )
  {
    if ( byte_10482878 && !byte_10482879 )
      return a1;
    if ( *(_DWORD *)a1 )
    {
      v2 = DName::DName((DName *)v26, "::");
      DName::operator+(v2, (DName *)v40, a1);
      *(_DWORD *)a1 = v40[0];
      *(_DWORD *)(a1 + 4) = v40[1];
      if ( v44 )
      {
        v3 = DName::operator=(v25, 91);
        DName::operator+(v3, (DName *)v39, a1);
        *(_DWORD *)a1 = v39[0];
        *(_DWORD *)(a1 + 4) = v39[1];
        v44 = 0;
      }
    }
    if ( *dword_10482860 != 63 )
    {
      v19 = a1;
      v18 = (DName *)v35;
      v13 = (int **)v36;
      goto LABEL_26;
    }
    v4 = dword_10482860 + 1;
    dword_10482860 = v4;
    switch ( *v4 )
    {
      case '$':
        v19 = a1;
        v18 = (DName *)&v27;
        dword_10482860 = v4 - 1;
        v13 = v37;
LABEL_26:
        ZName = UnDecorator::getZName(v13, 1, 0);
LABEL_27:
        v8 = DName::operator+(ZName, v18, v19);
LABEL_28:
        *(_DWORD *)a1 = *(_DWORD *)v8;
        *(_DWORD *)(a1 + 4) = *((_DWORD *)v8 + 1);
        break;
      case '%':
        goto LABEL_22;
      case '?':
        if ( v4[1] != 95 || v4[2] != 63 )
        {
          DecoratedName = UnDecorator::getDecoratedName((int)v24);
          v11 = DName::operator=(v33, 96);
          DName::operator+(v11, (DName *)v41, DecoratedName);
          v43[0] = v41[0];
          v43[1] = v41[1];
          DName::operator+=((DName *)v43, 39);
          v8 = DName::operator+(v43, (DName *)v31, a1);
          goto LABEL_28;
        }
        dword_10482860 = v4 + 1;
        OperatorName = UnDecorator::getOperatorName((DName *)v28, 0, 0);
        v10 = DName::operator+(OperatorName, (DName *)v22, a1);
        *(_DWORD *)a1 = *(_DWORD *)v10;
        *(_DWORD *)(a1 + 4) = *((_DWORD *)v10 + 1);
        if ( *dword_10482860 == 64 )
          ++dword_10482860;
        break;
      case 'A':
LABEL_22:
        DName::DName((DName *)v38, &dword_10482860, 64);
        v12 = DName::DName((DName *)v29, "`anonymous namespace'");
        DName::operator+(v12, (DName *)v42, a1);
        *(_DWORD *)a1 = v42[0];
        *(_DWORD *)(a1 + 4) = v42[1];
        if ( *(_DWORD *)dword_10482858 != 9 )
          Replicator::operator+=((_DWORD *)dword_10482858, v38);
        break;
      default:
        v19 = a1;
        if ( *v4 == 73 )
        {
          dword_10482860 = v4 + 1;
          v6 = UnDecorator::getZName(&v30, 1, 0);
          v7 = DName::operator+(v6, (DName *)v34, 93);
          v8 = DName::operator+(v7, (DName *)v32, a1);
          v44 = 1;
          goto LABEL_28;
        }
        v18 = (DName *)&v23;
        ZName = UnDecorator::getLexicalFrame((DName *)v21);
        goto LABEL_27;
    }
  }
  if ( *dword_10482860 )
  {
    if ( *dword_10482860 != 64 )
    {
      *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
      *(_BYTE *)(a1 + 4) = 2;
      *(_DWORD *)a1 = 0;
    }
  }
  else if ( *(_DWORD *)a1 )
  {
    v14 = DName::DName(v37, 1);
    v15 = DName::operator+(v14, (DName *)v35, "::");
    v16 = DName::operator+(v15, (DName *)v36, a1);
    *(_DWORD *)a1 = *(_DWORD *)v16;
    *(_DWORD *)(a1 + 4) = *((_DWORD *)v16 + 1);
  }
  else
  {
    DName::operator=((int **)a1, 1);
  }
  return a1;
}
