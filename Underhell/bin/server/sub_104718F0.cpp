void __cdecl sub_104718F0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B3758[4];
  *(_DWORD *)byte_106B3738 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3738[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B3758[4] = 0;
  }
  *(_DWORD *)byte_106B3738 = &ConCommandBase::`vftable';
}
