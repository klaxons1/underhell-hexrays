void __cdecl sub_10477410()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E0C00[36];
  *(_DWORD *)byte_106E0C00 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0C00[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E0C00[36] = 0;
  }
  *(_DWORD *)byte_106E0C00 = &ConCommandBase::`vftable';
}
