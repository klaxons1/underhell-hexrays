void __cdecl sub_10472310()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B7490[36];
  *(_DWORD *)byte_106B7490 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7490[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B7490[36] = 0;
  }
  *(_DWORD *)byte_106B7490 = &ConCommandBase::`vftable';
}
