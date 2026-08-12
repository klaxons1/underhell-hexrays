void __cdecl sub_104791D0()
{
  int v0; // eax

  v0 = unk_106EDF24;
  *(_DWORD *)byte_106EDF00 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDF00[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EDF24 = 0;
  }
  *(_DWORD *)byte_106EDF00 = &ConCommandBase::`vftable';
}
