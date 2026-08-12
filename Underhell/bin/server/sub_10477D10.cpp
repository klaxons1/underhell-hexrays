void __cdecl sub_10477D10()
{
  int v0; // eax

  v0 = unk_106E5A14;
  *(_DWORD *)byte_106E59F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E59F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5A14 = 0;
  }
  *(_DWORD *)byte_106E59F0 = &ConCommandBase::`vftable';
}
