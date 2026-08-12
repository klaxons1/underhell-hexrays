void __cdecl sub_10478280()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E81D8[36];
  *(_DWORD *)byte_106E81D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E81D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E81D8[36] = 0;
  }
  *(_DWORD *)byte_106E81D8 = &ConCommandBase::`vftable';
}
