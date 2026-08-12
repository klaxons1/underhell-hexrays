void __cdecl sub_10477A20()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E37F0[36];
  *(_DWORD *)byte_106E37F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E37F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E37F0[36] = 0;
  }
  *(_DWORD *)byte_106E37F0 = &ConCommandBase::`vftable';
}
