void __cdecl sub_104790C0()
{
  int v0; // eax

  v0 = unk_106ED2E4;
  *(_DWORD *)byte_106ED2C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED2C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ED2E4 = 0;
  }
  *(_DWORD *)byte_106ED2C0 = &ConCommandBase::`vftable';
}
