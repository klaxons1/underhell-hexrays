int __thiscall sub_102609E0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_1025D2A0((_DWORD *)this, a2, Source, Locale);
  *(_DWORD *)this = &vgui::ExpandButton::`vftable';
  if ( !byte_104803E8 )
  {
    byte_104803E8 = 1;
    v4 = sub_10242540("ExpandButton");
    v4[7] = (unsigned int)sub_102606D0;
    v4[6] = (unsigned int)sub_10242540("ToggleButton");
  }
  if ( !byte_104803F4 )
  {
    byte_104803F4 = 1;
    v5 = sub_102484C0((int)"ExpandButton");
    *(_DWORD *)(v5 + 24) = sub_102606D0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"ToggleButton");
  }
  if ( !byte_104803F5 )
  {
    byte_104803F5 = 1;
    v6 = sub_10242580("ExpandButton");
    v6[17] = (unsigned int)sub_102606D0;
    v6[6] = (unsigned int)sub_10242580("ToggleButton");
  }
  sub_10260990((void *)(this + 375));
  *(_DWORD *)(this + 384) = 0;
  *(_DWORD *)(this + 380) = 0;
  *(_BYTE *)(this + 376) = 1;
  return this;
}
