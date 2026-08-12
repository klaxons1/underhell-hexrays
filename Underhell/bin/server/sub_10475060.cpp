void __cdecl sub_10475060()
{
  int v0; // eax

  v0 = unk_106D0DF4;
  *(_DWORD *)byte_106D0DD0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0DD0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0DF4 = 0;
  }
  *(_DWORD *)byte_106D0DD0 = &ConCommandBase::`vftable';
}
