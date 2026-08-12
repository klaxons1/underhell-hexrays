void __cdecl sub_104770C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF650[36];
  *(_DWORD *)byte_106DF650 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF650[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF650[36] = 0;
  }
  *(_DWORD *)byte_106DF650 = &ConCommandBase::`vftable';
}
