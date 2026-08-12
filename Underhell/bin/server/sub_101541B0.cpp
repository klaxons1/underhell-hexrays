char __cdecl sub_101541B0(int a1)
{
  int v1; // edi
  char *v2; // eax
  int i; // ecx
  char *v4; // eax
  int v5; // esi
  const char *v6; // eax
  char String1[260]; // [esp+Ch] [ebp-1A4h] BYREF
  char SubStr[64]; // [esp+110h] [ebp-A0h] BYREF
  char Str[64]; // [esp+150h] [ebp-60h] BYREF
  char String[32]; // [esp+190h] [ebp-20h] BYREF

  Str[0] = 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = (char *)sub_104292D0(a1, off_10627B18[2 * v1], strlen(off_10627B18[2 * v1]));
    if ( !v2 )
      break;
    if ( (unsigned int)++v1 >= 0x39 )
      goto LABEL_12;
  }
  sub_104299C0(Str, (&off_10627B1C)[2 * v1], 0x40u);
  for ( i = 0; i < 64; (_BYTE)v2 == 10 || (_BYTE)v2 == 13 ? (Str[i] = 0) : ++i )
  {
    LOBYTE(v2) = Str[i];
    if ( !(_BYTE)v2 )
      break;
  }
LABEL_12:
  if ( Str[0] )
  {
    _strlwr(Str);
    LOBYTE(v2) = sub_101534B0(String1, 0x104u);
    if ( (_BYTE)v2 )
    {
      sub_10429A00(SubStr, 0x40u, "#%s_chapter", (char)String1);
      v2 = strstr(Str, SubStr);
      if ( v2 )
      {
        sub_104299C0(String, &v2[strlen(SubStr)], 0x20u);
        v4 = strstr(String, "_title");
        if ( v4 )
          *v4 = 0;
        v5 = atoi(String);
        if ( !_stricmp(String1, "hl2") )
        {
          if ( !_stricmp(String, "9a") )
          {
            v5 = 10;
          }
          else if ( v5 > 9 )
          {
            ++v5;
          }
        }
        if ( (dword_106B354C & 0x1000) != 0 )
        {
          v6 = "FCVAR_NEVER_AS_STRING";
        }
        else
        {
          v6 = *(const char **)(dword_106B3554 + 36);
          if ( !v6 )
            v6 = ::String;
        }
        v2 = (char *)atoi(v6);
        if ( (int)v2 < v5 )
          LOBYTE(v2) = sub_10110F90(&dword_106B3550);
        dword_10627B14 = v5;
      }
    }
  }
  return (char)v2;
}
