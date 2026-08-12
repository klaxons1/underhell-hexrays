void __cdecl sub_10477AB0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E3A98[4];
  *(_DWORD *)byte_106E3A78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3A78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E3A98[4] = 0;
  }
  *(_DWORD *)byte_106E3A78 = &ConCommandBase::`vftable';
}
