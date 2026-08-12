int __thiscall sub_100B8340(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HUDAutoAim");
  *(_DWORD *)this = &CHUDAutoAim::`vftable';
  *(_DWORD *)(this + 44) = &CHUDAutoAim::`vftable';
  if ( !byte_1042FC6C )
  {
    byte_1042FC6C = 1;
    v3 = sub_10242540("CHUDAutoAim");
    *(_DWORD *)(v3 + 28) = sub_100B8230;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1042FC6D )
  {
    byte_1042FC6D = 1;
    v4 = sub_102484C0("CHUDAutoAim");
    *(_DWORD *)(v4 + 24) = sub_100B8230;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1042FC6E )
  {
    byte_1042FC6E = 1;
    v5 = sub_10242580("CHUDAutoAim");
    *(_DWORD *)(v5 + 68) = sub_100B8230;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 256);
  return this;
}
