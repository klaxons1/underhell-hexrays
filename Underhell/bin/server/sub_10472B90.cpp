void __cdecl sub_10472B90()
{
  *(_DWORD *)byte_106B9718 = &ConVar::`vftable';
  unk_106B9730 = &ConVar::`vftable';
  if ( dword_106B973C[0] )
  {
    sub_10184660(dword_106B973C[0]);
    dword_106B973C[0] = 0;
  }
  *(_DWORD *)byte_106B9718 = &ConCommandBase::`vftable';
}
