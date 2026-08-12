int __thiscall sub_10182280(int this)
{
  bool v2; // zf
  _DWORD *v3; // edi
  int v4; // ecx

  v2 = *(_BYTE *)(this + 296) == 0;
  v3 = (_DWORD *)(this + 256);
  *(_DWORD *)this = &CBaseViewport::`vftable';
  *(_DWORD *)(this + 252) = &CBaseViewport::`vftable';
  *(_DWORD *)(this + 256) = &CBaseViewport::`vftable';
  *(_BYTE *)(this + 297) = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(this + 272);
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 300))(v4);
  }
  *(_DWORD *)(this + 272) = 0;
  sub_10181E20((_DWORD *)this);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, v3);
  sub_1011A810((int *)(this + 276));
  *v3 = &IGameEventListener2::`vftable';
  return sub_1024C2A0(this);
}
