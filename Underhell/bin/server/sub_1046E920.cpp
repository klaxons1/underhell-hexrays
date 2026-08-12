void __cdecl sub_1046E920()
{
  int v0; // eax

  v0 = unk_10690A44;
  *(_DWORD *)byte_10690A20 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690A20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690A44 = 0;
  }
  *(_DWORD *)byte_10690A20 = &ConCommandBase::`vftable';
}
