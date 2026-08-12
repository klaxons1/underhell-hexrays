void __cdecl sub_10477C90()
{
  int v0; // eax

  v0 = unk_106E57D4;
  *(_DWORD *)byte_106E57B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E57B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E57D4 = 0;
  }
  *(_DWORD *)byte_106E57B0 = &ConCommandBase::`vftable';
}
