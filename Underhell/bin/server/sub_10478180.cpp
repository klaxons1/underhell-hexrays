void __cdecl sub_10478180()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E7B78[36];
  *(_DWORD *)byte_106E7B78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7B78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E7B78[36] = 0;
  }
  *(_DWORD *)byte_106E7B78 = &ConCommandBase::`vftable';
}
