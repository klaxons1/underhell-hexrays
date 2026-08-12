void __cdecl sub_1046E7D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10690458[4];
  *(_DWORD *)byte_10690438 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690438[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10690458[4] = 0;
  }
  *(_DWORD *)byte_10690438 = &ConCommandBase::`vftable';
}
