void __cdecl sub_10478F80()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106ECC98[4];
  *(_DWORD *)byte_106ECC78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ECC78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106ECC98[4] = 0;
  }
  *(_DWORD *)byte_106ECC78 = &ConCommandBase::`vftable';
}
