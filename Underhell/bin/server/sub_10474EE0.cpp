void __cdecl sub_10474EE0()
{
  int v0; // eax

  v0 = unk_106D0704;
  *(_DWORD *)byte_106D06E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D06E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0704 = 0;
  }
  *(_DWORD *)byte_106D06E0 = &ConCommandBase::`vftable';
}
