void __cdecl sub_10473480()
{
  int v0; // eax

  v0 = unk_106BBDBC;
  *(_DWORD *)byte_106BBD98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBD98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBDBC = 0;
  }
  *(_DWORD *)byte_106BBD98 = &ConCommandBase::`vftable';
}
