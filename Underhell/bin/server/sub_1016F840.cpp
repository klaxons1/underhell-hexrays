int __thiscall sub_1016F840(_DWORD *this)
{
  int result; // eax
  bool v3; // zf

  *this = &CHLTVDirector::`vftable';
  this[2] = &CHLTVDirector::`vftable';
  this[3] = &CHLTVDirector::`vftable';
  sub_1016F670((int)(this + 100));
  this[3] = &IHLTVDirector::`vftable';
  result = sub_10170190((int)(this + 2));
  v3 = *((_BYTE *)this + 4) == 0;
  *this = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, this);
    *((_BYTE *)this + 4) = 0;
  }
  *this = &IGameEventListener2::`vftable';
  return result;
}
