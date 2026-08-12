int __thiscall sub_10278700(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::CTreeViewListControl::`vftable';
  if ( !byte_104813B8 )
  {
    byte_104813B8 = 1;
    v4 = sub_10242540("CTreeViewListControl");
    v4[7] = (unsigned int)sub_10277FF0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_104813B9 )
  {
    byte_104813B9 = 1;
    v5 = sub_102484C0((int)"CTreeViewListControl");
    *(_DWORD *)(v5 + 24) = sub_10277FF0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_104813BA )
  {
    byte_104813BA = 1;
    v6 = sub_10242580("CTreeViewListControl");
    v6[17] = (unsigned int)sub_10277FF0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 240) = 0;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 208) = 0;
  *(_BYTE *)(this + 260) = -1;
  *(_BYTE *)(this + 261) = -1;
  *(_BYTE *)(this + 262) = -1;
  *(_BYTE *)(this + 263) = -1;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 20;
  sub_10239D50((_WORD *)this, 1);
  return this;
}
