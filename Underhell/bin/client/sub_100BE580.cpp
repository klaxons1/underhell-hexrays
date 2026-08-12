int __thiscall sub_100BE580(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudUHBattery");
  *(_DWORD *)this = &CHudUHBattery::`vftable';
  *(_DWORD *)(this + 44) = &CHudUHBattery::`vftable';
  if ( !byte_104300D4 )
  {
    byte_104300D4 = 1;
    v3 = sub_10242540("CHudUHBattery");
    *(_DWORD *)(v3 + 28) = sub_100BDC10;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104300D5 )
  {
    byte_104300D5 = 1;
    v4 = sub_102484C0("CHudUHBattery");
    *(_DWORD *)(v4 + 24) = sub_100BDC10;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104300D6 )
  {
    byte_104300D6 = 1;
    v5 = sub_10242580("CHudUHBattery");
    *(_DWORD *)(v5 + 68) = sub_100BDC10;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100BE0A0();
  sub_100BE100();
  *(_DWORD *)(this + 281) = 0;
  sub_100BE160();
  sub_100BE1C0();
  sub_100BE220();
  sub_100BE280();
  sub_100BE2E0();
  sub_100BE340();
  sub_100BE3A0();
  sub_100BE400();
  sub_100BE460();
  sub_100BE4C0();
  sub_100BE520();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10236310(1);
  sub_102366F0(128);
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 260) = v7;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v7,
    "sprites/hud/hud_battery_contour",
    1,
    0);
  sub_100B3790((_DWORD *)this, 16432);
  return this;
}
