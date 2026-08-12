int __thiscall sub_100BEA80(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudBleeding");
  *(_DWORD *)this = &CHudBleeding::`vftable';
  *(_DWORD *)(this + 44) = &CHudBleeding::`vftable';
  if ( !byte_10430100 )
  {
    byte_10430100 = 1;
    v3 = sub_10242540("CHudBleeding");
    *(_DWORD *)(v3 + 28) = sub_100BE7C0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430101 )
  {
    byte_10430101 = 1;
    v4 = sub_102484C0("CHudBleeding");
    *(_DWORD *)(v4 + 24) = sub_100BE7C0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430102 )
  {
    byte_10430102 = 1;
    v5 = sub_10242580("CHudBleeding");
    *(_DWORD *)(v5 + 68) = sub_100BE7C0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100BE900();
  sub_100BE960();
  sub_100BE9C0();
  sub_100BEA20();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  *(_DWORD *)(this + 260) = 0;
  sub_10236310(1);
  sub_102366F0(255);
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 252) = v7;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v7,
    "sprites/hud/hud_blooddrop",
    1,
    0);
  sub_100B3790((_DWORD *)this, 56);
  return this;
}
