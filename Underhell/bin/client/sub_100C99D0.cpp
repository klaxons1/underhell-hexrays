_BYTE *__thiscall sub_100C99D0(_BYTE *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax

  sub_10243490(0, "HudHintDisplay");
  sub_100B5510(this + 204, a2);
  *(_DWORD *)this = &CHudHintDisplay::`vftable';
  *((_DWORD *)this + 51) = &CHudHintDisplay::`vftable';
  if ( !byte_10430CC4 )
  {
    byte_10430CC4 = 1;
    v3 = sub_10242540("CHudHintDisplay");
    *(_DWORD *)(v3 + 28) = sub_100C92E0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430CC5 )
  {
    byte_10430CC5 = 1;
    v4 = sub_102484C0("CHudHintDisplay");
    *(_DWORD *)(v4 + 24) = sub_100C92E0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430CC6 )
  {
    byte_10430CC6 = 1;
    v5 = sub_10242580("CHudHintDisplay");
    *(_DWORD *)(v5 + 68) = sub_100C92E0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  sub_100C97F0();
  sub_100C9850();
  sub_100C98B0();
  sub_100C9910();
  sub_100C9970();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10236310(0);
  if ( sub_100DDA40(284) )
    *((_DWORD *)this + 65) = sub_1024B100((int)this, "HudHintDisplayLabel", (int)Locale);
  else
    *((_DWORD *)this + 65) = 0;
  return this;
}
