void __cdecl sub_10472E10()
{
  int v0; // eax

  v0 = unk_106BA2BC;
  *(_DWORD *)byte_106BA298 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA298[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA2BC = 0;
  }
  *(_DWORD *)byte_106BA298 = &ConCommandBase::`vftable';
}
