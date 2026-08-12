void __cdecl sub_104797E0()
{
  int v0; // eax

  v0 = unk_106EFD54;
  *(_DWORD *)byte_106EFD30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFD30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFD54 = 0;
  }
  *(_DWORD *)byte_106EFD30 = &ConCommandBase::`vftable';
}
