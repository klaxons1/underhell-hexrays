void __cdecl sub_10479B60()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106F0B58[4];
  *(_DWORD *)byte_106F0B38 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0B38[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106F0B58[4] = 0;
  }
  *(_DWORD *)byte_106F0B38 = &ConCommandBase::`vftable';
}
