char *__thiscall sub_1013C3E0(char *this, char a2)
{
  _DWORD *v3; // ecx
  bool v4; // zf

  v3 = this + 8;
  *(_DWORD *)this = &CEventLog::`vftable';
  *v3 = &CEventLog::`vftable';
  sub_10170140((int)v3);
  v4 = this[4] == 0;
  *(_DWORD *)this = &CGameEventListener::`vftable';
  if ( !v4 )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, this);
    this[4] = 0;
  }
  *(_DWORD *)this = &IGameEventListener2::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
