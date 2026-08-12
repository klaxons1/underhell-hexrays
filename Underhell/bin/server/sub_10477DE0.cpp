void __cdecl sub_10477DE0()
{
  int v0; // eax

  v0 = unk_106E5D54;
  *(_DWORD *)byte_106E5D30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5D30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5D54 = 0;
  }
  *(_DWORD *)byte_106E5D30 = &ConCommandBase::`vftable';
}
