void __cdecl sub_10473330()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BB7E0[36];
  *(_DWORD *)byte_106BB7E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB7E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BB7E0[36] = 0;
  }
  *(_DWORD *)byte_106BB7E0 = &ConCommandBase::`vftable';
}
