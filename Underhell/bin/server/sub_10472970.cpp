void __cdecl sub_10472970()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B8D18[4];
  *(_DWORD *)byte_106B8CF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8CF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B8D18[4] = 0;
  }
  *(_DWORD *)byte_106B8CF8 = &ConCommandBase::`vftable';
}
