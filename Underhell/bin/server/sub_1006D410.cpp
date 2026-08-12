int __stdcall sub_1006D410(int a1)
{
  const char **v1; // ecx
  const char *v2; // ecx
  const char *v4; // eax

  v1 = (const char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) == 2 )
  {
    v2 = *v1;
    if ( v2 )
      return sub_1006D050((int)&dword_10692F70, v2, 0, 0);
    else
      return sub_1006D050((int)&dword_10692F70, String, 0, 0);
  }
  else
  {
    v4 = (const char *)sub_1010D460(v1);
    return sub_1006D050((int)&dword_10692F70, v4, 0, 0);
  }
}
