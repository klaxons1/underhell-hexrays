void __cdecl sub_10478050()
{
  int v0; // eax

  v0 = unk_106E698C;
  *(_DWORD *)byte_106E6968 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6968[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E698C = 0;
  }
  *(_DWORD *)byte_106E6968 = &ConCommandBase::`vftable';
}
