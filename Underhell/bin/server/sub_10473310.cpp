void __cdecl sub_10473310()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BB750[36];
  *(_DWORD *)byte_106BB750 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB750[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BB750[36] = 0;
  }
  *(_DWORD *)byte_106BB750 = &ConCommandBase::`vftable';
}
