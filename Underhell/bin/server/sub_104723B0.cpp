void __cdecl sub_104723B0()
{
  *(_DWORD *)byte_106B7788 = &ConVar::`vftable';
  dword_106B77A0 = &ConVar::`vftable';
  if ( dword_106B77AC[0] )
  {
    sub_10184660(dword_106B77AC[0]);
    dword_106B77AC[0] = 0;
  }
  *(_DWORD *)byte_106B7788 = &ConCommandBase::`vftable';
}
