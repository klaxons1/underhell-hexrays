void __cdecl sub_104718C0()
{
  int v0; // eax

  v0 = unk_106B3684;
  *(_DWORD *)byte_106B3660 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3660[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3684 = 0;
  }
  *(_DWORD *)byte_106B3660 = &ConCommandBase::`vftable';
}
