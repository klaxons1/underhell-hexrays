void __cdecl sub_10477AA0()
{
  int v0; // eax

  v0 = unk_106E3A54;
  *(_DWORD *)byte_106E3A30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3A30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3A54 = 0;
  }
  *(_DWORD *)byte_106E3A30 = &ConCommandBase::`vftable';
}
