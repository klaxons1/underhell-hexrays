void __cdecl sub_10472360()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B7618[4];
  *(_DWORD *)byte_106B75F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B75F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B7618[4] = 0;
  }
  *(_DWORD *)byte_106B75F8 = &ConCommandBase::`vftable';
}
