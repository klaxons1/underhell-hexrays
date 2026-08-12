int __cdecl sub_100BB130(int a1, char *String2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi

  if ( !a1 || !(unsigned __int8)sub_10245FE0(a1) )
    return 0;
  v3 = 0;
  if ( sub_10245270(a1) <= 0 )
  {
LABEL_7:
    v5 = sub_100BA820(a1, String2);
    if ( v5 == -1 )
    {
      return -1;
    }
    else if ( (unsigned __int8)sub_10245FE0(a1) )
    {
      if ( sub_10245910(a1) != dword_105FD4CC )
        sub_100BAD00(a1);
      if ( !*(_BYTE *)(a1 + 92) )
        sub_10246010(a1);
      return sub_100BAF90((_DWORD *)(a1 + 84), a1, v5, -1);
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
      v4 = sub_10245550(v3);
      if ( !_stricmp((const char *)(v4 + *(_DWORD *)(v4 + 4)), String2) )
        return v3;
      if ( ++v3 >= sub_10245270(a1) )
        goto LABEL_7;
    }
  }
}
