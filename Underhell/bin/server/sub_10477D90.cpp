void __cdecl sub_10477D90()
{
  int v0; // eax

  v0 = unk_106E5BEC;
  *(_DWORD *)byte_106E5BC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5BC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5BEC = 0;
  }
  *(_DWORD *)byte_106E5BC8 = &ConCommandBase::`vftable';
}
