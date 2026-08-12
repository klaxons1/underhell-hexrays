void __cdecl sub_104779C0()
{
  int v0; // eax

  v0 = unk_106E3664;
  *(_DWORD *)byte_106E3640 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3640[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3664 = 0;
  }
  *(_DWORD *)byte_106E3640 = &ConCommandBase::`vftable';
}
