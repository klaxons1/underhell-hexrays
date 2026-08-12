void __cdecl sub_104773A0()
{
  int v0; // eax

  v0 = unk_106E0A54;
  *(_DWORD *)byte_106E0A30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0A30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0A54 = 0;
  }
  *(_DWORD *)byte_106E0A30 = &ConCommandBase::`vftable';
}
