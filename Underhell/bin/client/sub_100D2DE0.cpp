int __thiscall sub_100D2DE0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudWeapon");
  *(_DWORD *)this = &CHudWeapon::`vftable';
  *(_DWORD *)(this + 44) = &CHudWeapon::`vftable';
  if ( !byte_10431110 )
  {
    byte_10431110 = 1;
    v3 = sub_10242540("CHudWeapon");
    *(_DWORD *)(v3 + 28) = sub_100D2D40;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10431111 )
  {
    byte_10431111 = 1;
    v4 = sub_102484C0("CHudWeapon");
    *(_DWORD *)(v4 + 24) = sub_100D2D40;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10431112 )
  {
    byte_10431112 = 1;
    v5 = sub_10242580("CHudWeapon");
    *(_DWORD *)(v5 + 68) = sub_100D2D40;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  *(_DWORD *)(this + 252) = 0;
  sub_100B3790((_DWORD *)this, 1);
  return this;
}
