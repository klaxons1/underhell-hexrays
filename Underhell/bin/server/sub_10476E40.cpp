void __cdecl sub_10476E40()
{
  int v0; // eax

  v0 = unk_106DEB34;
  *(_DWORD *)byte_106DEB10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEB10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEB34 = 0;
  }
  *(_DWORD *)byte_106DEB10 = &ConCommandBase::`vftable';
}
