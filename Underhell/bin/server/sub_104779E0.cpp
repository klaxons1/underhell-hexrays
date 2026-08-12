void __cdecl sub_104779E0()
{
  int v0; // eax

  v0 = unk_106E36F4;
  *(_DWORD *)byte_106E36D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E36D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E36F4 = 0;
  }
  *(_DWORD *)byte_106E36D0 = &ConCommandBase::`vftable';
}
