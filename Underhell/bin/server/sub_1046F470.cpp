void __cdecl sub_1046F470()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10694198[4];
  *(_DWORD *)byte_10694178 = &ConVar::`vftable';
  *(_DWORD *)&byte_10694178[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10694198[4] = 0;
  }
  *(_DWORD *)byte_10694178 = &ConCommandBase::`vftable';
}
