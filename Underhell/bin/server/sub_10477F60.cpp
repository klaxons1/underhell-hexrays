void __cdecl sub_10477F60()
{
  int v0; // eax

  v0 = unk_106E6414;
  *(_DWORD *)byte_106E63F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E63F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6414 = 0;
  }
  *(_DWORD *)byte_106E63F0 = &ConCommandBase::`vftable';
}
