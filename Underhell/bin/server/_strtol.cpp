int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_107011CC )
    return strtoxl(0, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1068F1D4, String, (const char **)EndPtr, Radix, 0);
}
