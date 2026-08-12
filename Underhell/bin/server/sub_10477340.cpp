void __cdecl sub_10477340()
{
  int v0; // eax

  v0 = unk_106E08EC;
  *(_DWORD *)byte_106E08C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E08C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E08EC = 0;
  }
  *(_DWORD *)byte_106E08C8 = &ConCommandBase::`vftable';
}
