void __cdecl sub_10477960()
{
  int v0; // eax

  v0 = unk_106E34B4;
  *(_DWORD *)byte_106E3490 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3490[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E34B4 = 0;
  }
  *(_DWORD *)byte_106E3490 = &ConCommandBase::`vftable';
}
