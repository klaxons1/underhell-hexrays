int __cdecl UnDecorator::getCallingConvention(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  char *v8; // eax
  int result; // eax
  int v10; // [esp+0h] [ebp-8h] BYREF
  unsigned int v11; // [esp+4h] [ebp-4h]

  if ( *dword_10482860 )
  {
    v1 = *dword_10482860++ - 65;
    if ( v1 <= 0xE )
    {
      v10 = 0;
      v11 = v11 & 0xFFFF0000 | 2;
      if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 )
      {
        v2 = v1 & 0xFFFFFFFE;
        if ( !v2 )
        {
          v8 = (char *)UnDecorator::UScore(1);
          goto LABEL_18;
        }
        v3 = v2 - 2;
        if ( !v3 )
        {
          v8 = (char *)UnDecorator::UScore(2);
          goto LABEL_18;
        }
        v4 = v3 - 2;
        if ( !v4 )
        {
          v8 = (char *)UnDecorator::UScore(4);
          goto LABEL_18;
        }
        v5 = v4 - 2;
        if ( !v5 )
        {
          v8 = (char *)UnDecorator::UScore(3);
          goto LABEL_18;
        }
        v6 = v5 - 2;
        if ( !v6 )
        {
          v8 = (char *)UnDecorator::UScore(5);
          goto LABEL_18;
        }
        v7 = v6 - 4;
        if ( !v7 )
        {
          v8 = (char *)UnDecorator::UScore(6);
          goto LABEL_18;
        }
        if ( v7 == 2 )
        {
          v8 = (char *)UnDecorator::UScore(7);
LABEL_18:
          DName::operator=((DName *)&v10, v8);
        }
      }
      result = a1;
      *(_DWORD *)a1 = v10;
      *(_DWORD *)(a1 + 4) = v11;
      return result;
    }
    result = a1;
    *(_DWORD *)(a1 + 4) &= 0xFFFF00FF;
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 4) = 2;
  }
  else
  {
    DName::DName((int **)a1, 1);
    return a1;
  }
  return result;
}
