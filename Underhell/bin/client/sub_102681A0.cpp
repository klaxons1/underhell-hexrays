int __thiscall sub_102681A0(int this, int (__thiscall ***a2)(_DWORD))
{
  unsigned int *v3; // edi
  int v4; // edi
  unsigned int *v5; // edi

  sub_1024B100((int *)this, a2, 0, Locale);
  *(_DWORD *)this = &vgui::ListViewItem::`vftable';
  if ( !byte_104804B3 )
  {
    byte_104804B3 = 1;
    v3 = sub_10242540("ListViewItem");
    v3[7] = (unsigned int)sub_10267E20;
    v3[6] = (unsigned int)sub_10242540("Label");
  }
  if ( !byte_104804B4 )
  {
    byte_104804B4 = 1;
    v4 = sub_102484C0((int)"ListViewItem");
    *(_DWORD *)(v4 + 24) = sub_10267E20;
    *(_DWORD *)(v4 + 20) = sub_102484C0((int)"Label");
  }
  if ( !byte_104804B5 )
  {
    byte_104804B5 = 1;
    v5 = sub_10242580("ListViewItem");
    v5[17] = (unsigned int)sub_10267E20;
    v5[6] = (unsigned int)sub_10242580("Label");
  }
  *(_DWORD *)(this + 287) = 0;
  *(_DWORD *)(this + 291) = 0;
  *(_DWORD *)(this + 295) = 0;
  *(_DWORD *)(this + 299) = 0;
  *(_DWORD *)(this + 303) = 0;
  *(_DWORD *)(this + 307) = 0;
  *(_DWORD *)(this + 316) = a2;
  *(_DWORD *)(this + 312) = 0;
  *(_BYTE *)(this + 320) = 0;
  sub_10239D10((_WORD *)this, 1);
  return this;
}
