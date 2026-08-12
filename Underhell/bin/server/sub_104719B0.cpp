void __cdecl sub_104719B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B3D58[4];
  *(_DWORD *)byte_106B3D38 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3D38[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B3D58[4] = 0;
  }
  *(_DWORD *)byte_106B3D38 = &ConCommandBase::`vftable';
}
