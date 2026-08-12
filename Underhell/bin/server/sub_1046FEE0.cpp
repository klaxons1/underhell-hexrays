void __cdecl sub_1046FEE0()
{
  *(_DWORD *)byte_10698490 = &ConVar::`vftable';
  dword_106984A8 = &ConVar::`vftable';
  if ( dword_106984B4[0] )
  {
    sub_10184660(dword_106984B4[0]);
    dword_106984B4[0] = 0;
  }
  *(_DWORD *)byte_10698490 = &ConCommandBase::`vftable';
}
