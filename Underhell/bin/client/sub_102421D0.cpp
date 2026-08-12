bool (__cdecl **__thiscall sub_102421D0(
        bool (__cdecl **this)(const char **a1, const char **a2)))(const char **a1, const char **a2)
{
  bool v2; // zf

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = (bool (__cdecl *)(const char **, const char **))-1;
  this[6] = (bool (__cdecl *)(const char **, const char **))-1;
  this[5] = 0;
  this[7] = (bool (__cdecl *)(const char **, const char **))-1;
  v2 = *this == 0;
  this[8] = this[1];
  if ( v2 )
    *this = sub_10002020;
  sub_1022FEB0((int)(this + 9), 0x48u, 32, 1, "CPanelKeyBindingMapDictionary::m_PanelKeyBindingMapPool", 0);
  sub_102402C0(this);
  return this;
}
