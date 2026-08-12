void __cdecl sub_10478A50()
{
  int v0; // eax

  v0 = unk_106EAC4C;
  *(_DWORD *)byte_106EAC28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAC28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAC4C = 0;
  }
  *(_DWORD *)byte_106EAC28 = &ConCommandBase::`vftable';
}
