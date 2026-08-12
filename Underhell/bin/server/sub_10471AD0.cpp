void __cdecl sub_10471AD0()
{
  *(_DWORD *)byte_106B4C00 = &ConVar::`vftable';
  dword_106B4C18 = &ConVar::`vftable';
  if ( dword_106B4C24[0] )
  {
    sub_10184660(dword_106B4C24[0]);
    dword_106B4C24[0] = 0;
  }
  *(_DWORD *)byte_106B4C00 = &ConCommandBase::`vftable';
}
