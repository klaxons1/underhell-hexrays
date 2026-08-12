void __cdecl sub_10478780()
{
  int v0; // eax

  v0 = unk_106E9D7C;
  *(_DWORD *)byte_106E9D58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9D58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9D7C = 0;
  }
  *(_DWORD *)byte_106E9D58 = &ConCommandBase::`vftable';
}
