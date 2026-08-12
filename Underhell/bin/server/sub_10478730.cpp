void __cdecl sub_10478730()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E9A88[36];
  *(_DWORD *)byte_106E9A88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9A88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E9A88[36] = 0;
  }
  *(_DWORD *)byte_106E9A88 = &ConCommandBase::`vftable';
}
