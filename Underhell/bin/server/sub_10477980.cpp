void __cdecl sub_10477980()
{
  int v0; // eax

  v0 = unk_106E3544;
  *(_DWORD *)byte_106E3520 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3520[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3544 = 0;
  }
  *(_DWORD *)byte_106E3520 = &ConCommandBase::`vftable';
}
