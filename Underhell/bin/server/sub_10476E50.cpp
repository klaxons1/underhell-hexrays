void __cdecl sub_10476E50()
{
  int v0; // eax

  v0 = unk_106DEB7C;
  *(_DWORD *)byte_106DEB58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEB58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEB7C = 0;
  }
  *(_DWORD *)byte_106DEB58 = &ConCommandBase::`vftable';
}
