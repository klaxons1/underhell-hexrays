void __cdecl sub_10477D40()
{
  int v0; // eax

  v0 = unk_106E5B34;
  *(_DWORD *)byte_106E5B10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5B10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5B34 = 0;
  }
  *(_DWORD *)byte_106E5B10 = &ConCommandBase::`vftable';
}
