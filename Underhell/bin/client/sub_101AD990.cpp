int __thiscall sub_101AD990(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax

  sub_100D1440((_DWORD *)this, 0, "HudGrenadeAmmo");
  sub_100B5510((_BYTE *)(this + 380), a2);
  *(_DWORD *)this = &CHudGrenadeAmmo::`vftable';
  *(_DWORD *)(this + 380) = &CHudGrenadeAmmo::`vftable';
  if ( !byte_1044EC17 )
  {
    byte_1044EC17 = 1;
    v3 = sub_10242540("CHudGrenadeAmmo");
    *(_DWORD *)(v3 + 28) = sub_101ACAB0;
    *(_DWORD *)(v3 + 24) = sub_10242540("CHudNumericDisplay");
  }
  if ( !byte_1044EC18 )
  {
    byte_1044EC18 = 1;
    v4 = sub_102484C0("CHudGrenadeAmmo");
    *(_DWORD *)(v4 + 24) = sub_101ACAB0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CHudNumericDisplay");
  }
  if ( !byte_1044EC19 )
  {
    byte_1044EC19 = 1;
    v5 = sub_10242580("CHudGrenadeAmmo");
    *(_DWORD *)(v5 + 68) = sub_101ACAB0;
    *(_DWORD *)(v5 + 24) = sub_10242580("CHudNumericDisplay");
  }
  sub_101AD810();
  sub_101AD870();
  sub_101AD8D0();
  sub_101AD930();
  *(_DWORD *)(this + 456) = -1;
  *(_DWORD *)(this + 464) = -1;
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 468) = v6;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v6,
    "sprites/hud/weapons/frag",
    1,
    0);
  sub_100B3790((_DWORD *)(this + 380), 57);
  return this;
}
