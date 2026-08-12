void __cdecl sub_104732B0()
{
  int v0; // eax

  v0 = unk_106BB5C4;
  *(_DWORD *)byte_106BB5A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB5A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB5C4 = 0;
  }
  *(_DWORD *)byte_106BB5A0 = &ConCommandBase::`vftable';
}
