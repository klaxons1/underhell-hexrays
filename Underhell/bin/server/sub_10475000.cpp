void __cdecl sub_10475000()
{
  int v0; // eax

  v0 = unk_106D0C4C;
  *(_DWORD *)byte_106D0C28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0C28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0C4C = 0;
  }
  *(_DWORD *)byte_106D0C28 = &ConCommandBase::`vftable';
}
