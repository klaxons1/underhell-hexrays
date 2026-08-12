void __cdecl sub_104732C0()
{
  int v0; // eax

  v0 = unk_106BB60C;
  *(_DWORD *)byte_106BB5E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB5E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB60C = 0;
  }
  *(_DWORD *)byte_106BB5E8 = &ConCommandBase::`vftable';
}
