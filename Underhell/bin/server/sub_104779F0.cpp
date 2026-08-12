void __cdecl sub_104779F0()
{
  int v0; // eax

  v0 = unk_106E373C;
  *(_DWORD *)byte_106E3718 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3718[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E373C = 0;
  }
  *(_DWORD *)byte_106E3718 = &ConCommandBase::`vftable';
}
