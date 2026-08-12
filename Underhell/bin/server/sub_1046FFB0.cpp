void __cdecl sub_1046FFB0()
{
  *(_DWORD *)byte_10698C50 = &ConVar::`vftable';
  unk_10698C68 = &ConVar::`vftable';
  if ( dword_10698C74[0] )
  {
    sub_10184660(dword_10698C74[0]);
    dword_10698C74[0] = 0;
  }
  *(_DWORD *)byte_10698C50 = &ConCommandBase::`vftable';
}
