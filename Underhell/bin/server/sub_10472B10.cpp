void __cdecl sub_10472B10()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B9518[4];
  *(_DWORD *)byte_106B94F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B94F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B9518[4] = 0;
  }
  *(_DWORD *)byte_106B94F8 = &ConCommandBase::`vftable';
}
