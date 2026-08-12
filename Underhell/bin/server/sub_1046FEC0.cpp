void __cdecl sub_1046FEC0()
{
  int v0; // eax

  v0 = unk_10698424;
  *(_DWORD *)byte_10698400 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698400[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698424 = 0;
  }
  *(_DWORD *)byte_10698400 = &ConCommandBase::`vftable';
}
