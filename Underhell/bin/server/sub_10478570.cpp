void __cdecl sub_10478570()
{
  int v0; // eax

  v0 = unk_106E90BC;
  *(_DWORD *)byte_106E9098 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9098[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E90BC = 0;
  }
  *(_DWORD *)byte_106E9098 = &ConCommandBase::`vftable';
}
