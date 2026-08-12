void __cdecl sub_1046F750()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10695628[36];
  *(_DWORD *)byte_10695628 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695628[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10695628[36] = 0;
  }
  *(_DWORD *)byte_10695628 = &ConCommandBase::`vftable';
}
