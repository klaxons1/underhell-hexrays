void __cdecl sub_10477A10()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E37A8[36];
  *(_DWORD *)byte_106E37A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E37A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E37A8[36] = 0;
  }
  *(_DWORD *)byte_106E37A8 = &ConCommandBase::`vftable';
}
