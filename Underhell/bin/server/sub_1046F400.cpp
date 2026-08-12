void __cdecl sub_1046F400()
{
  int v0; // eax

  v0 = unk_1069384C;
  *(_DWORD *)byte_10693828 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693828[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069384C = 0;
  }
  *(_DWORD *)byte_10693828 = &ConCommandBase::`vftable';
}
