_BYTE *__thiscall sub_10001EE0(_BYTE *this, char a2)
{
  bool v3; // zf

  v3 = this[4] == 0;
  *(_DWORD *)this = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this);
    this[4] = 0;
  }
  *(_DWORD *)this = &IGameEventListener2::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
