void __cdecl sub_10472590()
{
  *(_DWORD *)byte_106B83C0 = &ConVar::`vftable';
  dword_106B83D8 = &ConVar::`vftable';
  if ( dword_106B83E4[0] )
  {
    sub_10184660(dword_106B83E4[0]);
    dword_106B83E4[0] = 0;
  }
  *(_DWORD *)byte_106B83C0 = &ConCommandBase::`vftable';
}
