_DWORD *__thiscall sub_10082760(_DWORD *this, char a2)
{
  int v3; // ecx
  _DWORD *v4; // edi
  bool v5; // zf

  v3 = this[3];
  v4 = this + 1;
  *this = &ClientModeShared::`vftable';
  this[1] = &ClientModeShared::`vftable';
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 120))(v3, 1);
  v5 = *((_BYTE *)this + 8) == 0;
  *v4 = &CGameEventListener::`vftable';
  if ( !v5 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this + 1);
    *((_BYTE *)this + 8) = 0;
  }
  *v4 = &IGameEventListener2::`vftable';
  *this = &IClientMode::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
