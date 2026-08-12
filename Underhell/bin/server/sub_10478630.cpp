void __cdecl sub_10478630()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E9418[4];
  *(_DWORD *)byte_106E93F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E93F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E9418[4] = 0;
  }
  *(_DWORD *)byte_106E93F8 = &ConCommandBase::`vftable';
}
