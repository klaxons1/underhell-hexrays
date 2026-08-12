int __cdecl UnDecorator::getDecoratedName(int a1)
{
  int result; // eax
  char *v2; // eax
  char *i; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  bool v7; // zf
  int *Scope; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+10h] [ebp-24h] BYREF
  int v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+18h] [ebp-1Ch] BYREF
  int v14; // [esp+1Ch] [ebp-18h]
  int v15; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+24h] [ebp-10h]
  int v17; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v18; // [esp+2Ch] [ebp-8h]
  BOOL v19; // [esp+30h] [ebp-4h]

  if ( (dword_10482870 & 0x2000) != 0 )
  {
    dword_10482870 &= ~0x2000u;
    UnDecorator::getDataType(&v11, 0);
    dword_10482870 |= 0x2000u;
LABEL_3:
    result = a1;
    *(_DWORD *)a1 = v11;
    *(_DWORD *)(a1 + 4) = v12;
    return result;
  }
  if ( *dword_10482860 != 63 )
  {
    if ( *dword_10482860 )
      goto LABEL_34;
    DName::DName((int **)a1, 1);
    return a1;
  }
  v2 = dword_10482860 + 1;
  dword_10482860 = v2;
  if ( *v2 == 63 && v2[1] == 63 )
  {
    UnDecorator::getDecoratedName(&v11);
    for ( i = dword_10482860; *i; dword_10482860 = i )
      ++i;
    goto LABEL_3;
  }
  UnDecorator::getSymbolName((DName *)&v17);
  v4 = v17;
  v5 = v18;
  v19 = v17 && (v18 & 0x200) != 0;
  v6 = (v18 >> 15) & 1;
  if ( (char)v18 > 1 )
    goto LABEL_16;
  if ( *dword_10482860 )
  {
    if ( *dword_10482860 != 64 )
    {
      UnDecorator::getScope(&v15);
      if ( v15 )
      {
        if ( byte_10482878 )
        {
          byte_10482878 = 0;
          v13 = v4;
          v14 = v5;
          DName::operator+=((DName *)&v13, (int)&v15);
          v7 = *dword_10482860 == 64;
          v4 = v13;
          v5 = v14;
          v17 = v13;
          v18 = v14;
          if ( v7 )
            goto LABEL_25;
          Scope = (int *)UnDecorator::getScope(&v11);
          v15 = *Scope;
          v16 = Scope[1];
          v9 = *Scope;
          v10 = Scope[1];
          v13 = v9;
          v14 = v10;
          DName::operator+=((DName *)&v13, "::");
          v11 = v13;
          v12 = v14;
          DName::operator+=((DName *)&v11, (int)&v17);
          v4 = v11;
          v5 = v12;
        }
        else
        {
          v11 = v15;
          v12 = v16;
          DName::operator+=((DName *)&v11, "::");
          v13 = v11;
          v14 = v12;
          DName::operator+=((DName *)&v13, (int)&v17);
          v4 = v13;
          v5 = v14;
        }
        v18 = v5;
        v17 = v4;
      }
    }
  }
LABEL_25:
  if ( v19 && v4 )
  {
    v5 |= 0x200u;
    v18 = v5;
  }
  if ( v6 )
  {
    v5 |= 0x8000u;
    v18 = v5;
  }
  if ( !v4 || (v5 & 0x1000) != 0 )
    goto LABEL_16;
  if ( *dword_10482860 )
  {
    if ( *dword_10482860 != 64 )
    {
LABEL_34:
      result = a1;
      *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 4) = 2;
      return result;
    }
    ++dword_10482860;
  }
  if ( (dword_10482870 & 0x1000) != 0 && !v19 && (v5 & 0x8000) == 0 )
  {
    v11 = 0;
    v12 &= 0xFFFF0000;
    UnDecorator::composeDeclaration((DName *)&v13, &v11);
LABEL_16:
    result = a1;
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v5;
    return result;
  }
  UnDecorator::composeDeclaration((DName *)a1, &v17);
  return a1;
}
