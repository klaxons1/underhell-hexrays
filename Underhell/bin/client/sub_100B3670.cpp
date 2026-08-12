_DWORD *__thiscall sub_100B3670(_DWORD *this, char a2)
{
  bool v3; // zf

  *this = &C_HLTVCamera::`vftable';
  this[38] = &CUserCmd::`vftable';
  sub_1011A810(this + 54);
  v3 = *((_BYTE *)this + 4) == 0;
  *this = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this);
    *((_BYTE *)this + 4) = 0;
  }
  *this = &IGameEventListener2::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
