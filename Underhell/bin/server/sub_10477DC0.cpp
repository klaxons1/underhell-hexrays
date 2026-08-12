void __cdecl sub_10477DC0()
{
  int v0; // eax

  v0 = unk_106E5CC4;
  *(_DWORD *)byte_106E5CA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5CA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5CC4 = 0;
  }
  *(_DWORD *)byte_106E5CA0 = &ConCommandBase::`vftable';
}
