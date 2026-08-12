void __cdecl sub_104785D0()
{
  int v0; // eax

  v0 = unk_106E926C;
  *(_DWORD *)byte_106E9248 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9248[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E926C = 0;
  }
  *(_DWORD *)byte_106E9248 = &ConCommandBase::`vftable';
}
