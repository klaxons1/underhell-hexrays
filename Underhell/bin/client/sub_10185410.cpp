char *__thiscall sub_10185410(char *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi

  sub_10243490(a2, Source);
  *(_DWORD *)this = &CIconPanel::`vftable';
  if ( !byte_10445510 )
  {
    byte_10445510 = 1;
    v4 = sub_10242540("CIconPanel");
    *(_DWORD *)(v4 + 28) = sub_10185240;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10445511 )
  {
    byte_10445511 = 1;
    v5 = sub_102484C0("CIconPanel");
    *(_DWORD *)(v5 + 24) = sub_10185240;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10445512 )
  {
    byte_10445512 = 1;
    v6 = sub_10242580("CIconPanel");
    *(_DWORD *)(v6 + 68) = sub_10185240;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101853B0();
  *(_DWORD *)(this + 342) = 0;
  this[212] = 0;
  *((_DWORD *)this + 52) = 0;
  this[340] = 0;
  return this;
}
