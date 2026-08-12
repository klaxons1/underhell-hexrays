void __cdecl sub_10478330()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E8698[4];
  *(_DWORD *)byte_106E8678 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8678[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E8698[4] = 0;
  }
  *(_DWORD *)byte_106E8678 = &ConCommandBase::`vftable';
}
