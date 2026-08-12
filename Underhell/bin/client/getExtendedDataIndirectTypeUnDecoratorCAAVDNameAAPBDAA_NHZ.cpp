_DWORD *__cdecl UnDecorator::getExtendedDataIndirectType(_DWORD *a1, const char **a2, _BYTE *a3, int a4)
{
  int *v4; // ecx
  int v5; // eax
  char v6; // dl
  _DWORD *result; // eax
  unsigned int v8; // esi
  DName *v9; // eax
  DName *v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  const char *v14; // eax
  _BYTE v15[8]; // [esp+Ch] [ebp-24h] BYREF
  _BYTE v16[8]; // [esp+14h] [ebp-1Ch] BYREF
  int *v17; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-10h]
  int *v19; // [esp+24h] [ebp-Ch] BYREF
  int v20; // [esp+28h] [ebp-8h]
  char v21[4]; // [esp+2Ch] [ebp-4h] BYREF

  v20 &= 0xFFFF0000;
  v4 = 0;
  v5 = *++dword_10482860;
  if ( v5 == 65 )
  {
    if ( !a4 )
    {
      v14 = "%";
      if ( **a2 != 38 )
        v14 = "^";
      *a2 = v14;
    }
    goto LABEL_26;
  }
  if ( *dword_10482860 == 66 )
  {
    if ( a4 )
    {
LABEL_7:
      result = a1;
      a1[1] &= 0xFFFF00FF;
      *((_BYTE *)a1 + 4) = 2;
LABEL_27:
      *result = 0;
      return result;
    }
    v20 &= 0xFFFFFF00;
    v20 &= 0xFFFF00FF;
    *a3 = 1;
    v21[0] = 62;
    v19 = 0;
    DName::doPchar((DName *)&v19, v21, 1u);
LABEL_26:
    result = a1;
    ++dword_10482860;
    *((_BYTE *)a1 + 4) = 0;
    a1[1] &= 0xFFFF00FF;
    goto LABEL_27;
  }
  if ( *dword_10482860 == 67 )
  {
    *a2 = "%";
    goto LABEL_26;
  }
  if ( !*dword_10482860 || (v6 = dword_10482860[1]) == 0 )
  {
    DName::DName((int **)a1, 1);
    return a1;
  }
  if ( a4 )
    goto LABEL_7;
  dword_10482860 += 2;
  v8 = v6 + 16 * (v5 - 48) - 48;
  if ( v8 <= 1 )
  {
    v11 = v20;
  }
  else
  {
    v20 &= 0xFFFFFF00;
    v20 &= 0xFFFF00FF;
    v21[0] = 44;
    v19 = 0;
    DName::doPchar((DName *)&v19, v21, 1u);
    v9 = DName::DName((DName *)v16, v8);
    v10 = DName::operator+(&v19, (DName *)v15, (int)v9);
    v4 = *(int **)v10;
    v11 = *((_DWORD *)v10 + 1);
  }
  v17 = v4;
  v18 = v11;
  DName::operator+=((DName *)&v17, 62);
  v12 = *dword_10482860 == 36;
  v19 = v17;
  v20 = v18;
  if ( v12 )
  {
    ++dword_10482860;
  }
  else
  {
    DName::operator+=((DName *)&v17, 94);
    v19 = v17;
    v20 = v18;
  }
  if ( *dword_10482860 )
    ++dword_10482860;
  else
    DName::operator+=(&v19, 1);
  result = a1;
  v13 = v20 | 0x4000;
  *a1 = v19;
  a1[1] = v13;
  return result;
}
