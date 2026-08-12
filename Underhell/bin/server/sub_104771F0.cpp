void __cdecl sub_104771F0()
{
  int v0; // eax

  v0 = unk_106DFBCC;
  *(_DWORD *)byte_106DFBA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DFBA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DFBCC = 0;
  }
  *(_DWORD *)byte_106DFBA8 = &ConCommandBase::`vftable';
}
