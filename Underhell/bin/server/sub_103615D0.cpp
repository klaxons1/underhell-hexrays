bool __userpurge sub_103615D0@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  const char **v4; // ecx
  const char *v5; // eax

  sub_10361330(a1, a2, 0);
  v4 = (const char **)(a3 + 8);
  if ( *(_DWORD *)(a3 + 24) == 2 )
  {
    v5 = *v4;
    if ( !*v4 )
      return sub_10360BB0(a1, a2, COERCE_FLOAT(String), 0);
  }
  else
  {
    v5 = sub_1010D460((int)v4);
  }
  return sub_10360BB0(a1, a2, *(float *)&v5, 0);
}
