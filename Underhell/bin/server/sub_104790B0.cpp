void __cdecl sub_104790B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106ED298[4];
  *(_DWORD *)byte_106ED278 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED278[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106ED298[4] = 0;
  }
  *(_DWORD *)byte_106ED278 = &ConCommandBase::`vftable';
}
