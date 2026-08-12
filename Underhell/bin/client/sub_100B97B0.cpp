_DWORD *__thiscall sub_100B97B0(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  sub_10259F80((int)this, a2, "HudChatHistory");
  *this = &CHudChatHistory::`vftable';
  if ( !byte_1042FF34 )
  {
    byte_1042FF34 = 1;
    v4 = sub_10242540("CHudChatHistory");
    *(_DWORD *)(v4 + 28) = sub_100B8B60;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::RichText");
  }
  if ( !byte_1042FF35 )
  {
    byte_1042FF35 = 1;
    v5 = sub_102484C0("CHudChatHistory");
    *(_DWORD *)(v5 + 24) = sub_100B8B60;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::RichText");
  }
  if ( !byte_1042FF36 )
  {
    byte_1042FF36 = 1;
    v6 = sub_10242580("CHudChatHistory");
    *(_DWORD *)(v6 + 68) = sub_100B8B60;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::RichText");
  }
  v7 = dword_1047CA7C;
  v8 = *(_DWORD *)dword_1047CA7C;
  v9 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         2,
         "resource/ChatScheme.res",
         "ChatScheme");
  v10 = (*(int (__thiscall **)(int, int))(v8 + 48))(v7, v9);
  sub_10236970(v10);
  sub_10259A00(-1.0, -1.0);
  return this;
}
