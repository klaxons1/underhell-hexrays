void __cdecl sub_10478E00()
{
  int v0; // eax

  v0 = unk_106EC144;
  *(_DWORD *)byte_106EC120 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EC120[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EC144 = 0;
  }
  *(_DWORD *)byte_106EC120 = &ConCommandBase::`vftable';
}
