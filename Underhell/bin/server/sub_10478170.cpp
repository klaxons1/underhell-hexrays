void __cdecl sub_10478170()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E7B28[36];
  *(_DWORD *)byte_106E7B28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7B28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E7B28[36] = 0;
  }
  *(_DWORD *)byte_106E7B28 = &ConCommandBase::`vftable';
}
