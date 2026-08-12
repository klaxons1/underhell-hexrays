void __cdecl sub_104786E0()
{
  int v0; // eax

  v0 = unk_106E9924;
  *(_DWORD *)byte_106E9900 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9900[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9924 = 0;
  }
  *(_DWORD *)byte_106E9900 = &ConCommandBase::`vftable';
}
