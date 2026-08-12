void __cdecl sub_10478530()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E8F98[4];
  *(_DWORD *)byte_106E8F78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8F78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E8F98[4] = 0;
  }
  *(_DWORD *)byte_106E8F78 = &ConCommandBase::`vftable';
}
