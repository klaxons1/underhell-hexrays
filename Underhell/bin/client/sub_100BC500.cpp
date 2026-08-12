int __thiscall sub_100BC500(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v18; // [esp+14h] [ebp+8h]

  sub_100B5510((_BYTE *)this, a2);
  sub_1024C5C0(0, "HudChat");
  *(_DWORD *)this = &CBaseHudChat::`vftable';
  *(_DWORD *)(this + 44) = &CBaseHudChat::`vftable';
  if ( !byte_1042FF3D )
  {
    byte_1042FF3D = 1;
    v3 = sub_10242540("CBaseHudChat");
    *(_DWORD *)(v3 + 28) = sub_100B8B90;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_1042FF3E )
  {
    byte_1042FF3E = 1;
    v4 = sub_102484C0("CBaseHudChat");
    *(_DWORD *)(v4 + 24) = sub_100B8B90;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_1042FF3F )
  {
    byte_1042FF3F = 1;
    v5 = sub_10242580("CBaseHudChat");
    *(_DWORD *)(v5 + 68) = sub_100B8B90;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::EditablePanel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  v7 = dword_1047CA7C;
  v18 = *(_DWORD *)dword_1047CA7C;
  v8 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         2,
         "resource/ChatScheme.res",
         "ChatScheme");
  v9 = (*(int (__thiscall **)(int, int))(v18 + 48))(v7, v8);
  sub_10236970(v9);
  (**(void (__thiscall ***)(int, const char *, _DWORD, _DWORD))dword_1047CA78)(
    dword_1047CA78,
    "resource/chat_%language%.txt",
    0,
    0);
  v10 = *(_DWORD *)(this + 112);
  *(_DWORD *)(this + 332) = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, v10, 0);
  sub_10237000(1, 0);
  sub_102366C0(-30);
  sub_100B3790((_DWORD *)this, 128);
  v11 = (_DWORD *)sub_100DDA40(368);
  if ( v11 )
    v12 = sub_100B9390(v11, this + 44, "ChatFiltersButton", (int)"Filters");
  else
    v12 = 0;
  *(_DWORD *)(this + 324) = v12;
  if ( v12 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v12 + 316))(v12, v9);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 324) + 124))(*(_DWORD *)(this + 324), 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 324) + 200))(*(_DWORD *)(this + 324), 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 324) + 520))(*(_DWORD *)(this + 324), 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 324) + 524))(*(_DWORD *)(this + 324), 0);
  }
  v13 = (_DWORD *)sub_100DDA40(420);
  if ( v13 )
    v14 = sub_100B97B0(v13, this + 44, (int)"HudChatHistory");
  else
    v14 = 0;
  *(_DWORD *)(this + 320) = v14;
  sub_100BBC40((_DWORD *)this);
  v15 = (_DWORD *)sub_100DDA40(212);
  if ( v15 )
    v16 = sub_100B8EB0(v15, this, "ChatInputLine");
  else
    v16 = 0;
  *(_DWORD *)(this + 308) = v16;
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v16 + 124))(v16, 0);
  if ( *(_DWORD *)(this + 320) )
  {
    sub_10257630(12700);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 320) + 124))(*(_DWORD *)(this + 320), 1);
  }
  sub_100BBFF0((_DWORD *)this);
  *(_DWORD *)(this + 344) = *(_DWORD *)(dword_10430054 + 48);
  return this;
}
