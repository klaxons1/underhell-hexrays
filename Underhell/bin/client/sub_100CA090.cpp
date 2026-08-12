_BYTE *__thiscall sub_100CA090(_BYTE *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax

  sub_10243490(0, "HudHintKeyDisplay");
  sub_100B5510(this + 204, a2);
  *(_DWORD *)this = &CHudHintKeyDisplay::`vftable';
  *((_DWORD *)this + 51) = &CHudHintKeyDisplay::`vftable';
  if ( !byte_10430CC7 )
  {
    byte_10430CC7 = 1;
    v3 = sub_10242540("CHudHintKeyDisplay");
    *(_DWORD *)(v3 + 28) = sub_100C93D0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430CC8 )
  {
    byte_10430CC8 = 1;
    v4 = sub_102484C0("CHudHintKeyDisplay");
    *(_DWORD *)(v4 + 24) = sub_100C93D0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430CC9 )
  {
    byte_10430CC9 = 1;
    v5 = sub_10242580("CHudHintKeyDisplay");
    *(_DWORD *)(v5 + 68) = sub_100C93D0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  sub_100C9EB0();
  sub_100C9F10();
  sub_100C9F70();
  sub_100C9FD0();
  sub_100CA030();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10236310(0);
  this[280] = 0;
  sub_102366F0(0);
  return this;
}
