int __thiscall sub_101ACDA0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx

  sub_100D1440((_DWORD *)this, 0, "HudAmmoSecondary");
  sub_100B5510((_BYTE *)(this + 380), a2);
  *(_DWORD *)this = &CHudSecondaryAmmo::`vftable';
  *(_DWORD *)(this + 380) = &CHudSecondaryAmmo::`vftable';
  if ( !byte_1044EC1A )
  {
    byte_1044EC1A = 1;
    v3 = sub_10242540("CHudSecondaryAmmo");
    *(_DWORD *)(v3 + 28) = sub_101ACAE0;
    *(_DWORD *)(v3 + 24) = sub_10242540("CHudNumericDisplay");
  }
  if ( !byte_1044EC1B )
  {
    byte_1044EC1B = 1;
    v4 = sub_102484C0("CHudSecondaryAmmo");
    *(_DWORD *)(v4 + 24) = sub_101ACAE0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CHudNumericDisplay");
  }
  if ( !byte_1044EC1C )
  {
    byte_1044EC1C = 1;
    v5 = sub_10242580("CHudSecondaryAmmo");
    *(_DWORD *)(v5 + 68) = sub_101ACAE0;
    *(_DWORD *)(v5 + 24) = sub_10242580("CHudNumericDisplay");
  }
  *(_DWORD *)(this + 428) = -1;
  *(_DWORD *)(this + 436) = -1;
  sub_100B3790((_DWORD *)(this + 380), 57);
  return this;
}
