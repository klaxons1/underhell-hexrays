int __cdecl sub_1023F930(char *String1)
{
  int result; // eax
  char **v2; // esi

  if ( !String1 )
    return 75;
  v2 = (char **)&unk_1064D1F0;
  do
  {
    if ( !sub_10429290(String1, v2[1]) )
      return (int)*v2;
    v2 += 2;
  }
  while ( (int)v2 < (int)&dword_1064D2E0 );
  if ( sub_104292D0(String1, "SNDLVL_", 7) || (result = atoi(String1 + 7), (unsigned int)(result - 1) > 0xB3) )
  {
    DevMsg("CSoundEmitterSystem:  Unknown sound level %s\n", String1);
    return 75;
  }
  return result;
}
