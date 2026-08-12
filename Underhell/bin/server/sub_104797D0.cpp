void __cdecl sub_104797D0()
{
  int v0; // eax

  v0 = unk_106EFD0C;
  *(_DWORD *)byte_106EFCE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFCE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFD0C = 0;
  }
  *(_DWORD *)byte_106EFCE8 = &ConCommandBase::`vftable';
}
