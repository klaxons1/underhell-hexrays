void __cdecl sub_1046FF90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10698BD8[4];
  *(_DWORD *)byte_10698BB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698BB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10698BD8[4] = 0;
  }
  *(_DWORD *)byte_10698BB8 = &ConCommandBase::`vftable';
}
