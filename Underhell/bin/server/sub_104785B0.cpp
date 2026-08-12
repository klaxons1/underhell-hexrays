void __cdecl sub_104785B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E91D8[4];
  *(_DWORD *)byte_106E91B8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E91B8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E91D8[4] = 0;
  }
  *(_DWORD *)byte_106E91B8 = &ConCommandBase::`vftable';
}
