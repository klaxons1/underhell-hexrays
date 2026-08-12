void __cdecl sub_10477900()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E3198[4];
  *(_DWORD *)byte_106E3178 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3178[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E3198[4] = 0;
  }
  *(_DWORD *)byte_106E3178 = &ConCommandBase::`vftable';
}
