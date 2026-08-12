char __thiscall sub_1017BF60(int this, char *String1, float String)
{
  if ( _stricmp(String1, "startvalue") )
    return sub_100D7750((_DWORD *)this, String1, (char *)LODWORD(String));
  String = (float)atoi((const char *)LODWORD(String));
  sub_1010C270((float *)(this + 812), 1, (__int16 *)&String);
  return 1;
}
