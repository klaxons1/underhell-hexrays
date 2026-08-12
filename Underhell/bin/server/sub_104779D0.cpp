void __cdecl sub_104779D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E3688[36];
  *(_DWORD *)byte_106E3688 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3688[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E3688[36] = 0;
  }
  *(_DWORD *)byte_106E3688 = &ConCommandBase::`vftable';
}
