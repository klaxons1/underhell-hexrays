int __thiscall sub_10241860(_DWORD *this)
{
  _DWORD *v1; // ebx
  char *v2; // edi
  int v3; // esi
  int v4; // ebx
  const char *v5; // eax
  int i; // edi
  int v7; // edx
  int v8; // esi

  v1 = this;
  Msg("\n------- SERVER SOUNDSCAPES -------\n");
  v2 = (char *)(v1 + 3);
  v3 = (unsigned __int16)sub_10244CE0(v1 + 3);
  if ( v3 != (unsigned __int16)sub_10275C80(v1 + 3) )
  {
    do
    {
      v4 = sub_10244C80(v3);
      v5 = (const char *)sub_10244C30(v3);
      Msg("- %d: %s\n", v4, v5);
      v3 = (unsigned __int16)sub_10244CF0(v3);
    }
    while ( v3 != (unsigned __int16)sub_10275C80(v2) );
    v1 = this;
  }
  Msg("-------- SOUNDSCAPE ENTITIES -----\n");
  for ( i = 0; i < v1[8]; ++i )
  {
    v7 = v1[5];
    v8 = *(_DWORD *)(v7 + 4 * i);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(v7 + 4 * i));
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    Msg(
      "- %d: %s x:%.4f y:%.4f z:%.4f\n",
      i,
      *(const char **)(v8 + 828),
      *(float *)(v8 + 580),
      *(float *)(v8 + 584),
      *(float *)(v8 + 588));
  }
  return Msg("----------------------------------\n\n");
}
