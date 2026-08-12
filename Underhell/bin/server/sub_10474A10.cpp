void __cdecl sub_10474A10()
{
  int v0; // eax

  v0 = unk_106CEE0C;
  *(_DWORD *)byte_106CEDE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CEDE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CEE0C = 0;
  }
  *(_DWORD *)byte_106CEDE8 = &ConCommandBase::`vftable';
}
