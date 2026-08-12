void __cdecl sub_10478070()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E6A18[4];
  *(_DWORD *)byte_106E69F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E69F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E6A18[4] = 0;
  }
  *(_DWORD *)byte_106E69F8 = &ConCommandBase::`vftable';
}
