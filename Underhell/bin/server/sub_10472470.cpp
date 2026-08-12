void __cdecl sub_10472470()
{
  *(_DWORD *)byte_106B7AA8 = &ConVar::`vftable';
  unk_106B7AC0 = &ConVar::`vftable';
  if ( dword_106B7ACC[0] )
  {
    sub_10184660(dword_106B7ACC[0]);
    dword_106B7ACC[0] = 0;
  }
  *(_DWORD *)byte_106B7AA8 = &ConCommandBase::`vftable';
}
