int __thiscall sub_100C8490(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudHDRDemo");
  *(_DWORD *)this = &CHudHDRDemo::`vftable';
  *(_DWORD *)(this + 44) = &CHudHDRDemo::`vftable';
  if ( !byte_10430C18 )
  {
    byte_10430C18 = 1;
    v3 = sub_10242540("CHudHDRDemo");
    *(_DWORD *)(v3 + 28) = sub_100C7CA0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430C19 )
  {
    byte_10430C19 = 1;
    v4 = sub_102484C0("CHudHDRDemo");
    *(_DWORD *)(v4 + 24) = sub_100C7CA0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430C1A )
  {
    byte_10430C1A = 1;
    v5 = sub_10242580("CHudHDRDemo");
    *(_DWORD *)(v5 + 68) = sub_100C7CA0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100C8130();
  *(_DWORD *)(this + 253) = 0;
  sub_100C8190();
  *(_DWORD *)(this + 258) = 0;
  sub_100C81F0();
  sub_100C8250();
  sub_100C82B0();
  sub_100C8310();
  sub_100C8370();
  sub_100C83D0();
  sub_100C8430();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10239CF0(0);
  sub_10239D10(0);
  *(_BYTE *)(this + 251) = 0;
  return this;
}
