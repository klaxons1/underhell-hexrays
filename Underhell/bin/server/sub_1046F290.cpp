void __cdecl sub_1046F290()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10693358[4];
  *(_DWORD *)byte_10693338 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693338[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10693358[4] = 0;
  }
  *(_DWORD *)byte_10693338 = &ConCommandBase::`vftable';
}
