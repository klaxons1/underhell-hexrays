void __cdecl sub_10474A70()
{
  int v0; // eax

  v0 = unk_106CEF0C;
  *(_DWORD *)byte_106CEEE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CEEE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CEF0C = 0;
  }
  *(_DWORD *)byte_106CEEE8 = &ConCommandBase::`vftable';
}
