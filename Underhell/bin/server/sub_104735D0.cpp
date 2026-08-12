void __cdecl sub_104735D0()
{
  int v0; // eax

  v0 = unk_106BD06C;
  *(_DWORD *)byte_106BD048 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BD048[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BD06C = 0;
  }
  *(_DWORD *)byte_106BD048 = &ConCommandBase::`vftable';
}
