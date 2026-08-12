int __thiscall sub_100CAB40(_BYTE *this)
{
  sub_1012CAB0("HintText", sub_100CAAD0);
  this[4] = 1;
  return (*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
           dword_104131A8,
           this,
           "player_hintmessage",
           0);
}
