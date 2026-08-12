void __cdecl sub_1046EC30()
{
  int v0; // eax

  v0 = unk_10692174;
  *(_DWORD *)byte_10692150 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692150[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10692174 = 0;
  }
  *(_DWORD *)byte_10692150 = &ConCommandBase::`vftable';
}
