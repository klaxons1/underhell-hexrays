void __cdecl sub_104735F0()
{
  int v0; // eax

  v0 = unk_106BD0FC;
  *(_DWORD *)byte_106BD0D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BD0D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BD0FC = 0;
  }
  *(_DWORD *)byte_106BD0D8 = &ConCommandBase::`vftable';
}
