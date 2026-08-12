int __thiscall sub_10129EA0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudTrain");
  *(_DWORD *)this = &CHudTrain::`vftable';
  *(_DWORD *)(this + 44) = &CHudTrain::`vftable';
  if ( !byte_104390E4 )
  {
    byte_104390E4 = 1;
    v3 = sub_10242540("CHudTrain");
    *(_DWORD *)(v3 + 28) = sub_10129E70;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104390E5 )
  {
    byte_104390E5 = 1;
    v4 = sub_102484C0("CHudTrain");
    *(_DWORD *)(v4 + 24) = sub_10129E70;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104390E6 )
  {
    byte_104390E6 = 1;
    v5 = sub_10242580("CHudTrain");
    *(_DWORD *)(v5 + 68) = sub_10129E70;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this, 64);
  return this;
}
