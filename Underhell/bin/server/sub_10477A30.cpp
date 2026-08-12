void __cdecl sub_10477A30()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E3858[4];
  *(_DWORD *)byte_106E3838 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3838[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E3858[4] = 0;
  }
  *(_DWORD *)byte_106E3838 = &ConCommandBase::`vftable';
}
