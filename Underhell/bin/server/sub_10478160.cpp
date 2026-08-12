void __cdecl sub_10478160()
{
  int v0; // eax

  v0 = unk_106E7B04;
  *(_DWORD *)byte_106E7AE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7AE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E7B04 = 0;
  }
  *(_DWORD *)byte_106E7AE0 = &ConCommandBase::`vftable';
}
