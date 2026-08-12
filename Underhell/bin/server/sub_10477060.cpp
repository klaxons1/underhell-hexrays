void __cdecl sub_10477060()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF4A0[36];
  *(_DWORD *)byte_106DF4A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF4A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF4A0[36] = 0;
  }
  *(_DWORD *)byte_106DF4A0 = &ConCommandBase::`vftable';
}
