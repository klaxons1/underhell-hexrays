void __cdecl sub_10478920()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EA458[4];
  *(_DWORD *)byte_106EA438 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA438[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EA458[4] = 0;
  }
  *(_DWORD *)byte_106EA438 = &ConCommandBase::`vftable';
}
