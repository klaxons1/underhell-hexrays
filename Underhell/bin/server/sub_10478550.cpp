void __cdecl sub_10478550()
{
  int v0; // eax

  v0 = unk_106E902C;
  *(_DWORD *)byte_106E9008 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9008[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E902C = 0;
  }
  *(_DWORD *)byte_106E9008 = &ConCommandBase::`vftable';
}
