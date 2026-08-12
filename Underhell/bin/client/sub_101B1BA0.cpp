int __thiscall sub_101B1BA0(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi

  sub_100B5510((_BYTE *)this, a2);
  sub_100D1440((_DWORD *)(this + 44), 0, "HudHealth");
  *(_DWORD *)this = &CHudHealth::`vftable';
  *(_DWORD *)(this + 44) = &CHudHealth::`vftable';
  if ( !byte_1044ED24 )
  {
    byte_1044ED24 = 1;
    v3 = sub_10242540("CHudHealth");
    *(_DWORD *)(v3 + 28) = sub_101B1A90;
    *(_DWORD *)(v3 + 24) = sub_10242540("CHudNumericDisplay");
  }
  if ( !byte_1044ED25 )
  {
    byte_1044ED25 = 1;
    v4 = sub_102484C0("CHudHealth");
    *(_DWORD *)(v4 + 24) = sub_101B1A90;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CHudNumericDisplay");
  }
  if ( !byte_1044ED26 )
  {
    byte_1044ED26 = 1;
    v5 = sub_10242580("CHudHealth");
    *(_DWORD *)(v5 + 68) = sub_101B1A90;
    *(_DWORD *)(v5 + 24) = sub_10242580("CHudNumericDisplay");
  }
  sub_100B3790((_DWORD *)this, 56);
  return this;
}
