void __cdecl sub_104735E0()
{
  int v0; // eax

  v0 = unk_106BD0B4;
  *(_DWORD *)byte_106BD090 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BD090[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BD0B4 = 0;
  }
  *(_DWORD *)byte_106BD090 = &ConCommandBase::`vftable';
}
