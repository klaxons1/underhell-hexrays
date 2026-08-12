void __cdecl sub_10477CA0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E5818[4];
  *(_DWORD *)byte_106E57F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E57F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E5818[4] = 0;
  }
  *(_DWORD *)byte_106E57F8 = &ConCommandBase::`vftable';
}
