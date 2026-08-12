void __cdecl sub_104777A0()
{
  int v0; // eax

  v0 = unk_106E2B2C;
  *(_DWORD *)byte_106E2B08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2B08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2B2C = 0;
  }
  *(_DWORD *)byte_106E2B08 = &ConCommandBase::`vftable';
}
