void __cdecl sub_10477F30()
{
  int v0; // eax

  v0 = unk_106E633C;
  *(_DWORD *)byte_106E6318 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6318[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E633C = 0;
  }
  *(_DWORD *)byte_106E6318 = &ConCommandBase::`vftable';
}
