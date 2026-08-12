int __usercall _setlocale_get_all@<eax>(_DWORD *a1@<esi>)
{
  int result; // eax
  char *v2; // edi
  const char **v3; // eax
  const char *v4; // [esp-8h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  const char **v7; // [esp+Ch] [ebp-8h]
  char **v8; // [esp+10h] [ebp-4h]

  v6 = 1;
  result = sub_100DDA40(853);
  v5 = result;
  if ( result )
  {
    v2 = (char *)(result + 4);
    *(_BYTE *)(result + 4) = 0;
    *(_DWORD *)result = 1;
    _strcats((char *)(result + 4), 0x351u, 3);
    v8 = off_103AD6A4;
    v7 = (const char **)(a1 + 22);
    do
    {
      if ( strcat_s(v2, 0x351u, ";") )
        _invoke_watson(0, 0, 0, 0, 0);
      v3 = v7;
      v4 = v7[4];
      v7 += 4;
      if ( strcmp(*v3, v4) )
        v6 = 0;
      v8 += 3;
      _strcats(v2, 0x351u, 3);
    }
    while ( (int)v8 < (int)off_103AD6D4 );
    if ( v6 )
    {
      sub_10034930(v5);
      if ( a1[20] && !InterlockedDecrement((volatile LONG *)a1[20]) )
        sub_10034930(a1[20]);
      if ( a1[21] && !InterlockedDecrement((volatile LONG *)a1[21]) )
        sub_10034930(a1[21]);
      result = a1[26];
      a1[21] = 0;
      a1[19] = 0;
      a1[20] = 0;
      a1[18] = 0;
    }
    else
    {
      if ( a1[20] && !InterlockedDecrement((volatile LONG *)a1[20]) )
        sub_10034930(a1[20]);
      if ( a1[21] )
      {
        if ( !InterlockedDecrement((volatile LONG *)a1[21]) )
          sub_10034930(a1[21]);
      }
      a1[21] = 0;
      a1[19] = 0;
      a1[20] = v5;
      a1[18] = v2;
      return (int)v2;
    }
  }
  return result;
}
