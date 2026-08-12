void __cdecl sub_10478D30()
{
  int v0; // eax

  v0 = unk_106EBCA4;
  *(_DWORD *)byte_106EBC80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBC80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EBCA4 = 0;
  }
  *(_DWORD *)byte_106EBC80 = &ConCommandBase::`vftable';
}
