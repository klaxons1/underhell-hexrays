int __thiscall sub_100B5550(_BYTE *this)
{
  bool v2; // zf
  int result; // eax
  _BYTE *v4; // [esp+4h] [ebp-4h] BYREF

  v2 = this[20] == 0;
  *(_DWORD *)this = &CHudElement::`vftable';
  if ( !v2 )
  {
    v4 = this;
    sub_1012D820(&v4);
  }
  result = sub_1011A810(this + 24);
  v2 = this[4] == 0;
  *(_DWORD *)this = &CGameEventListener::`vftable';
  if ( !v2 )
  {
    result = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this);
    this[4] = 0;
  }
  *(_DWORD *)this = &IGameEventListener2::`vftable';
  return result;
}
