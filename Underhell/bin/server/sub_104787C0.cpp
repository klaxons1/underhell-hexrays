void __cdecl sub_104787C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E9E98[4];
  *(_DWORD *)byte_106E9E78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9E78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E9E98[4] = 0;
  }
  *(_DWORD *)byte_106E9E78 = &ConCommandBase::`vftable';
}
