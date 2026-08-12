void __cdecl sub_10477720()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E2858[4];
  *(_DWORD *)byte_106E2838 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2838[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E2858[4] = 0;
  }
  *(_DWORD *)byte_106E2838 = &ConCommandBase::`vftable';
}
