void __cdecl sub_10471800()
{
  *(_DWORD *)byte_106B3538 = &ConVar::`vftable';
  dword_106B3550 = &ConVar::`vftable';
  if ( *(_DWORD *)&algn_106B3558[4] )
  {
    sub_10184660(*(int *)&algn_106B3558[4]);
    *(_DWORD *)&algn_106B3558[4] = 0;
  }
  *(_DWORD *)byte_106B3538 = &ConCommandBase::`vftable';
}
