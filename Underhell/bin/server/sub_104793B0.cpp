void __cdecl sub_104793B0()
{
  *(_DWORD *)byte_106EEB08 = &ConVar::`vftable';
  unk_106EEB20 = &ConVar::`vftable';
  if ( dword_106EEB2C[0] )
  {
    sub_10184660(dword_106EEB2C[0]);
    dword_106EEB2C[0] = 0;
  }
  *(_DWORD *)byte_106EEB08 = &ConCommandBase::`vftable';
}
