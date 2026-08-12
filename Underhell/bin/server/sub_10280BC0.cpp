char __thiscall sub_10280BC0(_DWORD *this, char *String1, char *a3)
{
  char *v4; // edi
  _DWORD *v5; // eax
  bool v6; // sf

  if ( String1 != "texture" && _stricmp(String1, "texture") )
    return sub_100D7750(this, String1, a3);
  v4 = a3;
  this[200] = sub_1025EE70(a3, 1);
  v5 = sub_10162BE0(&a3, v4);
  v6 = (int)this[200] < 0;
  this[202] = *v5;
  if ( v6 )
    Warning("Can't find decal %s\n", v4);
  return 1;
}
