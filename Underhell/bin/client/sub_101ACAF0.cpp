int __thiscall sub_101ACAF0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx

  sub_100D1440((_DWORD *)this, 0, "HudAmmo");
  sub_100B5510((_BYTE *)(this + 380), a2);
  *(_DWORD *)this = &CHudAmmo::`vftable';
  *(_DWORD *)(this + 380) = &CHudAmmo::`vftable';
  if ( !byte_1044EC14 )
  {
    byte_1044EC14 = 1;
    v3 = sub_10242540("CHudAmmo");
    *(_DWORD *)(v3 + 28) = sub_101AC990;
    *(_DWORD *)(v3 + 24) = sub_10242540("CHudNumericDisplay");
  }
  if ( !byte_1044EC15 )
  {
    byte_1044EC15 = 1;
    v4 = sub_102484C0("CHudAmmo");
    *(_DWORD *)(v4 + 24) = sub_101AC990;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CHudNumericDisplay");
  }
  if ( !byte_1044EC16 )
  {
    byte_1044EC16 = 1;
    v5 = sub_10242580("CHudAmmo");
    *(_DWORD *)(v5 + 68) = sub_101AC990;
    *(_DWORD *)(v5 + 24) = sub_10242580("CHudNumericDisplay");
  }
  *(_DWORD *)(this + 428) = -1;
  *(_DWORD *)(this + 432) = -1;
  sub_100B3790((_DWORD *)(this + 380), 57);
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(ammo_primary)", "0");
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(ammo_secondary)", "0");
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(
    off_103E0D18,
    "(weapon_print_name)",
    Locale);
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(weapon_name)", Locale);
  return this;
}
