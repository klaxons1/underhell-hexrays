void __cdecl sub_1046F730()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10695598[36];
  *(_DWORD *)byte_10695598 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695598[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10695598[36] = 0;
  }
  *(_DWORD *)byte_10695598 = &ConCommandBase::`vftable';
}
