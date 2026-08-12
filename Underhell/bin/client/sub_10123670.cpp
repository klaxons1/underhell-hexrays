int __cdecl sub_10123670(char *String1)
{
  int result; // eax
  char **v2; // esi

  if ( !String1 )
    return 75;
  v2 = (char **)&unk_103E5EF0;
  do
  {
    if ( !sub_10227C40(String1, v2[1]) )
      return (int)*v2;
    v2 += 2;
  }
  while ( (int)v2 < (int)&unk_103E5FE0 );
  if ( sub_10227C80(String1, "SNDLVL_", 7) || (result = atoi(String1 + 7), (unsigned int)(result - 1) > 0xB3) )
  {
    DevMsg("CSoundEmitterSystem:  Unknown sound level %s\n", String1);
    return 75;
  }
  return result;
}
