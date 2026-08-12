int __cdecl sub_1006D680(int a1)
{
  int result; // eax
  int v2; // esi

  sub_102282F0((char *)(dword_1041199C + 6076), *(char **)(a1 + 4), 0x20u);
  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
             dword_104131A8,
             "controlpoint_updatelayout",
             0);
  v2 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "index", -1);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v2);
  }
  return result;
}
