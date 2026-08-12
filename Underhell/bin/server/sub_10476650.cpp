void __cdecl sub_10476650()
{
  int v0; // eax

  v0 = unk_106DB53C;
  *(_DWORD *)byte_106DB518 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB518[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DB53C = 0;
  }
  *(_DWORD *)byte_106DB518 = &ConCommandBase::`vftable';
}
