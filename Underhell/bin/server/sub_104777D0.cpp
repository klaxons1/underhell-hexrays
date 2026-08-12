void __cdecl sub_104777D0()
{
  int v0; // eax

  v0 = unk_106E2C04;
  *(_DWORD *)byte_106E2BE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2BE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2C04 = 0;
  }
  *(_DWORD *)byte_106E2BE0 = &ConCommandBase::`vftable';
}
