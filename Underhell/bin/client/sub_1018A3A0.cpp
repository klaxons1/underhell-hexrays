int __thiscall sub_1018A3A0(_DWORD *this)
{
  char *v2; // esi
  bool v3; // zf

  v2 = (char *)(this + 108);
  *this = &CSpectatorMenu::`vftable';
  this[107] = &CSpectatorMenu::`vftable';
  this[108] = &CSpectatorMenu::`vftable';
  v3 = *((_BYTE *)this + 436) == 0;
  this[108] = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, v2);
    v2[4] = 0;
  }
  *(_DWORD *)v2 = &IGameEventListener2::`vftable';
  this[107] = &IViewPortPanel::`vftable';
  return sub_1024D540(this);
}
