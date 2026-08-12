_DWORD *__thiscall sub_1005F010(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510(a2);
  sub_10243490(0, "HudCommentary");
  *this = &CHudCommentary::`vftable';
  this[11] = &CHudCommentary::`vftable';
  if ( !byte_1040DBA4 )
  {
    byte_1040DBA4 = 1;
    v3 = sub_10242540("CHudCommentary");
    *(_DWORD *)(v3 + 28) = sub_1005D8F0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1040DBA5 )
  {
    byte_1040DBA5 = 1;
    v4 = sub_102484C0("CHudCommentary");
    *(_DWORD *)(v4 + 24) = sub_1005D8F0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1040DBA6 )
  {
    byte_1040DBA6 = 1;
    v5 = sub_10242580("CHudCommentary");
    *(_DWORD *)(v5 + 68) = sub_1005D8F0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  this[63] = -1;
  sub_10233590(0, 0, 1);
  sub_1005E560();
  sub_1005E5C0();
  sub_1005E620();
  sub_1005E680();
  sub_1005E6E0();
  sub_1005E740();
  sub_1005E7A0();
  sub_1005E800();
  sub_1005E860();
  sub_1005E8C0();
  sub_1005E920();
  sub_1005E980();
  sub_1005E9E0();
  sub_1005EA40();
  sub_1005EAA0();
  *(_DWORD *)((char *)this + 1019) = 0;
  sub_1005EB00();
  this[256] = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10239CF0(0);
  sub_100B3790(16);
  this[63] = -1;
  *((_BYTE *)this + 256) = 1;
  return this;
}
