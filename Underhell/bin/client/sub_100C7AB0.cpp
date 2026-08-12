int __thiscall sub_100C7AB0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudHDRDemo");
  *(_DWORD *)this = &CHudFilmDemo::`vftable';
  *(_DWORD *)(this + 44) = &CHudFilmDemo::`vftable';
  if ( !byte_10430BF0 )
  {
    byte_10430BF0 = 1;
    v3 = sub_10242540("CHudFilmDemo");
    *(_DWORD *)(v3 + 28) = sub_100C7320;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430BF1 )
  {
    byte_10430BF1 = 1;
    v4 = sub_102484C0("CHudFilmDemo");
    *(_DWORD *)(v4 + 24) = sub_100C7320;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430BF2 )
  {
    byte_10430BF2 = 1;
    v5 = sub_10242580("CHudFilmDemo");
    *(_DWORD *)(v5 + 68) = sub_100C7320;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100C7750();
  *(_DWORD *)(this + 765) = 0;
  sub_100C77B0();
  *(_DWORD *)(this + 770) = 0;
  sub_100C7810();
  sub_100C7870();
  sub_100C78D0();
  sub_100C7930();
  sub_100C7990();
  sub_100C79F0();
  sub_100C7A50();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10239CF0(0);
  sub_10239D10(0);
  *(_BYTE *)(this + 251) = 0;
  return this;
}
