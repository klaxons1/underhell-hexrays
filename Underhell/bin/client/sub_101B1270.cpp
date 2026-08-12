int __thiscall sub_101B1270(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // eax
  int v7; // [esp+14h] [ebp+8h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudDamageIndicator");
  *(_DWORD *)this = &CHudDamageIndicator::`vftable';
  *(_DWORD *)(this + 44) = &CHudDamageIndicator::`vftable';
  if ( !byte_1044ECD0 )
  {
    byte_1044ECD0 = 1;
    v7 = sub_10242540("CHudDamageIndicator");
    *(_DWORD *)(v7 + 28) = sub_101AFBC0;
    *(_DWORD *)(v7 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044ECD1 )
  {
    byte_1044ECD1 = 1;
    v3 = sub_102484C0("CHudDamageIndicator");
    *(_DWORD *)(v3 + 24) = sub_101AFBC0;
    *(_DWORD *)(v3 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044ECD2 )
  {
    byte_1044ECD2 = 1;
    v4 = sub_10242580("CHudDamageIndicator");
    *(_DWORD *)(v4 + 68) = sub_101AFBC0;
    *(_DWORD *)(v4 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B0EB0();
  sub_101B0F10();
  sub_101B0F70();
  sub_101B0FD0();
  sub_101B1030();
  sub_101B1090();
  *(_DWORD *)(this + 289) = 0;
  sub_101B10F0();
  *(_DWORD *)(this + 294) = 0;
  sub_101B1150();
  *(_DWORD *)(this + 299) = 0;
  sub_101B11B0();
  *(_DWORD *)(this + 304) = 0;
  sub_101B1210();
  *(_DWORD *)(this + 309) = 0;
  sub_10233590(0, 0, 1);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v5);
  sub_102334D0("vgui/white_additive", "VGUI textures", 1);
  sub_100B3790((_DWORD *)this, 8);
  return this;
}
