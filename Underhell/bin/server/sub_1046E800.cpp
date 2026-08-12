void __cdecl sub_1046E800()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10690510[36];
  *(_DWORD *)byte_10690510 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690510[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10690510[36] = 0;
  }
  *(_DWORD *)byte_10690510 = &ConCommandBase::`vftable';
}
