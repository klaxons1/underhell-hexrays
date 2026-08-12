int *__thiscall sub_102605B0(int *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // esi
  int v5; // esi
  unsigned int *v6; // esi

  sub_10243490(this, a2, Source);
  *this = (int)&vgui::Divider::`vftable';
  if ( !byte_104803B4 )
  {
    byte_104803B4 = 1;
    v4 = sub_10242540("Divider");
    v4[7] = (unsigned int)sub_102604F0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_104803C0 )
  {
    byte_104803C0 = 1;
    v5 = sub_102484C0((int)"Divider");
    *(_DWORD *)(v5 + 24) = sub_102604F0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_104803C1 )
  {
    byte_104803C1 = 1;
    v6 = sub_10242580("Divider");
    v6[17] = (unsigned int)sub_102604F0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, 128, 2);
  return this;
}
