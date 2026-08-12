void __cdecl sub_104706C0()
{
  *(_DWORD *)byte_1069C090 = &ConVar::`vftable';
  dword_1069C0A8 = &ConVar::`vftable';
  if ( dword_1069C0B4[0] )
  {
    sub_10184660(dword_1069C0B4[0]);
    dword_1069C0B4[0] = 0;
  }
  *(_DWORD *)byte_1069C090 = &ConCommandBase::`vftable';
}
