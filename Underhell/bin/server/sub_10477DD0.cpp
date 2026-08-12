void __cdecl sub_10477DD0()
{
  int v0; // eax

  v0 = unk_106E5D0C;
  *(_DWORD *)byte_106E5CE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5CE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5D0C = 0;
  }
  *(_DWORD *)byte_106E5CE8 = &ConCommandBase::`vftable';
}
