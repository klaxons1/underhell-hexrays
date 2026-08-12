void __cdecl sub_1046E790()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10690398[4];
  *(_DWORD *)byte_10690378 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690378[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10690398[4] = 0;
  }
  *(_DWORD *)byte_10690378 = &ConCommandBase::`vftable';
}
