int __thiscall sub_10142D70(int this, char a2)
{
  bool v3; // zf

  sub_102375F0(this + 828);
  v3 = *(_BYTE *)(this + 804) == 0;
  *(_DWORD *)(this + 800) = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, this + 800);
    *(_BYTE *)(this + 804) = 0;
  }
  *(_DWORD *)(this + 800) = &IGameEventListener2::`vftable';
  sub_100DF1D0((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    sub_100D6360(this);
  return this;
}
