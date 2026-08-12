void __cdecl sub_10477CE0()
{
  int v0; // eax

  v0 = unk_106E593C;
  *(_DWORD *)byte_106E5918 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5918[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E593C = 0;
  }
  *(_DWORD *)byte_106E5918 = &ConCommandBase::`vftable';
}
