void __cdecl sub_10476D50()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106DE898[4];
  *(_DWORD *)byte_106DE878 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE878[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106DE898[4] = 0;
  }
  *(_DWORD *)byte_106DE878 = &ConCommandBase::`vftable';
}
