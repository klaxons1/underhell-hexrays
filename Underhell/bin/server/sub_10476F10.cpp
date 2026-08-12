void __cdecl sub_10476F10()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DEED8[4];
  *(_DWORD *)byte_106DEEB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEEB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DEED8[4] = 0;
  }
  *(_DWORD *)byte_106DEEB8 = &ConCommandBase::`vftable';
}
