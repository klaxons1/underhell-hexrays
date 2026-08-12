int __thiscall sub_1011DEC0(_BYTE *this)
{
  int result; // eax

  if ( this[12] )
  {
    (*(void (__thiscall **)(int, const char *, void (__cdecl *)(_DWORD *), int))(*(_DWORD *)dword_104376B8 + 40))(
      dword_104376B8,
      "sun data",
      sub_1011DDC0,
      4);
    (*(void (__thiscall **)(int, const char *, void (__cdecl *)(_DWORD *), int))(*(_DWORD *)dword_104376B8 + 40))(
      dword_104376B8,
      "sun dir",
      sub_1011DE00,
      3);
    (*(void (__thiscall **)(int, const char *, void (__cdecl *)(_DWORD *), int))(*(_DWORD *)dword_104376B8 + 40))(
      dword_104376B8,
      "local player velocity",
      sub_1011DE40,
      4);
    (*(void (__thiscall **)(int, const char *, void (__cdecl *)(_DWORD *), int))(*(_DWORD *)dword_104376B8 + 40))(
      dword_104376B8,
      "local player position",
      sub_1011DE80,
      3);
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_104376B8 + 44))(dword_104376B8);
  }
  return result;
}
