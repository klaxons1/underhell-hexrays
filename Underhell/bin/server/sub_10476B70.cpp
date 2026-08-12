void __cdecl sub_10476B70()
{
  int v0; // eax

  v0 = unk_106DE1CC;
  *(_DWORD *)byte_106DE1A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE1A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE1CC = 0;
  }
  *(_DWORD *)byte_106DE1A8 = &ConCommandBase::`vftable';
}
