_DWORD *__thiscall sub_100B9390(_DWORD *this, int a2, char *Source, int a4)
{
  int v5; // edi
  int v6; // edi
  int v7; // edi

  sub_1025C5C0(a2, Source, a4, 0, 0);
  *this = &CHudChatFilterButton::`vftable';
  if ( !byte_1042FF37 )
  {
    byte_1042FF37 = 1;
    v5 = sub_10242540("CHudChatFilterButton");
    *(_DWORD *)(v5 + 28) = sub_100B8B70;
    *(_DWORD *)(v5 + 24) = sub_10242540("vgui::Button");
  }
  if ( !byte_1042FF38 )
  {
    byte_1042FF38 = 1;
    v6 = sub_102484C0("CHudChatFilterButton");
    *(_DWORD *)(v6 + 24) = sub_100B8B70;
    *(_DWORD *)(v6 + 20) = sub_102484C0("vgui::Button");
  }
  if ( !byte_1042FF39 )
  {
    byte_1042FF39 = 1;
    v7 = sub_10242580("CHudChatFilterButton");
    *(_DWORD *)(v7 + 68) = sub_100B8B70;
    *(_DWORD *)(v7 + 24) = sub_10242580("vgui::Button");
  }
  return this;
}
