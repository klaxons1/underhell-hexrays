void __cdecl sub_10477140()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF890[36];
  *(_DWORD *)byte_106DF890 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF890[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF890[36] = 0;
  }
  *(_DWORD *)byte_106DF890 = &ConCommandBase::`vftable';
}
