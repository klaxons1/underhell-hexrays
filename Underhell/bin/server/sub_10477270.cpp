void __cdecl sub_10477270()
{
  int v0; // eax

  v0 = unk_106E0544;
  *(_DWORD *)byte_106E0520 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0520[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0544 = 0;
  }
  *(_DWORD *)byte_106E0520 = &ConCommandBase::`vftable';
}
