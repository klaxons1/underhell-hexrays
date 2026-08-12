void __cdecl sub_104787F0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E9F50[36];
  *(_DWORD *)byte_106E9F50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9F50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E9F50[36] = 0;
  }
  *(_DWORD *)byte_106E9F50 = &ConCommandBase::`vftable';
}
