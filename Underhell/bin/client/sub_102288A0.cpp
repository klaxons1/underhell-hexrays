char __cdecl sub_102288A0(char *String1, size_t BufferCount)
{
  int v2; // eax
  char v3; // cl
  bool v4; // zf
  char v5; // cl

  if ( !*String1 || !_stricmp(String1, "./") || !_stricmp(String1, ".\\") )
    return 0;
  v2 = strlen(String1);
  v3 = String1[v2 - 1];
  if ( v3 == 92 || v3 == 47 )
    --v2;
  v4 = v2 == 0;
  if ( v2 <= 0 )
  {
LABEL_12:
    if ( v4 )
    {
      sub_10228370(String1, BufferCount, ".%c", 92);
      return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = String1[v2 - 1];
      if ( v5 == 92 || v5 == 47 )
        break;
      if ( --v2 <= 0 )
      {
        v4 = v2 == 0;
        goto LABEL_12;
      }
    }
    String1[v2] = 0;
    sub_10228240(String1, 92);
  }
  return 1;
}
