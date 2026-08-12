void __cdecl sub_10476ED0()
{
  int v0; // eax

  v0 = unk_106DEDBC;
  *(_DWORD *)byte_106DED98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DED98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEDBC = 0;
  }
  *(_DWORD *)byte_106DED98 = &ConCommandBase::`vftable';
}
