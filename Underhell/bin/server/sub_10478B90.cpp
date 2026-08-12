void __cdecl sub_10478B90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EB298[4];
  *(_DWORD *)byte_106EB278 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB278[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EB298[4] = 0;
  }
  *(_DWORD *)byte_106EB278 = &ConCommandBase::`vftable';
}
