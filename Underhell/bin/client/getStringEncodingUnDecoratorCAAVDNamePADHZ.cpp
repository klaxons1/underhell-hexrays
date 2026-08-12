int __cdecl UnDecorator::getStringEncoding(int a1, char *a2)
{
  char v2; // al
  char v3; // al
  char *v4; // eax
  char v5; // cl
  int result; // eax
  _BYTE v7[8]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v8[2]; // [esp+8h] [ebp-8h] BYREF

  DName::DName((DName *)v8, a2);
  v2 = *dword_10482860++;
  if ( v2 == 64 && (v3 = *dword_10482860, ++dword_10482860, v3 == 95) )
  {
    ++dword_10482860;
    UnDecorator::getDimension((int)v7, 0);
    UnDecorator::getDimension((int)v7, 0);
    v4 = dword_10482860;
    v5 = *dword_10482860;
    if ( !*dword_10482860 )
      goto LABEL_7;
    do
    {
      if ( v5 == 64 )
        break;
      dword_10482860 = ++v4;
      v5 = *v4;
    }
    while ( *v4 );
    if ( *v4 )
    {
      dword_10482860 = v4 + 1;
      result = a1;
      *(_DWORD *)a1 = v8[0];
      *(_DWORD *)(a1 + 4) = v8[1];
    }
    else
    {
LABEL_7:
      dword_10482860 = v4 - 1;
      DName::DName((int **)a1, 1);
      return a1;
    }
  }
  else
  {
    result = a1;
    *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 4) = 2;
  }
  return result;
}
