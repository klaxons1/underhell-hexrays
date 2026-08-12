void __cdecl sub_10476E90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DEC98[4];
  *(_DWORD *)byte_106DEC78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEC78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DEC98[4] = 0;
  }
  *(_DWORD *)byte_106DEC78 = &ConCommandBase::`vftable';
}
