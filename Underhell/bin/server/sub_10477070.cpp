void __cdecl sub_10477070()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF4E8[36];
  *(_DWORD *)byte_106DF4E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF4E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF4E8[36] = 0;
  }
  *(_DWORD *)byte_106DF4E8 = &ConCommandBase::`vftable';
}
