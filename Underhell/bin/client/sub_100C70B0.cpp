int __thiscall sub_100C70B0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudCrosshair");
  *(_DWORD *)this = &CHudCrosshair::`vftable';
  *(_DWORD *)(this + 44) = &CHudCrosshair::`vftable';
  if ( !byte_10430B38 )
  {
    byte_10430B38 = 1;
    v3 = sub_10242540("CHudCrosshair");
    *(_DWORD *)(v3 + 28) = sub_100C6BF0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430B39 )
  {
    byte_10430B39 = 1;
    v4 = sub_102484C0("CHudCrosshair");
    *(_DWORD *)(v4 + 24) = sub_100C6BF0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430B3A )
  {
    byte_10430B3A = 1;
    v5 = sub_10242580("CHudCrosshair");
    *(_DWORD *)(v5 + 68) = sub_100C6BF0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  *(_DWORD *)(this + 260) = 0;
  sub_100C7050();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 268) = 0.0;
  *(float *)(this + 272) = 0.0;
  sub_100B3790((_DWORD *)this, 272);
  return this;
}
