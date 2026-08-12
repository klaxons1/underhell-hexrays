void __cdecl sub_10470E90()
{
  *(_DWORD *)byte_106AFDE8 = &ConVar::`vftable';
  unk_106AFE00 = &ConVar::`vftable';
  if ( dword_106AFE0C[0] )
  {
    sub_10184660(dword_106AFE0C[0]);
    dword_106AFE0C[0] = 0;
  }
  *(_DWORD *)byte_106AFDE8 = &ConCommandBase::`vftable';
}
