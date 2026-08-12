int __thiscall sub_100697E0(_DWORD *this)
{
  int i; // edi
  const char *v3; // eax
  int v4; // eax
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax

  Msg("\n------- CLIENT SOUNDSCAPES -------\n");
  for ( i = 0; i < this[10]; ++i )
  {
    v3 = (const char *)sub_10229A00(*(_DWORD *)(this[7] + 4 * i));
    Msg("- %d: %s\n", i, v3);
  }
  v4 = this[52];
  if ( v4 )
  {
    if ( v4 >= this[10] )
      v5 = 0;
    else
      v5 = (const char *)sub_10229A00(*(_DWORD *)(this[7] + 4 * v4));
    Msg("- PLAYING DEBUG SOUNDSCAPE: %d [%s]\n", this[52], v5);
  }
  v6 = this[37];
  if ( v6 >= this[10] )
    v7 = 0;
  else
    v7 = (const char *)sub_10229A00(*(_DWORD *)(this[7] + 4 * v6));
  Msg("- CURRENT SOUNDSCAPE: %d [%s]\n", this[37], v7);
  return Msg("----------------------------------\n\n");
}
