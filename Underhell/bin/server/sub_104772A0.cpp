void __cdecl sub_104772A0()
{
  *(_DWORD *)byte_106E05F8 = &ConVar::`vftable';
  unk_106E0610 = &ConVar::`vftable';
  if ( *(_DWORD *)&algn_106E0618[4] )
  {
    sub_10184660(*(int *)&algn_106E0618[4]);
    *(_DWORD *)&algn_106E0618[4] = 0;
  }
  *(_DWORD *)byte_106E05F8 = &ConCommandBase::`vftable';
}
