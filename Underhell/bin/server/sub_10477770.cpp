void __cdecl sub_10477770()
{
  int v0; // eax

  v0 = unk_106E2A54;
  *(_DWORD *)byte_106E2A30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2A30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2A54 = 0;
  }
  *(_DWORD *)byte_106E2A30 = &ConCommandBase::`vftable';
}
