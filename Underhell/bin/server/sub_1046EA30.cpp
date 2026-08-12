void __cdecl sub_1046EA30()
{
  int v0; // eax

  v0 = unk_10690FD4;
  *(_DWORD *)byte_10690FB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690FB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690FD4 = 0;
  }
  *(_DWORD *)byte_10690FB0 = &ConCommandBase::`vftable';
}
