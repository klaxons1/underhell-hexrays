void __cdecl sub_104787D0()
{
  int v0; // eax

  v0 = unk_106E9EE4;
  *(_DWORD *)byte_106E9EC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9EC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9EE4 = 0;
  }
  *(_DWORD *)byte_106E9EC0 = &ConCommandBase::`vftable';
}
