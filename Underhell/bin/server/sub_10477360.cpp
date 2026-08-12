void __cdecl sub_10477360()
{
  int v0; // eax

  v0 = unk_106E097C;
  *(_DWORD *)byte_106E0958 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0958[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E097C = 0;
  }
  *(_DWORD *)byte_106E0958 = &ConCommandBase::`vftable';
}
