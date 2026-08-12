int __thiscall sub_101ADF60(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi

  sub_100D1440((_DWORD *)this, 0, "HudSuit");
  sub_100B5510((_BYTE *)(this + 380), a2);
  *(_DWORD *)this = &CHudBattery::`vftable';
  *(_DWORD *)(this + 380) = &CHudBattery::`vftable';
  if ( !byte_1044EC78 )
  {
    byte_1044EC78 = 1;
    v3 = sub_10242540("CHudBattery");
    *(_DWORD *)(v3 + 28) = sub_101ADE40;
    *(_DWORD *)(v3 + 24) = sub_10242540("CHudNumericDisplay");
  }
  if ( !byte_1044EC79 )
  {
    byte_1044EC79 = 1;
    v4 = sub_102484C0("CHudBattery");
    *(_DWORD *)(v4 + 24) = sub_101ADE40;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CHudNumericDisplay");
  }
  if ( !byte_1044EC7A )
  {
    byte_1044EC7A = 1;
    v5 = sub_10242580("CHudBattery");
    *(_DWORD *)(v5 + 68) = sub_101ADE40;
    *(_DWORD *)(v5 + 24) = sub_10242580("CHudNumericDisplay");
  }
  sub_100B3790((_DWORD *)(this + 380), 56);
  return this;
}
