void __cdecl sub_10475190()
{
  int v0; // eax

  v0 = unk_106D1344;
  *(_DWORD *)byte_106D1320 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1320[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1344 = 0;
  }
  *(_DWORD *)byte_106D1320 = &ConCommandBase::`vftable';
}
