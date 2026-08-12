int __thiscall sub_100B8060(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudAnimationInfo");
  *(_DWORD *)this = &CHudAnimationInfo::`vftable';
  *(_DWORD *)(this + 44) = &CHudAnimationInfo::`vftable';
  if ( !byte_1042FC24 )
  {
    byte_1042FC24 = 1;
    v3 = sub_10242540("CHudAnimationInfo");
    *(_DWORD *)(v3 + 28) = sub_100B7720;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1042FC25 )
  {
    byte_1042FC25 = 1;
    v4 = sub_102484C0("CHudAnimationInfo");
    *(_DWORD *)(v4 + 24) = sub_100B7720;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1042FC26 )
  {
    byte_1042FC26 = 1;
    v5 = sub_10242580("CHudAnimationInfo");
    *(_DWORD *)(v5 + 68) = sub_100B7720;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100B7EE0();
  sub_100B7F40();
  sub_100B7FA0();
  *(_DWORD *)(this + 265) = 0;
  sub_100B8000();
  *(_DWORD *)(this + 270) = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3780((_BYTE *)this, 1);
  *(_DWORD *)(this + 276) = 0;
  sub_102366C0(100);
  return this;
}
