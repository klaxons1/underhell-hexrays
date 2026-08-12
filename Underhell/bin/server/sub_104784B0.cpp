void __cdecl sub_104784B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E8D58[4];
  *(_DWORD *)byte_106E8D38 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8D38[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E8D58[4] = 0;
  }
  *(_DWORD *)byte_106E8D38 = &ConCommandBase::`vftable';
}
