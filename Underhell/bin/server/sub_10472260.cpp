void __cdecl sub_10472260()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B7198[4];
  *(_DWORD *)byte_106B7178 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7178[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B7198[4] = 0;
  }
  *(_DWORD *)byte_106B7178 = &ConCommandBase::`vftable';
}
