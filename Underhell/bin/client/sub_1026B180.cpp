int *__thiscall sub_1026B180(int *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490(this, a2, Source);
  *this = (int)&vgui::MenuSeparator::`vftable';
  if ( !byte_1048050F )
  {
    byte_1048050F = 1;
    v4 = sub_10242540("MenuSeparator");
    v4[7] = (unsigned int)sub_1026A020;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10480510 )
  {
    byte_10480510 = 1;
    v5 = sub_102484C0((int)"MenuSeparator");
    *(_DWORD *)(v5 + 24) = sub_1026A020;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10480511 )
  {
    byte_10480511 = 1;
    v6 = sub_10242580("MenuSeparator");
    v6[17] = (unsigned int)sub_1026A020;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10239D30(this, 1);
  sub_10239D10(this, 1);
  sub_10239CF0(this, 0);
  return this;
}
