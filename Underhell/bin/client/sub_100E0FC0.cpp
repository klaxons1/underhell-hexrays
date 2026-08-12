int __thiscall sub_100E0FC0(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+14h] [ebp+8h]
  int v7; // [esp+14h] [ebp+8h]
  int v8; // [esp+14h] [ebp+8h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudMessage");
  *(_DWORD *)(this + 248) = &ITextMessage::`vftable';
  *(_DWORD *)this = &CHudMessage::`vftable';
  *(_DWORD *)(this + 44) = &CHudMessage::`vftable';
  *(_DWORD *)(this + 248) = &CHudMessage::`vftable';
  if ( !byte_1043460C )
  {
    byte_1043460C = 1;
    v6 = sub_10242540("CHudMessage");
    *(_DWORD *)(v6 + 28) = sub_100DEE10;
    *(_DWORD *)(v6 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1043460D )
  {
    byte_1043460D = 1;
    v7 = sub_102484C0("CHudMessage");
    *(_DWORD *)(v7 + 24) = sub_100DEE10;
    *(_DWORD *)(v7 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1043460E )
  {
    byte_1043460E = 1;
    v8 = sub_10242580("CHudMessage");
    *(_DWORD *)(v8 + 68) = sub_100DEE10;
    *(_DWORD *)(v8 + 24) = sub_10242580("vgui::Panel");
  }
  *(_DWORD *)(this + 17404) = 0;
  *(_DWORD *)(this + 17408) = 0;
  *(_DWORD *)(this + 17412) = 0;
  *(_DWORD *)(this + 17416) = 0;
  *(_DWORD *)(this + 17420) = 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v3);
  v4 = dword_1042FAD8;
  dword_104345FC = this + 248;
  *(_DWORD *)(this + 17396) = dword_1042FAD8;
  *(_DWORD *)(this + 17400) = v4;
  *(_DWORD *)(this + 17220) = -1;
  *(_DWORD *)(this + 17224) = -1;
  *(_DWORD *)(this + 17228) = -1;
  *(_DWORD *)(this + 17232) = -1;
  *(_DWORD *)(this + 17416) = 0;
  if ( *(int *)(this + 17412) >= 0 )
  {
    if ( *(_DWORD *)(this + 17404) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 17404));
      *(_DWORD *)(this + 17404) = 0;
    }
    *(_DWORD *)(this + 17408) = 0;
  }
  *(_DWORD *)(this + 17420) = *(_DWORD *)(this + 17404);
  return this;
}
