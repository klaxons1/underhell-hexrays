void __cdecl sub_10478430()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E8B18[4];
  *(_DWORD *)byte_106E8AF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8AF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E8B18[4] = 0;
  }
  *(_DWORD *)byte_106E8AF8 = &ConCommandBase::`vftable';
}
