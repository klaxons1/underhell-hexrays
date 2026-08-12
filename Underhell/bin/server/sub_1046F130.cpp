void __cdecl sub_1046F130()
{
  int v0; // eax

  v0 = unk_10692F4C;
  *(_DWORD *)byte_10692F28 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692F28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10692F4C = 0;
  }
  *(_DWORD *)byte_10692F28 = &ConCommandBase::`vftable';
}
