void __cdecl sub_10471640()
{
  *(_DWORD *)byte_106B2CD8 = &ConVar::`vftable';
  unk_106B2CF0 = &ConVar::`vftable';
  if ( dword_106B2CFC[0] )
  {
    sub_10184660(dword_106B2CFC[0]);
    dword_106B2CFC[0] = 0;
  }
  *(_DWORD *)byte_106B2CD8 = &ConCommandBase::`vftable';
}
