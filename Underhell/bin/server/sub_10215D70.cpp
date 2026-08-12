int __thiscall sub_10215D70(int this)
{
  int v2; // edx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CGameGibManager::`vftable';
  *(_DWORD *)(this + 800) = 0;
  *(_DWORD *)(this + 804) = 0;
  *(_DWORD *)(this + 808) = 0;
  *(_WORD *)(this + 820) = -1;
  v2 = *(_DWORD *)(this + 800);
  *(_DWORD *)(this + 816) = 0xFFFF;
  *(_DWORD *)(this + 812) = -1;
  *(_DWORD *)(this + 824) = v2;
  *(_DWORD *)(this + 836) = -1;
  *(_DWORD *)(this + 840) = -1;
  *(_DWORD *)(this + 844) = -1;
  return this;
}
