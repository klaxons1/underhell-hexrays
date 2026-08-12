void __cdecl sub_1046ED80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10692630[36];
  *(_DWORD *)byte_10692630 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692630[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10692630[36] = 0;
  }
  *(_DWORD *)byte_10692630 = &ConCommandBase::`vftable';
}
