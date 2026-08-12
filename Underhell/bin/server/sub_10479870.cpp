void __cdecl sub_10479870()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106EFFD8[4];
  *(_DWORD *)byte_106EFFB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFFB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106EFFD8[4] = 0;
  }
  *(_DWORD *)byte_106EFFB8 = &ConCommandBase::`vftable';
}
