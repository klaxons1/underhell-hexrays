void __cdecl sub_10474E70()
{
  int v0; // eax

  v0 = unk_106D054C;
  *(_DWORD *)byte_106D0528 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0528[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D054C = 0;
  }
  *(_DWORD *)byte_106D0528 = &ConCommandBase::`vftable';
}
