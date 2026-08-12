DName *__cdecl UnDecorator::getVfTableType(DName *a1, _DWORD *a2)
{
  int v2; // eax
  DName *v3; // eax
  int v4; // eax
  _BYTE *v5; // eax
  char *v6; // eax
  int **v7; // eax
  int Scope; // [esp-4h] [ebp-2Ch]
  int *v10[2]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v11[8]; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-10h] BYREF
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h] BYREF
  int v15; // [esp+24h] [ebp-4h]

  *(_DWORD *)a1 = *a2;
  v2 = a2[1];
  *((_DWORD *)a1 + 1) = v2;
  if ( (char)v2 <= 1 )
  {
    if ( *dword_10482860 )
    {
      UnDecorator::getDataIndirectType((int)&v12);
      v14 = v12;
      v15 = v13;
      DName::operator+=((DName *)&v14, 32);
      v3 = DName::operator+(&v14, (DName *)v11, (int)a1);
      *(_DWORD *)a1 = *(_DWORD *)v3;
      v4 = *((_DWORD *)v3 + 1);
      *((_DWORD *)a1 + 1) = v4;
      if ( (char)v4 <= 1 )
      {
        if ( *dword_10482860 == 64 )
          goto LABEL_19;
        DName::operator+=(a1, "{for ");
        while ( *((char *)a1 + 4) <= 1 && *dword_10482860 && *dword_10482860 != 64 )
        {
          Scope = UnDecorator::getScope(v11);
          v5 = DName::operator=(v10, 96);
          DName::operator+(v5, (DName *)&v12, Scope);
          v14 = v12;
          v15 = v13;
          DName::operator+=((DName *)&v14, 39);
          DName::operator+=(a1, (int)&v14);
          v6 = dword_10482860;
          if ( *dword_10482860 == 64 )
            v6 = ++dword_10482860;
          if ( *((char *)a1 + 4) > 1 )
            goto LABEL_18;
          if ( *v6 != 64 )
            DName::operator+=(a1, "s ");
        }
        if ( *((char *)a1 + 4) <= 1 )
        {
          if ( !*dword_10482860 )
            DName::operator+=((int **)a1, 1);
          DName::operator+=(a1, 125);
        }
LABEL_18:
        if ( *dword_10482860 == 64 )
LABEL_19:
          ++dword_10482860;
      }
    }
    else
    {
      v7 = DName::DName(v10, 1);
      DName::operator+(v7, (DName *)&v12, (int)a1);
      *(_DWORD *)a1 = v12;
      *((_DWORD *)a1 + 1) = v13;
    }
  }
  return a1;
}
