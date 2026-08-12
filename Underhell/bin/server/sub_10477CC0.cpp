void __cdecl sub_10477CC0()
{
  int v0; // eax

  v0 = unk_106E58AC;
  *(_DWORD *)byte_106E5888 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5888[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E58AC = 0;
  }
  *(_DWORD *)byte_106E5888 = &ConCommandBase::`vftable';
}
