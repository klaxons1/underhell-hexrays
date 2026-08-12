void __cdecl sub_1046ED50()
{
  int v0; // eax

  v0 = unk_1069257C;
  *(_DWORD *)byte_10692558 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692558[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069257C = 0;
  }
  *(_DWORD *)byte_10692558 = &ConCommandBase::`vftable';
}
