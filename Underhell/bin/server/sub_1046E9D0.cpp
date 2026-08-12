void __cdecl sub_1046E9D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10690D58[4];
  *(_DWORD *)byte_10690D38 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690D38[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10690D58[4] = 0;
  }
  *(_DWORD *)byte_10690D38 = &ConCommandBase::`vftable';
}
