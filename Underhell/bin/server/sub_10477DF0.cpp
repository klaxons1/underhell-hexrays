void __cdecl sub_10477DF0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E5D98[4];
  *(_DWORD *)byte_106E5D78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5D78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E5D98[4] = 0;
  }
  *(_DWORD *)byte_106E5D78 = &ConCommandBase::`vftable';
}
