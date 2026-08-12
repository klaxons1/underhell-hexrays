void __cdecl sub_10472AA0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B9298[4];
  *(_DWORD *)byte_106B9278 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9278[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B9298[4] = 0;
  }
  *(_DWORD *)byte_106B9278 = &ConCommandBase::`vftable';
}
