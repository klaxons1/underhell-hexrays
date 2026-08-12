int __thiscall sub_101B2020(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudLocator");
  *(_DWORD *)this = &CHudLocator::`vftable';
  *(_DWORD *)(this + 44) = &CHudLocator::`vftable';
  if ( !byte_1044ED44 )
  {
    byte_1044ED44 = 1;
    v3 = sub_10242540("CHudLocator");
    *(_DWORD *)(v3 + 28) = sub_101B2010;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044ED45 )
  {
    byte_1044ED45 = 1;
    v4 = sub_102484C0("CHudLocator");
    *(_DWORD *)(v4 + 24) = sub_101B2010;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044ED46 )
  {
    byte_1044ED46 = 1;
    v5 = sub_10242580("CHudLocator");
    *(_DWORD *)(v5 + 68) = sub_101B2010;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 56);
  *(_DWORD *)(this + 252) = -1;
  *(_DWORD *)(this + 260) = -1;
  *(_DWORD *)(this + 256) = -1;
  return this;
}
