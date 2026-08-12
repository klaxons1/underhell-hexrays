int __thiscall sub_100818E0(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // esi
  int result; // eax
  bool v5; // zf

  v2 = this[3];
  v3 = this + 1;
  *this = &ClientModeShared::`vftable';
  this[1] = &ClientModeShared::`vftable';
  if ( v2 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(v2, 1);
  v5 = *((_BYTE *)this + 8) == 0;
  *v3 = &CGameEventListener::`vftable';
  if ( !v5 )
  {
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this + 1);
    *((_BYTE *)this + 8) = 0;
  }
  *v3 = &IGameEventListener2::`vftable';
  *this = &IClientMode::`vftable';
  return result;
}
