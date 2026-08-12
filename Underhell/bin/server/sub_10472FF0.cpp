void __cdecl sub_10472FF0()
{
  *(_DWORD *)byte_106BA700 = &ConVar::`vftable';
  dword_106BA718 = &ConVar::`vftable';
  if ( dword_106BA724[0] )
  {
    sub_10184660(dword_106BA724[0]);
    dword_106BA724[0] = 0;
  }
  *(_DWORD *)byte_106BA700 = &ConCommandBase::`vftable';
}
