_DWORD *__thiscall sub_100B94E0(_DWORD *this, int a2, char *Source, int a4, int a5)
{
  int v6; // edi
  int v7; // edi
  int v8; // edi

  sub_1025CF50(a2, Source, a4);
  *this = &CHudChatFilterCheckButton::`vftable';
  if ( !byte_1042FF3A )
  {
    byte_1042FF3A = 1;
    v6 = sub_10242540("CHudChatFilterCheckButton");
    *(_DWORD *)(v6 + 28) = sub_100B8B80;
    *(_DWORD *)(v6 + 24) = sub_10242540("vgui::CheckButton");
  }
  if ( !byte_1042FF3B )
  {
    byte_1042FF3B = 1;
    v7 = sub_102484C0("CHudChatFilterCheckButton");
    *(_DWORD *)(v7 + 24) = sub_100B8B80;
    *(_DWORD *)(v7 + 20) = sub_102484C0("vgui::CheckButton");
  }
  if ( !byte_1042FF3C )
  {
    byte_1042FF3C = 1;
    v8 = sub_10242580("CHudChatFilterCheckButton");
    *(_DWORD *)(v8 + 68) = sub_100B8B80;
    *(_DWORD *)(v8 + 24) = sub_10242580("vgui::CheckButton");
  }
  this[100] = a5;
  return this;
}
