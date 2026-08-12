int __stdcall sub_100CBF00(int a1)
{
  char *v1; // eax
  char *i; // esi
  char *v3; // edi
  char Destination[4096]; // [esp+8h] [ebp-1800h] BYREF
  char Str[2048]; // [esp+1008h] [ebp-800h] BYREF

  v1 = (char *)sub_1022CF00(a1);
  sub_102282F0(Str, v1, 0x800u);
  for ( i = strstr(Str, "("); i; i = strstr(Str, "(") )
  {
    v3 = strstr(i, ")");
    if ( !v3 )
      break;
    sub_102282F0(Destination, Str, i - Str + 1);
    sub_10228100((int)Destination, v3 + 1, 4096, -1);
    sub_102282F0(Str, Destination, 0x800u);
  }
  return sub_1022D0A0(Str);
}
