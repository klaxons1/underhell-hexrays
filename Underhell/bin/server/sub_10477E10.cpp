void __cdecl sub_10477E10()
{
  int v0; // eax

  v0 = unk_106E5E2C;
  *(_DWORD *)byte_106E5E08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5E08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5E2C = 0;
  }
  *(_DWORD *)byte_106E5E08 = &ConCommandBase::`vftable';
}
