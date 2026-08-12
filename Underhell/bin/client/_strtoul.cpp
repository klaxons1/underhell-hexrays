unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  if ( dword_10481B60 )
    return strtoxl(0, String, (const char **)EndPtr, Radix, 1);
  else
    return strtoxl((struct localeinfo_struct *)&off_103FE2EC, String, (const char **)EndPtr, Radix, 1);
}
