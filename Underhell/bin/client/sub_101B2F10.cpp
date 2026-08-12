int __thiscall sub_101B2F10(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HUDQuickInfo");
  *(_DWORD *)this = &CHUDQuickInfo::`vftable';
  *(_DWORD *)(this + 44) = &CHUDQuickInfo::`vftable';
  if ( !byte_1044EE38 )
  {
    byte_1044EE38 = 1;
    v3 = sub_10242540("CHUDQuickInfo");
    *(_DWORD *)(v3 + 28) = sub_101B2E30;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044EE39 )
  {
    byte_1044EE39 = 1;
    v4 = sub_102484C0("CHUDQuickInfo");
    *(_DWORD *)(v4 + 24) = sub_101B2E30;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044EE3A )
  {
    byte_1044EE3A = 1;
    v5 = sub_10242580("CHUDQuickInfo");
    *(_DWORD *)(v5 + 68) = sub_101B2E30;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 256);
  return this;
}
