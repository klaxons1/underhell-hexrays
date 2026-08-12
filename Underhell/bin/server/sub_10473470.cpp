void __cdecl sub_10473470()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BBD50[36];
  *(_DWORD *)byte_106BBD50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBD50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BBD50[36] = 0;
  }
  *(_DWORD *)byte_106BBD50 = &ConCommandBase::`vftable';
}
