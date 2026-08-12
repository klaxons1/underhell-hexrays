void __cdecl sub_10476CE0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DE758[4];
  *(_DWORD *)byte_106DE738 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE738[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DE758[4] = 0;
  }
  *(_DWORD *)byte_106DE738 = &ConCommandBase::`vftable';
}
