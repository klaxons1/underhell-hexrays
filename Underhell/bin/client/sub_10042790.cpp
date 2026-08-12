int __thiscall sub_10042790(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( (a2 & 0xFFF) != (this[1022] & 0xFFF) || ((a2 ^ this[1022]) & 0xFFFFF000) != 0 )
  {
    this[1022] = a2;
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
               dword_104131A8,
               "spec_target_updated",
               0);
    if ( result )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, result);
    if ( (_DWORD *)dword_10407394 == this )
      return sub_10140950(1.0);
  }
  return result;
}
