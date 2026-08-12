int *__thiscall sub_1026E0B0(int *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490(this, a2, Source);
  *this = (int)&vgui::MenuBar::`vftable';
  if ( !byte_10480558 )
  {
    byte_10480558 = 1;
    v4 = sub_10242540("MenuBar");
    v4[7] = (unsigned int)sub_1026DAE0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10480559 )
  {
    byte_10480559 = 1;
    v5 = sub_102484C0((int)"MenuBar");
    *(_DWORD *)(v5 + 24) = sub_1026DAE0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1048055A )
  {
    byte_1048055A = 1;
    v6 = sub_10242580("MenuBar");
    v6[17] = (unsigned int)sub_1026DAE0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1048056C )
  {
    byte_1048056C = 1;
    sub_1026DFE0((int)"MenuClose", (int)sub_102578F0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1026E060(this + 52);
  this[53] = 0;
  this[54] = 0;
  this[55] = 0;
  this[56] = 0;
  this[57] = 0;
  this[58] = 0;
  return this;
}
