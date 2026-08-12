void __cdecl sub_10472B80()
{
  *(_DWORD *)byte_106B96D0 = &ConVar::`vftable';
  unk_106B96E8 = &ConVar::`vftable';
  if ( dword_106B96F4[0] )
  {
    sub_10184660(dword_106B96F4[0]);
    dword_106B96F4[0] = 0;
  }
  *(_DWORD *)byte_106B96D0 = &ConCommandBase::`vftable';
}
