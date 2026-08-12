void __cdecl sub_10478560()
{
  int v0; // eax

  v0 = unk_106E9074;
  *(_DWORD *)byte_106E9050 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9050[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9074 = 0;
  }
  *(_DWORD *)byte_106E9050 = &ConCommandBase::`vftable';
}
