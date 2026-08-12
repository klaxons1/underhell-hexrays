void __cdecl sub_10477E90()
{
  int v0; // eax

  v0 = unk_106E606C;
  *(_DWORD *)byte_106E6048 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6048[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E606C = 0;
  }
  *(_DWORD *)byte_106E6048 = &ConCommandBase::`vftable';
}
