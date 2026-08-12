int __thiscall sub_1026FB60(int this, int (__thiscall ***a2)(_DWORD), char *Source, int a4, int a5, char a6)
{
  unsigned int *v7; // esi
  int v8; // esi
  unsigned int *v9; // esi

  sub_1025C780(this, a2, Source, a4, 0, 0);
  *(_DWORD *)this = &vgui::MenuItem::`vftable';
  if ( !byte_104805C4 )
  {
    byte_104805C4 = 1;
    v7 = sub_10242540("MenuItem");
    v7[7] = (unsigned int)sub_1026EC20;
    v7[6] = (unsigned int)sub_10242540("Button");
  }
  if ( !byte_104805D0 )
  {
    byte_104805D0 = 1;
    v8 = sub_102484C0((int)"MenuItem");
    *(_DWORD *)(v8 + 24) = sub_1026EC20;
    *(_DWORD *)(v8 + 20) = sub_102484C0((int)"Button");
  }
  if ( !byte_104805D1 )
  {
    byte_104805D1 = 1;
    v9 = sub_10242580("MenuItem");
    v9[17] = (unsigned int)sub_1026EC20;
    v9[6] = (unsigned int)sub_10242580("Button");
  }
  if ( !byte_104805DC )
  {
    byte_104805DC = 1;
    sub_1026F8F0((int)"MenuClose", (int)sub_10239240, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_104805DD )
  {
    byte_104805DD = 1;
    sub_1026F8F0((int)"ArmItem", (int)sub_1026F590, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_104805DE )
  {
    byte_104805DE = 1;
    sub_1026F8F0((int)"DisarmItem", (int)sub_1025CB70, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_104805DF )
  {
    byte_104805DF = 1;
    sub_1026F8F0((int)"KeyModeSet", (int)sub_1026F5A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  *(_BYTE *)(this + 376) = a6;
  *(_DWORD *)(this + 372) = a5;
  sub_1025AD80((_DWORD *)this, 2);
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 392) = 0;
  sub_1026F750((_DWORD *)this);
  return this;
}
