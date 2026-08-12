char __stdcall sub_100CBDD0(int a1, char *SubStr, char *Source)
{
  const char *v3; // eax
  char *v5; // eax
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // ebx
  size_t v9; // esi
  char Destination[4095]; // [esp+8h] [ebp-1804h] BYREF
  char Str[2051]; // [esp+1008h] [ebp-804h] BYREF
  char v13; // [esp+180Bh] [ebp-1h]

  v13 = 0;
  v3 = (const char *)sub_1022CF00(a1);
  if ( !strstr(v3, SubStr) )
    return 0;
  v5 = (char *)sub_1022CF00(a1);
  sub_102282F0(Str, v5, 0x800u);
  v6 = strlen(SubStr);
  v7 = strstr(Str, SubStr);
  if ( v7 )
  {
    v8 = &Str[v6 - 1];
    v13 = 1;
    do
    {
      v9 = v7 - Str + 1;
      sub_102282F0(Destination, Str, v9);
      sub_10228100((int)Destination, Source, 4096, -1);
      sub_10228100((int)Destination, &v8[v9], 4096, -1);
      sub_102282F0(Str, Destination, 0x800u);
      v7 = strstr(Str, SubStr);
    }
    while ( v7 );
  }
  sub_1022D0A0(Str);
  return v13;
}
