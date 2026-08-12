int __thiscall sub_100D2AA0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudVehicle");
  *(_DWORD *)this = &CHudVehicle::`vftable';
  *(_DWORD *)(this + 44) = &CHudVehicle::`vftable';
  if ( !byte_104310F0 )
  {
    byte_104310F0 = 1;
    v3 = sub_10242540("CHudVehicle");
    *(_DWORD *)(v3 + 28) = sub_100D2A90;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104310F1 )
  {
    byte_104310F1 = 1;
    v4 = sub_102484C0("CHudVehicle");
    *(_DWORD *)(v4 + 24) = sub_100D2A90;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104310F2 )
  {
    byte_104310F2 = 1;
    v5 = sub_10242580("CHudVehicle");
    *(_DWORD *)(v5 + 68) = sub_100D2A90;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 528);
  return this;
}
