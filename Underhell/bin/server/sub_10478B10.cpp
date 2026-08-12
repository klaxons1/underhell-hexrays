void __cdecl sub_10478B10()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EB058[4];
  *(_DWORD *)byte_106EB038 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB038[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EB058[4] = 0;
  }
  *(_DWORD *)byte_106EB038 = &ConCommandBase::`vftable';
}
