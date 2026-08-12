void __cdecl sub_10476B90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DE258[4];
  *(_DWORD *)byte_106DE238 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE238[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DE258[4] = 0;
  }
  *(_DWORD *)byte_106DE238 = &ConCommandBase::`vftable';
}
