int __cdecl UnDecorator::getDimension(int a1, char a2)
{
  char *v2; // ecx
  char *v3; // ebx
  char v4; // al
  int result; // eax
  unsigned __int64 v6; // rax
  DName *v7; // eax
  DName *v8; // eax
  int v9; // esi
  unsigned int v10; // edi
  char v11; // al
  DName *v12; // eax
  DName *v13; // eax
  _BYTE v14[8]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v15[8]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v16[8]; // [esp+14h] [ebp-8h] BYREF

  v2 = dword_10482860;
  v3 = 0;
  if ( *dword_10482860 == 81 )
  {
    v2 = dword_10482860 + 1;
    v3 = "`non-type-template-parameter";
    ++dword_10482860;
  }
  v4 = *v2;
  if ( !*v2 )
  {
    DName::DName((int **)a1, 1);
    return a1;
  }
  if ( v4 < 48 || v4 > 57 )
  {
    v9 = 0;
    v10 = 0;
    while ( v4 != 64 )
    {
      if ( !v4 )
      {
        DName::DName((int **)a1, 1);
        return a1;
      }
      if ( v4 < 65 || v4 > 80 )
        goto LABEL_18;
      v10 = (16 * __PAIR64__(v10, v9) + v4 - 65) >> 32;
      ++v2;
      v9 = 16 * v9 + v4 - 65;
      dword_10482860 = v2;
      v4 = *v2;
    }
    v11 = *v2;
    dword_10482860 = v2 + 1;
    if ( v11 != 64 )
    {
LABEL_18:
      result = a1;
      *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 4) = 2;
      return result;
    }
    if ( a2 )
    {
      if ( !v3 )
      {
        v13 = DName::DName((DName *)v16, __SPAIR64__(v10, v9));
LABEL_28:
        *(_DWORD *)a1 = *(_DWORD *)v13;
        *(_DWORD *)(a1 + 4) = *((_DWORD *)v13 + 1);
        return a1;
      }
      v12 = DName::DName((DName *)v14, __SPAIR64__(v10, v9));
    }
    else
    {
      if ( !v3 )
      {
        v13 = DName::DName((DName *)v16, __PAIR64__(v10, v9));
        goto LABEL_28;
      }
      v12 = DName::DName((DName *)v14, __PAIR64__(v10, v9));
    }
    v13 = operator+((DName *)v15, v3, (int)v12);
    goto LABEL_28;
  }
  v6 = *v2 - 47;
  dword_10482860 = v2 + 1;
  if ( v3 )
  {
    v7 = DName::DName((DName *)v16, v6);
    v8 = operator+((DName *)v15, v3, (int)v7);
  }
  else
  {
    v8 = DName::DName((DName *)v14, v6);
  }
  *(_DWORD *)a1 = *(_DWORD *)v8;
  *(_DWORD *)(a1 + 4) = *((_DWORD *)v8 + 1);
  return a1;
}
