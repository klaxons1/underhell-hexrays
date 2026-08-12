int __cdecl UnDecorator::getScopedName(int a1)
{
  _DWORD *ZName; // eax
  int v2; // eax
  _DWORD *Scope; // eax
  DName *v4; // eax
  DName *v5; // eax
  int **v6; // eax
  DName *v7; // eax
  DName *v8; // eax
  _BYTE v10[8]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-10h] BYREF
  int *v12[2]; // [esp+1Ch] [ebp-8h] BYREF

  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
  *(_DWORD *)a1 = 0;
  ZName = UnDecorator::getZName(v12, 1, 0);
  *(_DWORD *)a1 = *ZName;
  v2 = ZName[1];
  *(_DWORD *)(a1 + 4) = v2;
  if ( !(_BYTE)v2 && *dword_10482860 )
  {
    if ( *dword_10482860 == 64 )
    {
LABEL_6:
      ++dword_10482860;
      return a1;
    }
    Scope = (_DWORD *)UnDecorator::getScope(v10);
    v4 = DName::operator+(Scope, (DName *)v11, "::");
    v5 = DName::operator+(v4, (DName *)v12, a1);
    *(_DWORD *)a1 = *(_DWORD *)v5;
    *(_DWORD *)(a1 + 4) = *((_DWORD *)v5 + 1);
  }
  if ( *dword_10482860 == 64 )
    goto LABEL_6;
  if ( *dword_10482860 )
  {
    *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
    *(_BYTE *)(a1 + 4) = 2;
    *(_DWORD *)a1 = 0;
  }
  else if ( *(_DWORD *)a1 )
  {
    v6 = DName::DName(v12, 1);
    v7 = DName::operator+(v6, (DName *)v11, "::");
    v8 = DName::operator+(v7, (DName *)v10, a1);
    *(_DWORD *)a1 = *(_DWORD *)v8;
    *(_DWORD *)(a1 + 4) = *((_DWORD *)v8 + 1);
  }
  else
  {
    DName::operator=((int **)a1, 1);
  }
  return a1;
}
