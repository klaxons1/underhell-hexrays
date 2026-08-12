int __thiscall sub_1013C370(char *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  bool v4; // zf

  v2 = this + 8;
  *(_DWORD *)this = &CEventLog::`vftable';
  *v2 = &CEventLog::`vftable';
  result = sub_10170140((int)v2);
  v4 = this[4] == 0;
  *(_DWORD *)this = &CGameEventListener::`vftable';
  if ( !v4 )
  {
    result = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, this);
    this[4] = 0;
  }
  *(_DWORD *)this = &IGameEventListener2::`vftable';
  return result;
}
