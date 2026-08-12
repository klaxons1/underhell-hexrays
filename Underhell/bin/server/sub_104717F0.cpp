void __cdecl sub_104717F0()
{
  *(_DWORD *)byte_106B34F0 = &ConVar::`vftable';
  unk_106B3508 = &ConVar::`vftable';
  if ( dword_106B3514[0] )
  {
    sub_10184660(dword_106B3514[0]);
    dword_106B3514[0] = 0;
  }
  *(_DWORD *)byte_106B34F0 = &ConCommandBase::`vftable';
}
