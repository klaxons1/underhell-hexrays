void __cdecl sub_10477F50()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E63A8[36];
  *(_DWORD *)byte_106E63A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E63A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E63A8[36] = 0;
  }
  *(_DWORD *)byte_106E63A8 = &ConCommandBase::`vftable';
}
