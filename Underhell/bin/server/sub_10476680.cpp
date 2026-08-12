void __cdecl sub_10476680()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DB658[4];
  *(_DWORD *)byte_106DB638 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB638[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DB658[4] = 0;
  }
  *(_DWORD *)byte_106DB638 = &ConCommandBase::`vftable';
}
