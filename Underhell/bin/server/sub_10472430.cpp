void __cdecl sub_10472430()
{
  *(_DWORD *)byte_106B79C8 = &ConVar::`vftable';
  unk_106B79E0 = &ConVar::`vftable';
  if ( dword_106B79EC[0] )
  {
    sub_10184660(dword_106B79EC[0]);
    dword_106B79EC[0] = 0;
  }
  *(_DWORD *)byte_106B79C8 = &ConCommandBase::`vftable';
}
