_DWORD *__thiscall sub_1012F550(_DWORD *this, int a2, char *Source)
{
  int v4; // esi
  int v5; // esi
  int v6; // esi

  sub_10249210(a2, Source);
  *this = &CAvatarImagePanel::`vftable';
  if ( !byte_10439404 )
  {
    byte_10439404 = 1;
    v4 = sub_10242540("CAvatarImagePanel");
    *(_DWORD *)(v4 + 28) = sub_1012F160;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::ImagePanel");
  }
  if ( !byte_10439405 )
  {
    byte_10439405 = 1;
    v5 = sub_102484C0("CAvatarImagePanel");
    *(_DWORD *)(v5 + 24) = sub_1012F160;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::ImagePanel");
  }
  if ( !byte_10439406 )
  {
    byte_10439406 = 1;
    v6 = sub_10242580("CAvatarImagePanel");
    *(_DWORD *)(v6 + 68) = sub_1012F160;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::ImagePanel");
  }
  sub_1012F4F0();
  this[60] = 0;
  return this;
}
