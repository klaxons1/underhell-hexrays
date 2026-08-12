void __cdecl sub_104788A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EA358[4];
  *(_DWORD *)byte_106EA338 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA338[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EA358[4] = 0;
  }
  *(_DWORD *)byte_106EA338 = &ConCommandBase::`vftable';
}
