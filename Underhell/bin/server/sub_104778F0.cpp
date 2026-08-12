void __cdecl sub_104778F0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E3130[36];
  *(_DWORD *)byte_106E3130 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3130[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E3130[36] = 0;
  }
  *(_DWORD *)byte_106E3130 = &ConCommandBase::`vftable';
}
