void __cdecl sub_104770A0()
{
  int v0; // eax

  v0 = unk_106DF5E4;
  *(_DWORD *)byte_106DF5C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF5C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DF5E4 = 0;
  }
  *(_DWORD *)byte_106DF5C0 = &ConCommandBase::`vftable';
}
