void __cdecl sub_10477400()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E0BD8[4];
  *(_DWORD *)byte_106E0BB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0BB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E0BD8[4] = 0;
  }
  *(_DWORD *)byte_106E0BB8 = &ConCommandBase::`vftable';
}
