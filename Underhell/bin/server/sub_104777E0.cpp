void __cdecl sub_104777E0()
{
  int v0; // eax

  v0 = unk_106E2C4C;
  *(_DWORD *)byte_106E2C28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2C28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2C4C = 0;
  }
  *(_DWORD *)byte_106E2C28 = &ConCommandBase::`vftable';
}
