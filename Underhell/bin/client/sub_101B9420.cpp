_BYTE *__thiscall sub_101B9420(_BYTE *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_10243490(0, "HudZoom");
  sub_100B5510(this + 204, a2);
  *(_DWORD *)this = &CHudZoom::`vftable';
  *((_DWORD *)this + 51) = &CHudZoom::`vftable';
  if ( !byte_1044F03C )
  {
    byte_1044F03C = 1;
    v3 = sub_10242540("CHudZoom");
    *(_DWORD *)(v3 + 28) = sub_101B8A20;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044F03D )
  {
    byte_1044F03D = 1;
    v4 = sub_102484C0("CHudZoom");
    *(_DWORD *)(v4 + 24) = sub_101B8A20;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044F03E )
  {
    byte_1044F03E = 1;
    v5 = sub_10242580("CHudZoom");
    *(_DWORD *)(v5 + 68) = sub_101B8A20;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B92A0();
  sub_101B9300();
  sub_101B9360();
  sub_101B93C0();
  sub_10233590(0, 0, 1);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_100B3790((_DWORD *)this + 51, 56);
  return this;
}
