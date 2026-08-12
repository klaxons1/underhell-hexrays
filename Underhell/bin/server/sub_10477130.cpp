void __cdecl sub_10477130()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF848[36];
  *(_DWORD *)byte_106DF848 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF848[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF848[36] = 0;
  }
  *(_DWORD *)byte_106DF848 = &ConCommandBase::`vftable';
}
