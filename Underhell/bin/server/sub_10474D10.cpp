void __cdecl sub_10474D10()
{
  int v0; // eax

  v0 = unk_106CFF4C;
  *(_DWORD *)byte_106CFF28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CFF28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CFF4C = 0;
  }
  *(_DWORD *)byte_106CFF28 = &ConCommandBase::`vftable';
}
