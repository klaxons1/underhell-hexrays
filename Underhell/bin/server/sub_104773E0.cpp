void __cdecl sub_104773E0()
{
  int v0; // eax

  v0 = unk_106E0B4C;
  *(_DWORD *)byte_106E0B28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0B28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0B4C = 0;
  }
  *(_DWORD *)byte_106E0B28 = &ConCommandBase::`vftable';
}
