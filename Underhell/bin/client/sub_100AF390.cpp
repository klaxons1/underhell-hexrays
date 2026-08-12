float *__thiscall sub_100AF390(float *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510(a2);
  sub_10243490(0, "HudGeiger");
  *(_DWORD *)this = &CHudGeiger::`vftable';
  *((_DWORD *)this + 11) = &CHudGeiger::`vftable';
  if ( !byte_1042F7D0 )
  {
    byte_1042F7D0 = 1;
    v3 = sub_10242540("CHudGeiger");
    *(_DWORD *)(v3 + 28) = sub_100AF340;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1042F7D1 )
  {
    byte_1042F7D1 = 1;
    v4 = sub_102484C0("CHudGeiger");
    *(_DWORD *)(v4 + 24) = sub_100AF340;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1042F7D2 )
  {
    byte_1042F7D2 = 1;
    v5 = sub_10242580("CHudGeiger");
    *(_DWORD *)(v5 + 68) = sub_100AF340;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  this[64] = -9999.0;
  sub_100B3790(8);
  return this;
}
