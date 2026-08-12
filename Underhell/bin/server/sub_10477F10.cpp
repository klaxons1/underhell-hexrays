void __cdecl sub_10477F10()
{
  int v0; // eax

  v0 = unk_106E62AC;
  *(_DWORD *)byte_106E6288 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6288[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E62AC = 0;
  }
  *(_DWORD *)byte_106E6288 = &ConCommandBase::`vftable';
}
