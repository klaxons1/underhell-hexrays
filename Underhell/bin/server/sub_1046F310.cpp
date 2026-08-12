void __cdecl sub_1046F310()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10693520[36];
  *(_DWORD *)byte_10693520 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693520[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10693520[36] = 0;
  }
  *(_DWORD *)byte_10693520 = &ConCommandBase::`vftable';
}
