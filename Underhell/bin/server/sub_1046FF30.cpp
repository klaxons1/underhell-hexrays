void __cdecl sub_1046FF30()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10698618[4];
  *(_DWORD *)byte_106985F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106985F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10698618[4] = 0;
  }
  *(_DWORD *)byte_106985F8 = &ConCommandBase::`vftable';
}
