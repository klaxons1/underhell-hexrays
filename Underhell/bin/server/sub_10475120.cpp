void __cdecl sub_10475120()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106D1158[4];
  *(_DWORD *)byte_106D1138 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1138[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106D1158[4] = 0;
  }
  *(_DWORD *)byte_106D1138 = &ConCommandBase::`vftable';
}
