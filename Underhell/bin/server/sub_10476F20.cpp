void __cdecl sub_10476F20()
{
  int v0; // eax

  v0 = unk_106DEF24;
  *(_DWORD *)byte_106DEF00 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEF00[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEF24 = 0;
  }
  *(_DWORD *)byte_106DEF00 = &ConCommandBase::`vftable';
}
