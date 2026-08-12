void __cdecl sub_10478D10()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EBC18[4];
  *(_DWORD *)byte_106EBBF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBBF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EBC18[4] = 0;
  }
  *(_DWORD *)byte_106EBBF8 = &ConCommandBase::`vftable';
}
