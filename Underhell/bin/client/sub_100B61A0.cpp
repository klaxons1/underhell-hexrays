_BYTE *__thiscall sub_100B61A0(_BYTE *this, char a2)
{
  bool v3; // zf
  _BYTE *v5; // [esp+4h] [ebp-4h] BYREF

  v3 = this[20] == 0;
  *(_DWORD *)this = &CHudElement::`vftable';
  if ( !v3 )
  {
    v5 = this;
    sub_1012D820(&v5);
  }
  sub_1011A810(this + 24);
  v3 = this[4] == 0;
  *(_DWORD *)this = &CGameEventListener::`vftable';
  if ( !v3 )
  {
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, this);
    this[4] = 0;
  }
  *(_DWORD *)this = &IGameEventListener2::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
