int __thiscall sub_100BCC90(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudDotReticle");
  *(_DWORD *)this = &CHudDotReticle::`vftable';
  *(_DWORD *)(this + 44) = &CHudDotReticle::`vftable';
  if ( !byte_10430080 )
  {
    byte_10430080 = 1;
    v3 = sub_10242540("CHudDotReticle");
    *(_DWORD *)(v3 + 28) = sub_100BC830;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430081 )
  {
    byte_10430081 = 1;
    v4 = sub_102484C0("CHudDotReticle");
    *(_DWORD *)(v4 + 24) = sub_100BC830;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430082 )
  {
    byte_10430082 = 1;
    v5 = sub_10242580("CHudDotReticle");
    *(_DWORD *)(v5 + 68) = sub_100BC830;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100BCB10();
  sub_100BCB70();
  sub_100BCBD0();
  sub_100BCC30();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10236310(1);
  sub_102366F0(128);
  sub_100B3790((_DWORD *)this, 4096);
  return this;
}
