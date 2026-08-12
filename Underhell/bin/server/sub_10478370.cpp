void __cdecl sub_10478370()
{
  int v0; // eax

  v0 = unk_106E87BC;
  *(_DWORD *)byte_106E8798 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8798[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E87BC = 0;
  }
  *(_DWORD *)byte_106E8798 = &ConCommandBase::`vftable';
}
