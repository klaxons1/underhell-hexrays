void __cdecl sub_10477880()
{
  int v0; // eax

  v0 = unk_106E2F44;
  *(_DWORD *)byte_106E2F20 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2F20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2F44 = 0;
  }
  *(_DWORD *)byte_106E2F20 = &ConCommandBase::`vftable';
}
