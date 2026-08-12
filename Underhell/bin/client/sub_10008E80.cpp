int __cdecl sub_10008E80(int a1, char *String2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi

  if ( !a1 || !(unsigned __int8)sub_101282A0(a1) )
    return 0;
  v3 = 0;
  if ( sub_10126D70(a1) <= 0 )
  {
LABEL_7:
    v5 = sub_100088F0(a1, String2);
    if ( v5 == -1 )
    {
      return -1;
    }
    else if ( (unsigned __int8)sub_101282A0(a1) )
    {
      if ( sub_10127D20(a1) != dword_103D6278 )
        sub_10008BB0(a1);
      if ( !*(_BYTE *)(a1 + 92) )
        sub_101282D0(a1);
      return sub_10008CE0((_DWORD *)(a1 + 84), a1, v5, -1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = sub_10127960(v3);
      if ( !_stricmp((const char *)(v4 + *(_DWORD *)(v4 + 4)), String2) )
        return v3;
      if ( ++v3 >= sub_10126D70(a1) )
        goto LABEL_7;
    }
  }
}
