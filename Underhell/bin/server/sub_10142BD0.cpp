int __thiscall sub_10142BD0(int this)
{
  sub_100E33C0((char *)this, 0);
  *(_DWORD *)(this + 800) = &CGameEventListener::`vftable';
  *(_BYTE *)(this + 804) = 0;
  *(_DWORD *)this = &CFishPool::`vftable';
  *(_DWORD *)(this + 800) = &CFishPool::`vftable';
  *(_DWORD *)(this + 828) = 0;
  *(_DWORD *)(this + 832) = 0;
  *(_DWORD *)(this + 836) = 0;
  *(_DWORD *)(this + 840) = 0;
  *(_DWORD *)(this + 844) = 0;
  *(float *)(this + 852) = -1.0;
  *(float *)(this + 848) = 0.0;
  *(_DWORD *)(this + 808) = 0;
  *(float *)(this + 812) = 255.0;
  *(_BYTE *)(this + 824) = 0;
  *(float *)(this + 816) = 0.0;
  *(float *)(this + 852) = sub_10264FF0(this + 848) + 0.5;
  *(float *)(this + 848) = 0.5;
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "player_shoot",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "player_footstep",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "weapon_fire",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "hegrenade_detonate",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "flashbang_detonate",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "smokegrenade_detonate",
    1);
  *(_BYTE *)(this + 804) = 1;
  (*(void (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this + 800,
    "bomb_exploded",
    1);
  return this;
}
