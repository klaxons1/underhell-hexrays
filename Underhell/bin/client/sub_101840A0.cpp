int __thiscall sub_101840A0(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  bool v4; // zf

  v2 = this[78];
  v3 = this + 64;
  *this = &CClientScoreBoardDialog::`vftable';
  this[63] = &CClientScoreBoardDialog::`vftable';
  this[64] = &CClientScoreBoardDialog::`vftable';
  if ( v2 )
  {
    sub_10279030(v2);
    sub_10034930(v2);
    this[78] = 0;
  }
  sub_10183CD0((int)(this + 97));
  v4 = *((_BYTE *)v3 + 4) == 0;
  *v3 = &CGameEventListener::`vftable';
  if ( !v4 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, v3);
    *((_BYTE *)v3 + 4) = 0;
  }
  *v3 = &IGameEventListener2::`vftable';
  this[63] = &IViewPortPanel::`vftable';
  return sub_1024C2A0(this);
}
