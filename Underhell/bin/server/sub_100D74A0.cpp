int __thiscall sub_100D74A0(void *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  const char *v6; // esi
  char *i; // eax
  char Str[260]; // [esp+4h] [ebp-104h] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  sub_104299C0(Str, v4, 0x104u);
  v5 = strchr(Str, 32);
  if ( !v5 )
    return Warning(
             "AddOutput input fired with bad string. Format: <output name> <targetname>,<inputname>,<parameter>,<delay>,<"
             "max times to fire (-1 == infinite)>\n");
  v6 = v5 + 1;
  *v5 = 0;
  for ( i = strchr(v5 + 1, 58); i; i = strchr(v6, 58) )
    *i = 44;
  return (*(int (__thiscall **)(void *, char *, const char *))(*(_DWORD *)this + 128))(this, Str, v6);
}
