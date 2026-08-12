int sub_10075540()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
             dword_104131A8,
             "gameui_hidden",
             0);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, result);
  return result;
}
