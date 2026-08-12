int __thiscall sub_101B18C0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudFlashlight");
  *(_DWORD *)this = &CHudFlashlight::`vftable';
  *(_DWORD *)(this + 44) = &CHudFlashlight::`vftable';
  if ( !byte_1044ECFC )
  {
    byte_1044ECFC = 1;
    v3 = sub_10242540("CHudFlashlight");
    *(_DWORD *)(v3 + 28) = sub_101B14E0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044ECFD )
  {
    byte_1044ECFD = 1;
    v4 = sub_102484C0("CHudFlashlight");
    *(_DWORD *)(v4 + 24) = sub_101B14E0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044ECFE )
  {
    byte_1044ECFE = 1;
    v5 = sub_10242580("CHudFlashlight");
    *(_DWORD *)(v5 + 68) = sub_101B14E0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B1560();
  sub_101B15C0();
  sub_101B1620();
  sub_101B1680();
  sub_101B16E0();
  sub_101B1740();
  sub_101B17A0();
  sub_101B1800();
  sub_101B1860();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 48);
  return this;
}
