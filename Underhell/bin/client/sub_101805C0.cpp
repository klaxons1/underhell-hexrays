int __thiscall sub_101805C0(int *this)
{
  int *v2; // ebx
  _DWORD *v3; // edi
  bool v4; // zf

  v2 = (int *)this[70];
  v3 = this + 63;
  *this = (int)&CModelPanel::`vftable';
  this[63] = (int)&CModelPanel::`vftable';
  if ( v2 )
  {
    sub_10180210(v2);
    sub_10034930((int)v2);
    this[70] = 0;
  }
  sub_1017F7A0(this);
  sub_1017F900((int)this);
  sub_10233380(this + 82);
  sub_10233380(this + 81);
  sub_1011A810(this + 72);
  v4 = *((_BYTE *)v3 + 4) == 0;
  *v3 = &CGameEventListener::`vftable';
  if ( !v4 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, v3);
    *((_BYTE *)v3 + 4) = 0;
  }
  *v3 = &IGameEventListener2::`vftable';
  return sub_1024C2A0(this);
}
