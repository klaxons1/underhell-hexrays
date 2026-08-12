_DWORD *__thiscall sub_100BBDC0(_DWORD *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  sub_1024C5C0(a2, Source);
  *this = &CHudChatFilterPanel::`vftable';
  if ( !byte_1042FF40 )
  {
    byte_1042FF40 = 1;
    v4 = sub_10242540("CHudChatFilterPanel");
    *(_DWORD *)(v4 + 28) = sub_100B8BE0;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_1042FF41 )
  {
    byte_1042FF41 = 1;
    v5 = sub_102484C0("CHudChatFilterPanel");
    *(_DWORD *)(v5 + 24) = sub_100B8BE0;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_1042FF42 )
  {
    byte_1042FF42 = 1;
    v6 = sub_10242580("CHudChatFilterPanel");
    *(_DWORD *)(v6 + 68) = sub_100B8BE0;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::EditablePanel");
  }
  sub_100BBCC0((int)&savedregs);
  sub_10236510(a2);
  v7 = (_DWORD *)sub_100DDA40(404);
  if ( v7 )
    sub_100B94E0(v7, (int)this, "joinleave_button", (int)"Sky is blue?", 1);
  v8 = (_DWORD *)sub_100DDA40(404);
  if ( v8 )
    sub_100B94E0(v8, (int)this, "namechange_button", (int)"Sky is blue?", 2);
  v9 = (_DWORD *)sub_100DDA40(404);
  if ( v9 )
    sub_100B94E0(v9, (int)this, "publicchat_button", (int)"Sky is blue?", 4);
  v10 = (_DWORD *)sub_100DDA40(404);
  if ( v10 )
    sub_100B94E0(v10, (int)this, "servermsg_button", (int)"Sky is blue?", 8);
  v11 = (_DWORD *)sub_100DDA40(404);
  if ( v11 )
    sub_100B94E0(v11, (int)this, "teamchange_button", (int)"Sky is blue?", 16);
  return this;
}
