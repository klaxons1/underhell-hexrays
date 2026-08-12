void __cdecl sub_1046F480()
{
  *(_DWORD *)byte_106941C0 = &ConVar::`vftable';
  unk_106941D8 = &ConVar::`vftable';
  if ( dword_106941E4[0] )
  {
    sub_10184660(dword_106941E4[0]);
    dword_106941E4[0] = 0;
  }
  *(_DWORD *)byte_106941C0 = &ConCommandBase::`vftable';
}
