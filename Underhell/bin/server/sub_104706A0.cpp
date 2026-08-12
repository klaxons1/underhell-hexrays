void __cdecl sub_104706A0()
{
  *(_DWORD *)byte_1069BF90 = &ConVar::`vftable';
  unk_1069BFA8 = &ConVar::`vftable';
  if ( dword_1069BFB4[0] )
  {
    sub_10184660(dword_1069BFB4[0]);
    dword_1069BFB4[0] = 0;
  }
  *(_DWORD *)byte_1069BF90 = &ConCommandBase::`vftable';
}
