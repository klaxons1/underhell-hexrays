char __thiscall sub_10280D70(_DWORD *this, char *String1, char *a3)
{
  int v4; // eax

  if ( String1 != "texture" && _stricmp(String1, "texture") )
    return sub_100D7750(this, String1, a3);
  v4 = sub_1025EE70(a3, 1);
  this[200] = v4;
  if ( v4 < 0 )
    Warning("Can't find decal %s\n", a3);
  return 1;
}
