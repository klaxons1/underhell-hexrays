void __cdecl sub_10478510()
{
  int v0; // eax

  v0 = unk_106E8F0C;
  *(_DWORD *)byte_106E8EE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8EE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8F0C = 0;
  }
  *(_DWORD *)byte_106E8EE8 = &ConCommandBase::`vftable';
}
