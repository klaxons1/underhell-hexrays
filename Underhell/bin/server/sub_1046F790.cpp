void __cdecl sub_1046F790()
{
  int v0; // eax

  v0 = unk_10695FEC;
  *(_DWORD *)byte_10695FC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695FC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10695FEC = 0;
  }
  *(_DWORD *)byte_10695FC8 = &ConCommandBase::`vftable';
}
