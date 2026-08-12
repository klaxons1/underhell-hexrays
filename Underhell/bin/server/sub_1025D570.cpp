int __thiscall sub_1025D570(int this)
{
  const char *v2; // edi
  int result; // eax

  v2 = (const char *)(this + 1092);
  if ( (const char *)(this + 1092) == String || !_stricmp((const char *)(this + 1092), String) )
    Msg("a trigger_changelevel doesn't have a map");
  if ( (const char *)(this + 1124) == String || !_stricmp((const char *)(this + 1124), String) )
    Msg("trigger_changelevel to %s doesn't have a landmark", v2);
  sub_102575A0(this);
  result = *(_DWORD *)(this + 248) >> 1;
  if ( (*(_DWORD *)(this + 248) & 2) == 0 )
    *(_DWORD *)(this + 196) = sub_1025C8C0;
  return result;
}
