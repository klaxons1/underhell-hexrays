void __cdecl sub_10478590()
{
  int v0; // eax

  v0 = unk_106E914C;
  *(_DWORD *)byte_106E9128 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9128[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E914C = 0;
  }
  *(_DWORD *)byte_106E9128 = &ConCommandBase::`vftable';
}
