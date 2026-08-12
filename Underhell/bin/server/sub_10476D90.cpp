void __cdecl sub_10476D90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DE998[4];
  *(_DWORD *)byte_106DE978 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE978[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DE998[4] = 0;
  }
  *(_DWORD *)byte_106DE978 = &ConCommandBase::`vftable';
}
