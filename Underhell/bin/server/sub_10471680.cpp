void __cdecl sub_10471680()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B2E18[4];
  *(_DWORD *)byte_106B2DF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2DF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B2E18[4] = 0;
  }
  *(_DWORD *)byte_106B2DF8 = &ConCommandBase::`vftable';
}
