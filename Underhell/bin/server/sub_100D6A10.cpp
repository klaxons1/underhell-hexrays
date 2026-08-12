int __cdecl sub_100D6A10(int a1, char *String1)
{
  int v2; // eax
  _DWORD *v3; // esi
  const char *v4; // eax

  if ( String1 != String && _stricmp(String1, String) )
    return sub_102467B0(String1, a1, a1, 3, 0.0);
  v2 = sub_101E94B0(a1);
  v3 = (_DWORD *)v2;
  if ( !v2 || (*(_BYTE *)(v2 + 252) & 1) != 0 )
    return sub_102467B0(String1, a1, a1, 3, 0.0);
  v4 = *(const char **)(v2 + 260);
  if ( !v4 )
  {
    v4 = (const char *)v3[23];
    if ( !v4 )
      v4 = String;
  }
  Msg("[%03d] Found: %s, firing\n", *(_DWORD *)(dword_106B31C8 + 24) % 1000, v4);
  return (*(int (__thiscall **)(_DWORD *, int, int, int, _DWORD))(*v3 + 372))(v3, a1, a1, 3, 0.0);
}
