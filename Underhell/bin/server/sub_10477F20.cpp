void __cdecl sub_10477F20()
{
  int v0; // eax

  v0 = unk_106E62F4;
  *(_DWORD *)byte_106E62D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E62D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E62F4 = 0;
  }
  *(_DWORD *)byte_106E62D0 = &ConCommandBase::`vftable';
}
