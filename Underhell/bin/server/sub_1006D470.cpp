int __stdcall sub_1006D470(int a1)
{
  const char **v1; // ecx
  const char *v2; // eax

  v1 = (const char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) == 2 )
  {
    v2 = *v1;
    if ( !*v1 )
      return sub_1006D050((int)&dword_10692F70, String, 1, 1);
  }
  else
  {
    v2 = (const char *)sub_1010D460(v1);
  }
  return sub_1006D050((int)&dword_10692F70, v2, 1, 1);
}
