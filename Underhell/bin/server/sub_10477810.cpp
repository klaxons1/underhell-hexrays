void __cdecl sub_10477810()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E2D00[36];
  *(_DWORD *)byte_106E2D00 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2D00[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E2D00[36] = 0;
  }
  *(_DWORD *)byte_106E2D00 = &ConCommandBase::`vftable';
}
