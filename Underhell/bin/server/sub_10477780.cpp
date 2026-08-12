void __cdecl sub_10477780()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E2A98[4];
  *(_DWORD *)byte_106E2A78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2A78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E2A98[4] = 0;
  }
  *(_DWORD *)byte_106E2A78 = &ConCommandBase::`vftable';
}
