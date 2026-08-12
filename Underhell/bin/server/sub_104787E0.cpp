void __cdecl sub_104787E0()
{
  int v0; // eax

  v0 = unk_106E9F2C;
  *(_DWORD *)byte_106E9F08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9F08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9F2C = 0;
  }
  *(_DWORD *)byte_106E9F08 = &ConCommandBase::`vftable';
}
