void __cdecl sub_1046F0F0()
{
  int v0; // eax

  v0 = unk_10692E64;
  *(_DWORD *)byte_10692E40 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692E40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10692E64 = 0;
  }
  *(_DWORD *)byte_10692E40 = &ConCommandBase::`vftable';
}
