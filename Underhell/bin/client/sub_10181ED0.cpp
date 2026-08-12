int __thiscall sub_10181ED0(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v7; // [esp+Ch] [ebp-4h]
  int v8; // [esp+Ch] [ebp-4h]
  int v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+Ch] [ebp-4h]

  sub_1024C5C0(0, "CBaseViewport");
  *(_DWORD *)(this + 252) = &IViewPort::`vftable';
  *(_DWORD *)(this + 256) = &IGameEventListener2::`vftable';
  *(_DWORD *)this = &CBaseViewport::`vftable';
  *(_DWORD *)(this + 252) = &CBaseViewport::`vftable';
  *(_DWORD *)(this + 256) = &CBaseViewport::`vftable';
  if ( !byte_1044549C )
  {
    byte_1044549C = 1;
    v7 = sub_10242540("CBaseViewport");
    *(_DWORD *)(v7 + 28) = sub_10180F80;
    *(_DWORD *)(v7 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_1044549D )
  {
    byte_1044549D = 1;
    v8 = sub_102484C0("CBaseViewport");
    *(_DWORD *)(v8 + 24) = sub_10180F80;
    *(_DWORD *)(v8 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_1044549E )
  {
    byte_1044549E = 1;
    v9 = sub_10242580("CBaseViewport");
    *(_DWORD *)(v9 + 68) = sub_10180F80;
    *(_DWORD *)(v9 + 24) = sub_10242580("vgui::EditablePanel");
  }
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  dword_104453A8 = this + 252;
  *(_BYTE *)(this + 297) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  sub_10237D40(0);
  sub_10237E50(0);
  *(_DWORD *)(this + 272) = 0;
  *(_BYTE *)(this + 296) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 304) = 0;
  v2 = dword_1047CA7C;
  v10 = *(_DWORD *)dword_1047CA7C;
  v3 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         2,
         "resource/ClientScheme.res",
         "ClientScheme");
  v4 = (*(int (__thiscall **)(int, int))(v10 + 48))(v2, v3);
  sub_10236970(v4);
  sub_1023A780(1);
  if ( sub_100DDA40(328) )
    v5 = sub_10248520(this);
  else
    v5 = 0;
  *(_DWORD *)(this + 312) = v5;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 316))(v5, v4);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 312) + 516))(*(_DWORD *)(this + 312), 1);
  if ( !sub_10180FE0((int (__thiscall ***)(_DWORD))this) )
    sub_102487F0(*(_DWORD *)(this + 68), "scripts/HudAnimations.txt", 1);
  *(_DWORD *)(this + 320) = -1;
  *(_DWORD *)(this + 316) = -1;
  return this;
}
