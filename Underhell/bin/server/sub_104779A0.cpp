void __cdecl sub_104779A0()
{
  int v0; // eax

  v0 = unk_106E35D4;
  *(_DWORD *)byte_106E35B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E35B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E35D4 = 0;
  }
  *(_DWORD *)byte_106E35B0 = &ConCommandBase::`vftable';
}
