_DWORD *__thiscall sub_101B8430(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // [esp+14h] [ebp+8h]
  int v6; // [esp+14h] [ebp+8h]
  int v7; // [esp+14h] [ebp+8h]

  sub_1014FC70((int)this, a2);
  sub_10243490(0, "HudWeaponSelection");
  *this = &CHudWeaponSelection::`vftable';
  this[14] = &CHudWeaponSelection::`vftable';
  if ( !byte_1044EFBC )
  {
    byte_1044EFBC = 1;
    v5 = sub_10242540("CHudWeaponSelection");
    *(_DWORD *)(v5 + 28) = sub_101B5CC0;
    *(_DWORD *)(v5 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044EFBD )
  {
    byte_1044EFBD = 1;
    v6 = sub_102484C0("CHudWeaponSelection");
    *(_DWORD *)(v6 + 24) = sub_101B5CC0;
    *(_DWORD *)(v6 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044EFBE )
  {
    byte_1044EFBE = 1;
    v7 = sub_10242580("CHudWeaponSelection");
    *(_DWORD *)(v7 + 68) = sub_101B5CC0;
    *(_DWORD *)(v7 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B7B30();
  sub_101B7B90();
  sub_101B7BF0();
  sub_101B7C50();
  sub_101B7CB0();
  sub_101B7D10();
  sub_101B7D70();
  sub_101B7DD0();
  sub_101B7E30();
  sub_101B7E90();
  sub_101B7EF0();
  sub_101B7F50();
  sub_101B7FB0();
  sub_101B8010();
  sub_101B8070();
  *(_DWORD *)((char *)this + 373) = 0;
  sub_101B80D0();
  *(_DWORD *)((char *)this + 378) = 0;
  sub_101B8130();
  *(_DWORD *)((char *)this + 383) = 0;
  sub_101B8190();
  this[97] = 0;
  sub_101B81F0();
  *(_DWORD *)((char *)this + 393) = 0;
  sub_101B8250();
  *(_DWORD *)((char *)this + 398) = 0;
  sub_101B82B0();
  *(_DWORD *)((char *)this + 403) = 0;
  sub_101B8310();
  sub_101B8370();
  this[106] = 0;
  this[107] = 0;
  this[108] = 0;
  this[109] = 0;
  this[110] = 0;
  sub_101B83D0();
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v3);
  *((_BYTE *)this + 420) = 0;
  return this;
}
