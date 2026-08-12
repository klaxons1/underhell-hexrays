_DWORD *__thiscall sub_100B1850(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510(a2);
  sub_10243490(0, "HudHistoryResource");
  *this = &CHudHistoryResource::`vftable';
  this[11] = &CHudHistoryResource::`vftable';
  if ( !byte_1042F96C )
  {
    byte_1042F96C = 1;
    v3 = sub_10242540("CHudHistoryResource");
    *(_DWORD *)(v3 + 28) = sub_100B0EF0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1042F96D )
  {
    byte_1042F96D = 1;
    v4 = sub_102484C0("CHudHistoryResource");
    *(_DWORD *)(v4 + 24) = sub_100B0EF0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1042F96E )
  {
    byte_1042F96E = 1;
    v5 = sub_10242580("CHudHistoryResource");
    *(_DWORD *)(v5 + 68) = sub_100B0EF0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  this[63] = 0;
  this[64] = 0;
  this[65] = 0;
  this[66] = 0;
  this[67] = 0;
  sub_100B1670();
  sub_100B16D0();
  sub_100B1730();
  sub_100B1790();
  sub_100B17F0();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  *((_WORD *)this + 141) = 0;
  *((_BYTE *)this + 314) = 0;
  *((_BYTE *)this + 280) = 1;
  sub_100B3790(64);
  return this;
}
