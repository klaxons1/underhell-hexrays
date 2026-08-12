void __cdecl sub_104712A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B13D8[4];
  *(_DWORD *)byte_106B13B8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B13B8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B13D8[4] = 0;
  }
  *(_DWORD *)byte_106B13B8 = &ConCommandBase::`vftable';
}
