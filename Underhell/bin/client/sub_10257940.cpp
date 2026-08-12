int *__thiscall sub_10257940(int *this, int (***a2)(void))
{
  unsigned int *v3; // edi
  int v4; // edi
  unsigned int *v5; // edi

  sub_10242C50((int)this);
  *this = (int)&vgui::ClickPanel::`vftable';
  if ( !byte_1047F60B )
  {
    byte_1047F60B = 1;
    v3 = sub_10242540("ClickPanel");
    v3[7] = (unsigned int)sub_10257280;
    v3[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047F60C )
  {
    byte_1047F60C = 1;
    v4 = sub_102484C0((int)"ClickPanel");
    *(_DWORD *)(v4 + 24) = sub_10257280;
    *(_DWORD *)(v4 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047F60D )
  {
    byte_1047F60D = 1;
    v5 = sub_10242580("ClickPanel");
    v5[17] = (unsigned int)sub_10257280;
    v5[6] = (unsigned int)sub_10242580("Panel");
  }
  this[52] = 0;
  sub_10236510(this, (int (__thiscall ***)(_DWORD))a2);
  sub_10241380(this, a2);
  sub_10237030(this, 14);
  sub_10239D10(this, 0);
  sub_10239D30(this, 0);
  return this;
}
