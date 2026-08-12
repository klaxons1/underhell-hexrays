void __cdecl sub_10474EA0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106D0618[4];
  *(_DWORD *)byte_106D05F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D05F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106D0618[4] = 0;
  }
  *(_DWORD *)byte_106D05F8 = &ConCommandBase::`vftable';
}
