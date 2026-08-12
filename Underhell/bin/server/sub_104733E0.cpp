void __cdecl sub_104733E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106BBB18[4];
  *(_DWORD *)byte_106BBAF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBAF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106BBB18[4] = 0;
  }
  *(_DWORD *)byte_106BBAF8 = &ConCommandBase::`vftable';
}
