void __cdecl sub_104770B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF608[36];
  *(_DWORD *)byte_106DF608 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF608[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF608[36] = 0;
  }
  *(_DWORD *)byte_106DF608 = &ConCommandBase::`vftable';
}
