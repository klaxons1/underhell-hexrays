void __cdecl sub_10477280()
{
  int v0; // eax

  v0 = unk_106E058C;
  *(_DWORD *)byte_106E0568 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0568[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E058C = 0;
  }
  *(_DWORD *)byte_106E0568 = &ConCommandBase::`vftable';
}
