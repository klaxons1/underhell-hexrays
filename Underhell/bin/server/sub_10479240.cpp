void __cdecl sub_10479240()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EE218[4];
  *(_DWORD *)byte_106EE1F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE1F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EE218[4] = 0;
  }
  *(_DWORD *)byte_106EE1F8 = &ConCommandBase::`vftable';
}
