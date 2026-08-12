_DWORD *__thiscall sub_1025D2A0(_DWORD *this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi

  sub_1025C5C0((int)this, a2, Source, a4, 0, 0);
  *this = &vgui::ToggleButton::`vftable';
  if ( !byte_1047FAEC )
  {
    byte_1047FAEC = 1;
    v5 = sub_10242540("ToggleButton");
    v5[7] = (unsigned int)sub_1025D130;
    v5[6] = (unsigned int)sub_10242540("Button");
  }
  if ( !byte_1047FAED )
  {
    byte_1047FAED = 1;
    v6 = sub_102484C0((int)"ToggleButton");
    *(_DWORD *)(v6 + 24) = sub_1025D130;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Button");
  }
  if ( !byte_1047FAEE )
  {
    byte_1047FAEE = 1;
    v7 = sub_10242580("ToggleButton");
    v7[17] = (unsigned int)sub_1025D130;
    v7[6] = (unsigned int)sub_10242580("Button");
  }
  *(_DWORD *)((char *)this + 367) = 0;
  sub_1025AD80(this, 1);
  return this;
}
