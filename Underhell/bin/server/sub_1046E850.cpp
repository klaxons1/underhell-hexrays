void __cdecl sub_1046E850()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10690698[4];
  *(_DWORD *)byte_10690678 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690678[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10690698[4] = 0;
  }
  *(_DWORD *)byte_10690678 = &ConCommandBase::`vftable';
}
