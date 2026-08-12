void __cdecl sub_10476F80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF0B0[36];
  *(_DWORD *)byte_106DF0B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF0B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF0B0[36] = 0;
  }
  *(_DWORD *)byte_106DF0B0 = &ConCommandBase::`vftable';
}
